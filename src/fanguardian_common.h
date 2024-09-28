#ifndef _FANGUARDIAN_COMMON_H
#define _FANGUARDIAN_COMMON_H

#include <lvgl.h>

extern uint8_t rgb_pattern_index;
extern uint8_t fan1_label_index;
extern uint8_t fan2_label_index;
extern uint8_t pump1_label_index;
extern uint8_t pump2_label_index;
extern uint8_t temp1_label_index;
extern uint8_t temp2_label_index;

void toggle_visibility(bool show, int count, lv_obj_t* objs[]);
void led_setting_screen_dynamic_ui_events();

#endif
