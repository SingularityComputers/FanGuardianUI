// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void led_effect_dropdown_event_cb(lv_event_t * e);
void num_of_leds_event_cb(lv_event_t * e);
void colorslider_event_cb(lv_event_t * e);
void temp_sensor_dropdown_event_cb(lv_event_t * e);
void SaveLedSettings(lv_event_t * e);
void fan1_label_dropdown_event(lv_event_t * e);
void fan2_label_dropdown_event(lv_event_t * e);
void pump1_label_dropdown_event(lv_event_t * e);
void pump2_label_dropdown_event(lv_event_t * e);
void temp1_label_dropdown_event(lv_event_t * e);
void temp2_label_dropdown_event(lv_event_t * e);
void colorwheel_event_cb(lv_event_t * e);
void led_alert_event_cb(lv_event_t * e);
void SaveAlertSettings(lv_event_t * e);
void bg_dropdown_change_event(lv_event_t * e);
void flip_screen_cb_change_event(lv_event_t * e);
void SaveSettings(lv_event_t * e);
void theme_dropdown_change_event(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
