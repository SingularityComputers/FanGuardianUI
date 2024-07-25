#include "fanguardian_common.h"
#include "ui.h"
#include <lvgl.h>

extern uint8_t rgb_pattern_index;

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
        lv_obj_t* hide[]= {ui_RGBStripePanel, ui_TempSensorSelectorPanel};
        toggle_visibility(false, 2, hide);
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