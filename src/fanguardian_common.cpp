#include "fanguardian_common.h"
#include "ui.h"
#include <lvgl.h>

void toggle_visibility(bool show, int count, lv_obj_t* objs[]) {
    for (int i = 0; i < count; i++) {
        if (show) {
            lv_obj_clear_flag(objs[i], LV_OBJ_FLAG_HIDDEN);
        } else {
            lv_obj_add_flag(objs[i], LV_OBJ_FLAG_HIDDEN);
        }
    }
}

void led_setting_screen_dynamic_ui_events() {
    switch (rgb_pattern_index) {
      case 0: {
        lv_obj_t* show[] = {ui_RGBStripePanel};
        lv_obj_t* hide[]= {ui_TempSensorSelectorPanel};
        toggle_visibility(true, 1, show);
        toggle_visibility(false, 1, hide);
        break;
      }
      case 1: {
        lv_obj_t* hide[]= {ui_RGBStripePanel, ui_TempSensorSelectorPanel};
        toggle_visibility(false, 2, hide);
        break;
      }
      case 2: {
        lv_obj_t* show[] = {ui_RGBStripePanel};
        lv_obj_t* hide[]= {ui_TempSensorSelectorPanel};
        toggle_visibility(true, 1, show);
        toggle_visibility(false, 1, hide);
        break;
      }
      case 3: {
        lv_obj_t* hide[]= {ui_RGBStripePanel, ui_TempSensorSelectorPanel};
        toggle_visibility(false, 2, hide);
        break;
      }
      case 4: {
        lv_obj_t* hide[] = {ui_RGBStripePanel};
        lv_obj_t* show[]= {ui_TempSensorSelectorPanel};
        toggle_visibility(true, 1, show);
        toggle_visibility(false, 1, hide);
        break;
      }
      case 5: {
        lv_obj_t* hide[]= {ui_RGBStripePanel, ui_TempSensorSelectorPanel};
        toggle_visibility(false, 2, hide);
        break;
      }
    }
}

void set_screen_flip() {
  if (flip_screen) {
    tft.setRotation(3);
  } else {
    tft.setRotation(1);
  }
}

void set_background_image(uint8_t bg_index) {

  lv_img_dsc_t bg;
  lv_img_dsc_t *bg_ptr = NULL;

  // Array of image data pointers
  const uint8_t* img_data[] = {
    NULL,                                          // Case 0
    (const uint8_t*) ui_img_aether_png_data,       // Case 1
    (const uint8_t*) ui_img_afterburner_png_data,  // Case 2
    (const uint8_t*) ui_img_divinity_png_data,     // Case 3
    (const uint8_t*) ui_img_final_hours_png_data,  // Case 4
    (const uint8_t*) ui_img_gaia_png_data,         // Case 5
    (const uint8_t*) ui_img_jade_png_data,         // Case 6
    (const uint8_t*) ui_img_napier_png_data,       // Case 7
    (const uint8_t*) ui_img_nibiru_png_data,       // Case 8
    (const uint8_t*) ui_img_plasmatic_png_data,    // Case 9
    (const uint8_t*) ui_img_war_png_data           // Case 10
  };

  // Set background only if index is valid (1-10)
  if (bg_index >= 1 && bg_index <= 10) {
    // Initialize header fields in order
    bg.header.always_zero = 0;          // 2-bit field, must be set to 0
    bg.header.w = 480;                   // Width
    bg.header.h = 320;                   // Height
    bg.header.cf = LV_IMG_CF_RAW_ALPHA;  // Color format
    
    bg.data_size = 480 * 320 * 3;        // Set size (width * height * 3 bytes)
    bg.data = img_data[bg_index];        // Set image data from array
    
    bg_ptr = &bg;                        // Set bg_ptr to point to bg
  }

  // Apply the same background and opacity settings to all screens
  lv_obj_t* screens[] = {
    ui_MainScreen, ui_LedSettingsScreen, ui_AlertSettingsScreen,
    ui_SettingsScreen, ui_AboutScreen
  };

  for (int i = 0; i < sizeof(screens) / sizeof(screens[0]); i++) {
    lv_obj_set_style_bg_img_src(screens[i], bg_ptr, LV_PART_MAIN);
    lv_obj_set_style_bg_img_opa(screens[i], LV_OPA_COVER, LV_PART_MAIN);
  }
}
