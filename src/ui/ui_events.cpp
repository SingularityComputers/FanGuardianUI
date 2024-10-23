#include "led_functions.h"
#include "fanguardian_common.h"
#include "ui.h"
#include "lvgl.h"

char label_text[4];
lv_color_t rgb_stripe_color;
uint8_t value_r = 127;
uint8_t value_g = 127;
uint8_t value_b = 127;
volatile uint16_t fanAlertRPMs[NUMBER_OF_FANS] = {0,0,0,0};
lv_color_hsv_t alert_color;
uint8_t rgb_pattern_index = 0;
uint8_t rgb_pattern_temp_sensor_index = 0;
uint8_t fan1_label_index = 0;
uint8_t fan2_label_index = 0;
uint8_t pump1_label_index = 0;
uint8_t pump2_label_index = 0;
uint8_t temp1_label_index = 0;
uint8_t temp2_label_index = 0;
uint8_t background_image_index = 0;
bool rgb_led_alert_enabled = false;
bool flip_screen = false;
uint16_t rgb_led_count = 32;

void colorslider_event_cb(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    value_r = lv_slider_get_value(ui_RedSlider);
    value_g = lv_slider_get_value(ui_GreenSlider);
    value_b = lv_slider_get_value(ui_BlueSlider);

    snprintf(label_text, sizeof(label_text), "%d", value_r);
    lv_label_set_text(ui_RedSliderValue, label_text);

    snprintf(label_text, sizeof(label_text), "%d", value_g);
    lv_label_set_text(ui_GreenSliderValue, label_text);

    snprintf(label_text, sizeof(label_text), "%d", value_b);
    lv_label_set_text(ui_BlueSliderValue, label_text);
  }
}

void colorwheel_event_cb(lv_event_t * e)
{
	lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    alert_color = lv_colorwheel_get_hsv(ui_Colorwheel2);
  }
}

void SaveLedSettings(lv_event_t * e)
{
  preferences.begin("settings", false);
	preferences.putUChar("value_r", value_r);
  preferences.putUChar("value_g", value_g);
  preferences.putUChar("value_b", value_b);
  preferences.putUChar("pattern", rgb_pattern_index);
  preferences.putUChar("sensor_index", rgb_pattern_temp_sensor_index);
  preferences.putUChar("rgb_led_count", rgb_led_count);
  preferences.end();
}

void SaveAlertSettings(lv_event_t * e)
{
  preferences.begin("settings", false);
  fanAlertRPMs[0] = static_cast<uint16_t>(atoi(lv_textarea_get_text(ui_Fan1Min)));
  fanAlertRPMs[1] = static_cast<uint16_t>(atoi(lv_textarea_get_text(ui_Fan2Min)));
  fanAlertRPMs[2] = static_cast<uint16_t>(atoi(lv_textarea_get_text(ui_Pump1Min)));
  fanAlertRPMs[3] = static_cast<uint16_t>(atoi(lv_textarea_get_text(ui_Pump2Min)));
  preferences.putUShort("fan_1_alert", fanAlertRPMs[0]);
  preferences.putUShort("fan_2_alert", fanAlertRPMs[1]);
  preferences.putUShort("fan_3_alert", fanAlertRPMs[2]);
  preferences.putUShort("fan_4_alert", fanAlertRPMs[3]);
  preferences.putUInt("alert_color", packHSV((uint16_t)alert_color.h, 100, 100));
  preferences.putBool("led_alert", rgb_led_alert_enabled);
  preferences.putUChar("fan1_lbl_index", fan1_label_index);
  preferences.putUChar("fan2_lbl_index", fan2_label_index);
  preferences.putUChar("pump1_lbl_index", pump1_label_index);
  preferences.putUChar("pump2_lbl_index", pump2_label_index);
  preferences.putUChar("temp1_lbl_index", temp1_label_index);
  preferences.putUChar("temp2_lbl_index", temp2_label_index);
  preferences.end();
}

void led_alert_event_cb(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    rgb_led_alert_enabled = lv_obj_get_state(target) & LV_STATE_CHECKED ? true : false;
  }
}

void led_effect_dropdown_event_cb(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    rgb_pattern_index = lv_dropdown_get_selected(target);
    led_setting_screen_dynamic_ui_events();
  }
}

void num_of_leds_event_cb(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    rgb_led_count = static_cast<uint16_t>(atoi(lv_textarea_get_text(target)));
    if (rgb_led_count > 120) {
      rgb_led_count = 120;
      lv_textarea_set_text(target, "120");
    }
  }
}

void temp_sensor_dropdown_event_cb(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    rgb_pattern_temp_sensor_index = lv_dropdown_get_selected(target);
  }
}

void fan2_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    fan2_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target,label_text,8);
    lv_label_set_text(ui_LabelFan2, label_text);
  }
}

void pump1_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    pump1_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target,label_text,8);
    lv_label_set_text(ui_LabelPump1, label_text);
  }
}

void pump2_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    pump2_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target,label_text,8);
    lv_label_set_text(ui_LabelPump2, label_text);
  }
}

void fan1_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    fan1_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target,label_text,8);
    lv_label_set_text(ui_LabelFan1, label_text);
  }
}

void temp1_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    temp1_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target, label_text, 8);
    lv_label_set_text(ui_LabelT1, label_text);
  }
}

void temp2_label_dropdown_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    temp2_label_index = lv_dropdown_get_selected(target);
    lv_dropdown_get_selected_str(target,label_text, 8);
    lv_label_set_text(ui_LabelT2, label_text);
  }
}

void bg_dropdown_change_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    background_image_index = lv_dropdown_get_selected(target);
    set_background_image(background_image_index);
  }
}

void flip_screen_cb_change_event(lv_event_t * e)
{
	lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    flip_screen = lv_obj_has_state(target, LV_STATE_CHECKED);
    set_screen_flip();
    lv_obj_invalidate(lv_scr_act());
    lv_refr_now(NULL);
  }
}

void SaveSettings(lv_event_t * e)
{
  preferences.begin("settings", false);
  preferences.putBool("flip_screen", flip_screen);
  preferences.putUChar("bg_img_index", background_image_index);
  preferences.end();
}

void theme_dropdown_change_event(lv_event_t * e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t * target = lv_event_get_target(e);

  if (event_code == LV_EVENT_VALUE_CHANGED) {
    uint8_t theme_index = lv_dropdown_get_selected(target);
    ui_theme_set(theme_index);
  }
}
