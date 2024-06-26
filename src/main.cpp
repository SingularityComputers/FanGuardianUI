#include "helpers.h"
#include <Wire.h>
#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <lvgl.h>
#include "ui/ui.h"
#include <FastLED.h>
#include <Wire.h>
#include <Adafruit_ADS1X15.h>
#include <INA3221.h>

// RGB led driver pin
#define LED_PIN 10

// thermistors
#define THERMISTOR1_PIN 0
#define THERMISTOR2_PIN 1
#define THERMISTOR3_PIN 2
#define THERMISTOR4_PIN 3
#define ADC_RESOLUTION 12
#define NOMINAL_RESISTANCE 10000.0         // Nominal resistance of the thermistor (ohms)
#define NOMINAL_SERIES_RESISTANCE 10000.0  // Nominal resistance of the series resistor (ohms)
#define NOMINAL_TEMPERATURE 25.0           // Nominal temperature of the thermistor (Celsius)
#define B_COEFFICIENT 3950.0               // B coefficient of the thermistor
#define THERMISTOR_VREF 5                  // Ref voltage for measurement

// I2C pins
#define CUSTOM_SDA_PIN 11
#define CUSTOM_SCL_PIN 21

// I2C address for INA3221
#define INA3221_ADDRESS 0x40

// maximum number of concurrent scheduled tasks
#define MAX_TASKS 10

// debounce delay for fans (in milliseconds)
#define DEBOUNCE_DELAY 1000

// number of temp sensors
#define NUMBER_OF_TEMPS 4

volatile unsigned int fanRPMs[NUMBER_OF_FANS] = {0,0,0,0};
volatile unsigned long fanLastAlertTime[NUMBER_OF_FANS] = {0,0,0,0};
volatile bool fanIsAlerting[NUMBER_OF_FANS] = {false, false, false, false};
volatile float voltages[3] = {0.0,0.0,0.0};
bool isADSFailed = false;

// temperature variable
volatile float temps[4] = {0.0,0.0,0.0,0.0};

volatile bool newUARTData = false;
String receivedData = "";
Adafruit_ADS1115 ads;
INA3221 ina_0(INA3221_ADDR40_GND);


// LVGL class definition
class LGFX : public lgfx::LGFX_Device {
  lgfx::Panel_ST7796 _panel_instance;
  lgfx::Bus_Parallel8 _bus_instance;
  lgfx::Light_PWM _light_instance;
  lgfx::Touch_FT5x06 _touch_instance;

public:
  LGFX(void) {
    {
      auto cfg = _bus_instance.config();
      cfg.freq_write = 60000000;
      cfg.pin_wr = 47;
      cfg.pin_rd = -1;
      cfg.pin_rs = 0;
      cfg.pin_d0 = 9;
      cfg.pin_d1 = 46;
      cfg.pin_d2 = 3;
      cfg.pin_d3 = 8;
      cfg.pin_d4 = 18;
      cfg.pin_d5 = 17;
      cfg.pin_d6 = 16;
      cfg.pin_d7 = 15;
      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {
      auto cfg = _panel_instance.config();
      cfg.pin_cs = -1;
      cfg.pin_rst = 4;
      cfg.pin_busy = -1;
      cfg.memory_width = 320;
      cfg.memory_height = 480;
      cfg.panel_width = 320;
      cfg.panel_height = 480;
      cfg.offset_x = 0;
      cfg.offset_y = 0;
      cfg.offset_rotation = 0;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = true;
      cfg.invert = true;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      cfg.bus_shared = false;

      _panel_instance.config(cfg);
    }

    {
      auto cfg = _light_instance.config();
      cfg.pin_bl = 45;
      cfg.invert = false;
      cfg.freq = 44100;
      cfg.pwm_channel = 7;

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance);
    }

    {
      auto cfg = _touch_instance.config();
      cfg.i2c_port = 1;
      cfg.i2c_addr = 0x38;
      cfg.pin_sda = 6;
      cfg.pin_scl = 5;
      cfg.freq = 600000;
      cfg.x_min = 0;
      cfg.x_max = 320;
      cfg.y_min = 0;
      cfg.y_max = 480;

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance);
    }

    setPanel(&_panel_instance);
  }
};

// LVGL variables
static LGFX tft;
static const uint32_t screenWidth = 480;
static const uint32_t screenHeight = 320;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];
lv_obj_t *ui_rpm_arcs[NUMBER_OF_FANS];
lv_obj_t *ui_rpm_labels[NUMBER_OF_FANS];

// function declarations
void initDisplay();
void initLED();
void nonBlockingDelay(uint8_t delayIndex, unsigned long delayTime, void (*functionToRun)());
void sendUARTMessage(const String& message);
void core0Task(void *parameter);
void core1Task(void *parameter);
void uartTask(void *parameter);
void readVoltages();
void readRPMs();
void ledController();
void rpmWatcher();
void loadSettingsFromNVFlash();

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

/* Read the touchpad */
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  uint16_t x, y;
  if (tft.getTouch(&x, &y)) {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = x;
    data->point.y = y;

  } else {
    data->state = LV_INDEV_STATE_REL;
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Board started.");
  initDisplay();

  Serial0.begin(9600);
  Serial0.flush();

  // Configure Wire library with custom SDA and SCL pins
  Wire.begin(CUSTOM_SDA_PIN, CUSTOM_SCL_PIN);

  // Initialize the ADS1115
  if (!ads.begin()) {
    tft.fillScreen(tft.color565(0, 0, 0));      // Clear the screen
    tft.setTextColor(tft.color565(255, 0, 0));  // Set text color to red
    tft.setTextSize(1);                         // Set text size
    tft.setCursor(0, 0);                        // Print text to the top-left corner
    tft.print("ERROR: ADS1115 initialization failed!");
    isADSFailed = true;
    delay(10000);
  }
  ads.setGain(GAIN_ONE);

  // Initialize INA3221
  ina_0.begin(&Wire);
  ina_0.reset();
  ina_0.setShuntRes(100, 100, 100);

  // Initialize WS2812B
  initLED();

  uint32_t DISP_BUF_SIZE = 480 * 320;
  lv_color_t* buf1 = (lv_color_t*)malloc(DISP_BUF_SIZE * sizeof(lv_color_t));
  lv_color_t* buf2 = (lv_color_t*)malloc(DISP_BUF_SIZE * sizeof(lv_color_t));

  lv_init();
  lv_disp_draw_buf_init(&draw_buf, buf1, buf2, DISP_BUF_SIZE);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);

  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

  ui_init();

  // create custom keyboard map
  static const char * kb_mapx[] = {"1", "2", "3", "\n", 
                                  "4", "5", "6", "\n",
                                  "7", "8", "9", "\n",
                                  LV_SYMBOL_BACKSPACE, "0", NULL, NULL
                                };
  static const lv_btnmatrix_ctrl_t kb_ctrlx[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
  lv_keyboard_set_map(ui_LEDSettingsScreenKB, LV_KEYBOARD_MODE_USER_1, kb_mapx, kb_ctrlx);
  lv_keyboard_set_map(ui_AlertSettingsScreenKB, LV_KEYBOARD_MODE_USER_1, kb_mapx, kb_ctrlx);

  // load user settings from NVRAM
  loadSettingsFromNVFlash();

  // set pointers of ui_ArcFan objects
  ui_rpm_arcs[0] = ui_ArcFan1;
  ui_rpm_arcs[1] = ui_ArcFan2;
  ui_rpm_arcs[2] = ui_ArcFan3;
  ui_rpm_arcs[3] = ui_ArcFan4;

  // set pointers of ui_ValueFan objects
  ui_rpm_labels[0] = ui_ValueFan1;
  ui_rpm_labels[1] = ui_ValueFan2;
  ui_rpm_labels[2] = ui_ValueFan3;
  ui_rpm_labels[3] = ui_ValueFan4;

  // Create a task to run on Core 0
  xTaskCreatePinnedToCore(core0Task, "ScreenTask", 4096, NULL, 1, NULL, 0);

  // Create a task to run on Core 1
  xTaskCreatePinnedToCore(core1Task, "MainTask", 10000, NULL, 1, NULL, 1);
  xTaskCreatePinnedToCore(uartTask, "UartTask", 2048, NULL, 1, NULL, 1);
}

// global variable to track elapsed milliseconds
volatile unsigned long currentMillis = 0;
void loop() {
  currentMillis = millis();
  lv_timer_handler();
  delay(5);
}

/* initDisplay initializes display */
void initDisplay() {
  tft.begin();
  tft.setRotation(1);
  tft.setBrightness(255);
}

/* initLED initializes the RGB leds */
void initLED() {
  preferences.begin("settings", false);
  value_r = preferences.getUChar("value_r", 0);
  value_g = preferences.getUChar("value_g", 0);
  value_b = preferences.getUChar("value_b", 0);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, rgb_led_count);
  ledPatternSolid(leds, rgb_led_count);
  preferences.end();
}

/* readTEMPs reads temperature values from thermistor */
void readTEMPs() {
  if (!isADSFailed) {
    int16_t rawValue;
    float voltage;
    float resistance;

    // Use Steinhart-Hart equation to calculate temperature
    for(int i = 0; i < NUMBER_OF_TEMPS; i++) {
      rawValue = ads.readADC_SingleEnded(i);
      voltage = ads.computeVolts(rawValue);

      // do not measure near boundaries
      if ((voltage > 0.8) && (voltage < 4.0)) {
        resistance = (voltage / (THERMISTOR_VREF - voltage)) * NOMINAL_RESISTANCE;
        temps[i] = resistance / NOMINAL_RESISTANCE;
        temps[i] = log(temps[i]);
        temps[i] /= B_COEFFICIENT;
        temps[i] += 1.0 / (NOMINAL_TEMPERATURE + 273.15);
        temps[i] = 1.0 / temps[i];
        temps[i] -= 273.15;
      } else {
        temps[i] = -273.15;
      }
    }
  }
}

/* screenUpdater updates screen widget properties */
void screenUpdater() {
  if (temps[0] > 0.0) {
    lv_obj_clear_flag(ui_PanelT1, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text_fmt(ui_ValueT1, "%.1f", temps[0]);
    lv_arc_set_value(ui_ArcT1, temps[0]);
  } else {
    lv_obj_add_flag(ui_PanelT1, LV_OBJ_FLAG_HIDDEN);
  }

  if (temps[1] > 0.0) {
    lv_obj_clear_flag(ui_PanelT2, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text_fmt(ui_ValueT2, "%.1f", temps[1]);
    lv_arc_set_value(ui_ArcT2, temps[1]);
  } else {
    lv_obj_add_flag(ui_PanelT2, LV_OBJ_FLAG_HIDDEN);
  }

  if (temps[2] > 0.0) {
    lv_label_set_text_fmt(ui_Temp3Value, "%.1f", temps[2]);
  } else {
    lv_label_set_text(ui_Temp3Value, "--");
  }

  if (temps[3] > 0.0) {
    lv_label_set_text_fmt(ui_Temp4Value, "%.1f", temps[3]);
  } else {
    lv_label_set_text(ui_Temp4Value, "--");
  }

  lv_label_set_text_fmt(ui_ValueFan1, "%d", fanRPMs[0]);
  lv_arc_set_value(ui_ArcFan1, fanRPMs[0]);
  lv_label_set_text_fmt(ui_ValueFan2, "%d", fanRPMs[1]);
  lv_arc_set_value(ui_ArcFan2, fanRPMs[1]);
  lv_label_set_text_fmt(ui_ValueFan3, "%d", fanRPMs[2]);
  lv_arc_set_value(ui_ArcFan3, fanRPMs[2]);
  lv_label_set_text_fmt(ui_ValueFan4, "%d", fanRPMs[3]);
  lv_arc_set_value(ui_ArcFan4, fanRPMs[3]);

  lv_label_set_text_fmt(ui_Volts12Value, "%.2f", voltages[0]);
  lv_label_set_text_fmt(ui_Volts5Value, "%.2f", voltages[1]);
  lv_label_set_text_fmt(ui_Volts3V3Value, "%.2f", voltages[2]);
}

/* loadSettingsFromNVFlash loads user settings from display board NVRAM */
void loadSettingsFromNVFlash() {
  char label_text[4];
  preferences.begin("settings", true);
  value_r = preferences.getUChar("value_r", 0);
  value_g = preferences.getUChar("value_g", 0);
  value_b = preferences.getUChar("value_b", 0);
  lv_slider_set_value(ui_RedSlider, value_r, LV_ANIM_ON);
  lv_slider_set_value(ui_GreenSlider, value_g, LV_ANIM_ON);
  lv_slider_set_value(ui_BlueSlider, value_b, LV_ANIM_ON);
  snprintf(label_text, sizeof(label_text), "%d", value_r);
  lv_label_set_text(ui_RedSliderValue, label_text);
  snprintf(label_text, sizeof(label_text), "%d", value_g);
  lv_label_set_text(ui_GreenSliderValue, label_text);
  snprintf(label_text, sizeof(label_text), "%d", value_b);
  lv_label_set_text(ui_BlueSliderValue, label_text);
  rgb_stripe_color = lv_color_make(value_r, value_g, value_b);
  lv_obj_set_style_bg_color(ui_LedRGB, rgb_stripe_color, LV_PART_MAIN);
	fanAlertRPMs[0] = preferences.getUShort("fan_1_alert", 5000);
  fanAlertRPMs[1] = preferences.getUShort("fan_2_alert", 5000);
  fanAlertRPMs[2] = preferences.getUShort("fan_3_alert", 5000);
  fanAlertRPMs[3] = preferences.getUShort("fan_4_alert", 5000);
  snprintf(label_text, sizeof(label_text), "%d", static_cast<int>(fanAlertRPMs[0]));
  lv_textarea_set_text(ui_Fan1Min, label_text);
  snprintf(label_text, sizeof(label_text), "%d", static_cast<int>(fanAlertRPMs[1]));
  lv_textarea_set_text(ui_Fan2Min, label_text);
  snprintf(label_text, sizeof(label_text), "%d", static_cast<int>(fanAlertRPMs[2]));
  lv_textarea_set_text(ui_Fan3Min, label_text);
  snprintf(label_text, sizeof(label_text), "%d", static_cast<int>(fanAlertRPMs[3]));
  lv_textarea_set_text(ui_Fan4Min, label_text);
  alert_color = unpackHSV(preferences.getUInt("alert_color", 25700));
  lv_colorwheel_set_hsv(ui_Colorwheel2, alert_color);
  rgb_pattern_index = preferences.getUChar("pattern",0);
  lv_dropdown_set_selected(ui_LEDEffectDropdown, rgb_pattern_index);
  rgb_led_alert_enabled = preferences.getBool("led_alert", false);
  if (rgb_led_alert_enabled) {
    lv_obj_add_state(ui_EnableLedAlert, LV_STATE_CHECKED);
  } else {
    lv_obj_clear_state(ui_EnableLedAlert, LV_STATE_CHECKED);
  }
  rgb_led_count = preferences.getUChar("rgb_led_count", 32);
  snprintf(label_text, sizeof(label_text), "%d", static_cast<uint8_t>(rgb_led_count));
  lv_textarea_set_text(ui_NumOfLEDs, label_text);
  preferences.end();
}

/* core0Task runs screen tasks on Core0 */
void core0Task(void *parameter) {
  while (1) {
    nonBlockingDelay(0,1000,screenUpdater);
    nonBlockingDelay(1,500,rpmWatcher);
    nonBlockingDelay(2,50,ledController);
    vTaskDelay(pdMS_TO_TICKS(50));
  }
}

/* core1Task runs read metric tasks on Core1 */
void core1Task(void *parameter) {
  while (1) {
    nonBlockingDelay(3,500,readTEMPs);
    nonBlockingDelay(4,1000,readRPMs);
    nonBlockingDelay(5,500,readVoltages);
    vTaskDelay(pdMS_TO_TICKS(50));
  }
}

/* uartTask is an UART receiver running on Core1 */
void uartTask(void *parameter) {
  while (1) {
    if (Serial0.available()) {
      char c = Serial0.read();
      if (c == '#') {
        receivedData = "";
      }
      receivedData += c;
      if (c == '\n') {
        newUARTData = true;
      }
    }
    vTaskDelay(pdMS_TO_TICKS(10));
  }
}

/* nonBlockingDelay schedules functions to run in different time */
struct DelayInfo {
  unsigned long previousMillis;
  unsigned long customDelayMillis;
  void (*delayedFunction)();
};
volatile DelayInfo delays[MAX_TASKS];
void nonBlockingDelay(uint8_t delayIndex, unsigned long delayTime, void (*functionToRun)()) {
  if (delayIndex >= 0 && delayIndex < MAX_TASKS) {
    //unsigned long currentMillis = millis();

    // Check if the desired interval has passed
    if (currentMillis - delays[delayIndex].previousMillis >= delayTime) {
      // Save the last time the action was performed
      delays[delayIndex].previousMillis = currentMillis;
      delays[delayIndex].customDelayMillis = 0; // Reset custom delay time

      // Call the provided function
      if (functionToRun != nullptr) {
        functionToRun();
      }
    }
  }
}

/* readRPMs reads fan RPMs from UART */
volatile unsigned long previousRPMDataMs;
void readRPMs() {

  // read FAN and Pump RPMs array (result should look like #RF,0,0,0,0)
  sendUARTMessage("#RF");

  // Process data if new data is available
  if (newUARTData) {
    newUARTData = false;
    
    Serial.println("Received: " + receivedData);

    // if got readfans response
    if (receivedData.startsWith("#RF")) {
      previousRPMDataMs = millis();
      Serial.println("RF command detected");

      // remove #RF,
      receivedData.remove(0, 4);

      // update fanRPMs
      uint8_t commaIndex = 0;
      for (uint8_t i = 0; i < 4; ++i) {
        commaIndex = receivedData.indexOf(',');
        if (commaIndex != -1) {
          fanRPMs[i] = receivedData.substring(0, commaIndex).toInt();
          receivedData.remove(0, commaIndex + 1);
        } else {
          fanRPMs[i] = receivedData.toInt();  // Last RPM value
        }
      }
    }
    receivedData = "";
  }
}

/* readVoltages reads voltage measurement from the 3 channels */
void readVoltages() {
  if (!isADSFailed) {
    voltages[0] = ina_0.getVoltage(INA3221_CH1);
    voltages[1] = ina_0.getVoltage(INA3221_CH2);
    voltages[2] = ina_0.getVoltage(INA3221_CH3);
  }
}

/* sendUARTMessage sends message over UART0 */
void sendUARTMessage(const String& message) {
  Serial0.println(message);
  Serial.printf("DEBUG: %s sent\n", message);
  Serial0.flush();
}

/* rpmWatcher watches the fan RPM values and alerts */
unsigned long blinkMillis = 0;
unsigned long blinkIntervalMillis = 0;
void rpmWatcher() {
  // set 0 if there is no RPM data for 3 sec    
  if (currentMillis - previousRPMDataMs >= 3000) {
    for (uint8_t i = 0; i < NUMBER_OF_FANS; i++) {
      fanRPMs[i] = 0;
    }
  }

  // blinker for all consumer
  static bool shouldBlink = false;
  shouldBlink = !shouldBlink;

  // threshold checker
  for (int i = 0; i < NUMBER_OF_FANS; i++) {
    if (fanRPMs[i] < fanAlertRPMs[i]) {
      // Check if enough time has passed since the last alert
      if (millis() - fanLastAlertTime[i] >= DEBOUNCE_DELAY && !fanIsAlerting[i]) {
        // Update last alert time
        fanLastAlertTime[i] = millis();
        fanIsAlerting[i] = true;
      }
    } else {
      lv_obj_set_style_arc_color(ui_rpm_arcs[i], lv_color_hex(0xFFFFFF), LV_PART_INDICATOR);
      lv_obj_set_style_text_color(ui_rpm_labels[i], lv_color_hex(0xFFFFFF), LV_PART_MAIN);
      fanIsAlerting[i] = false;
    }

    if (fanIsAlerting[i]) {
      if (shouldBlink) {
        lv_obj_set_style_arc_color(ui_rpm_arcs[i], lv_color_hex(0xFF0000), LV_PART_INDICATOR);
        lv_obj_set_style_text_color(ui_rpm_labels[i], lv_color_hex(0xFF0000), LV_PART_MAIN);
      } else {
        lv_obj_set_style_arc_color(ui_rpm_arcs[i], lv_color_hex(0xFFFFFF), LV_PART_INDICATOR);
        lv_obj_set_style_text_color(ui_rpm_labels[i], lv_color_hex(0xFFFFFF), LV_PART_MAIN);
      }
    }
  }
}

/* isAlerting checks if there is any alert happened */
bool isAlerting() {
    for (int i = 0; i < NUMBER_OF_FANS; i++) {
        if (fanIsAlerting[i]) {
            return true;
        }
    }
    return false;
}

/* ledController drives the RGB stripe */
void ledController() {  
  if (rgb_led_alert_enabled && isAlerting()) {
    ledPatternSolidAlerting(leds, rgb_led_count, currentMillis);
  } else {
    switch (rgb_pattern_index) {
      case 0:
        ledPatternSolid(leds, rgb_led_count);
        break;
      case 1:
        ledPatternRainbow(leds, rgb_led_count);
        vTaskDelay(pdMS_TO_TICKS(20));
        FastLED.show();
        break;
      case 2:
        ledPatternAurora(leds, rgb_led_count);
        vTaskDelay(pdMS_TO_TICKS(50));
        FastLED.show();
        break;
      case 3:
        ledPatternSolidFade(leds, rgb_led_count);
        vTaskDelay(pdMS_TO_TICKS(5));
        FastLED.show();
        break;
      case 4:
        ledPatternTwinkle(leds, rgb_led_count);
        vTaskDelay(pdMS_TO_TICKS(5));
        FastLED.show();
        break;
    }
  }
}
