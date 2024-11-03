// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_LedSettingsScreen_screen_init(void)
{
ui_LedSettingsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_LedSettingsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_LedSettingsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LedSettingsScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_NextButton = lv_btn_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_NextButton, 100);
lv_obj_set_height( ui_NextButton, 32);
lv_obj_set_x( ui_NextButton, 183 );
lv_obj_set_y( ui_NextButton, 132 );
lv_obj_set_align( ui_NextButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_NextButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_NextButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_NextButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_NextButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_NextButton, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_NextButton, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_NextButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_NextButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_NextButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_NextButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_NextButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_NextButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_NextButton, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_NextButton, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_NextButton, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_NextLabel = lv_label_create(ui_NextButton);
lv_obj_set_width( ui_NextLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_NextLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_NextLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_NextLabel,"NEXT");
ui_object_set_themeable_style_property(ui_NextLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_NextLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_RGBPanelTitle = lv_label_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_RGBPanelTitle, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_RGBPanelTitle, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_RGBPanelTitle, -193 );
lv_obj_set_y( ui_RGBPanelTitle, -143 );
lv_obj_set_align( ui_RGBPanelTitle, LV_ALIGN_CENTER );
lv_label_set_text(ui_RGBPanelTitle,"RGB STRIPE");
ui_object_set_themeable_style_property(ui_RGBPanelTitle, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_RGBPanelTitle, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
lv_obj_set_style_text_font(ui_RGBPanelTitle, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_RGBPanelTitle, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_RGBPanelTitle, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_RGBPanelTitle, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_RGBPanelTitle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_RGBPanelTitle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_RGBPanelTitle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_RGBPanelTitle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LEDEffectLabel = lv_label_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_LEDEffectLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LEDEffectLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LEDEffectLabel, -180 );
lv_obj_set_y( ui_LEDEffectLabel, -100 );
lv_obj_set_align( ui_LEDEffectLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_LEDEffectLabel,"LED effect");
ui_object_set_themeable_style_property(ui_LEDEffectLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_LEDEffectLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_LEDEffectDropdown = lv_dropdown_create(ui_LedSettingsScreen);
lv_dropdown_set_options( ui_LEDEffectDropdown, "None\nAurora\nFade\nRainbow\nTemperature effect\nTwinkle" );
lv_obj_set_width( ui_LEDEffectDropdown, 194);
lv_obj_set_height( ui_LEDEffectDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LEDEffectDropdown, -34 );
lv_obj_set_y( ui_LEDEffectDropdown, -100 );
lv_obj_set_align( ui_LEDEffectDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_LEDEffectDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_LEDEffectDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_LEDEffectDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_LEDEffectDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_LEDEffectDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_LEDEffectDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_LEDEffectDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_LEDEffectDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_LEDEffectDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_LEDEffectDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_NumOfLEDsLabel = lv_label_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_NumOfLEDsLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_NumOfLEDsLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_NumOfLEDsLabel, 129 );
lv_obj_set_y( ui_NumOfLEDsLabel, -100 );
lv_obj_set_align( ui_NumOfLEDsLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_NumOfLEDsLabel,"LEDs");
ui_object_set_themeable_style_property(ui_NumOfLEDsLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_NumOfLEDsLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_NumOfLEDs = lv_textarea_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_NumOfLEDs, 49);
lv_obj_set_height( ui_NumOfLEDs, LV_SIZE_CONTENT);   /// 70
lv_obj_set_x( ui_NumOfLEDs, 185 );
lv_obj_set_y( ui_NumOfLEDs, -100 );
lv_obj_set_align( ui_NumOfLEDs, LV_ALIGN_CENTER );
if ("0123456789"=="") lv_textarea_set_accepted_chars(ui_NumOfLEDs, NULL);
else lv_textarea_set_accepted_chars(ui_NumOfLEDs, "0123456789");
lv_textarea_set_max_length(ui_NumOfLEDs,3);
lv_textarea_set_placeholder_text(ui_NumOfLEDs,"8");
lv_textarea_set_one_line(ui_NumOfLEDs,true);
ui_object_set_themeable_style_property(ui_NumOfLEDs, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_NumOfLEDs, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_NumOfLEDs, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_NumOfLEDs, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_NumOfLEDs, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_NumOfLEDs, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_NumOfLEDs, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_NumOfLEDs, 5, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_RGBStripePanel = lv_obj_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_RGBStripePanel, 477);
lv_obj_set_height( ui_RGBStripePanel, 145);
lv_obj_set_x( ui_RGBStripePanel, 0 );
lv_obj_set_y( ui_RGBStripePanel, 10 );
lv_obj_set_align( ui_RGBStripePanel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_RGBStripePanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_RGBStripePanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RGBStripePanel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_RGBStripePanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_RedSlider = lv_slider_create(ui_RGBStripePanel);
lv_slider_set_range(ui_RedSlider, 0,255);
lv_slider_set_value( ui_RedSlider, 127, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_RedSlider)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_RedSlider, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_RedSlider, 400);
lv_obj_set_height( ui_RedSlider, 18);
lv_obj_set_x( ui_RedSlider, -20 );
lv_obj_set_y( ui_RedSlider, -54 );
lv_obj_set_align( ui_RedSlider, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_RedSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RedSlider, 50, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_object_set_themeable_style_property(ui_RedSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_RedSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);

lv_obj_set_style_bg_color(ui_RedSlider, lv_color_hex(0xFF0000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RedSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_RedSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_RedSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_RedSlider, 1, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_RedSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_RedSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_RedSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_RedSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_GreenSlider = lv_slider_create(ui_RGBStripePanel);
lv_slider_set_range(ui_GreenSlider, 0,255);
lv_slider_set_value( ui_GreenSlider, 127, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_GreenSlider)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_GreenSlider, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_GreenSlider, 400);
lv_obj_set_height( ui_GreenSlider, 18);
lv_obj_set_x( ui_GreenSlider, -20 );
lv_obj_set_y( ui_GreenSlider, 0 );
lv_obj_set_align( ui_GreenSlider, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_GreenSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GreenSlider, 50, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_object_set_themeable_style_property(ui_GreenSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_GreenSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);

lv_obj_set_style_bg_color(ui_GreenSlider, lv_color_hex(0x00FF00), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GreenSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_GreenSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_GreenSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_GreenSlider, 1, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_GreenSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_GreenSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_GreenSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_GreenSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_BlueSlider = lv_slider_create(ui_RGBStripePanel);
lv_slider_set_range(ui_BlueSlider, 0,255);
lv_slider_set_value( ui_BlueSlider, 127, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_BlueSlider)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_BlueSlider, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_BlueSlider, 400);
lv_obj_set_height( ui_BlueSlider, 18);
lv_obj_set_x( ui_BlueSlider, -20 );
lv_obj_set_y( ui_BlueSlider, 54 );
lv_obj_set_align( ui_BlueSlider, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_BlueSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_BlueSlider, 50, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_object_set_themeable_style_property(ui_BlueSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_BlueSlider, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);

lv_obj_set_style_bg_color(ui_BlueSlider, lv_color_hex(0x0000FF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_BlueSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_BlueSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_BlueSlider, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_BlueSlider, 1, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_BlueSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_BlueSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_BlueSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_BlueSlider, 8, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_RedSliderValue = lv_label_create(ui_RGBStripePanel);
lv_obj_set_width( ui_RedSliderValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_RedSliderValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_RedSliderValue, 213 );
lv_obj_set_y( ui_RedSliderValue, -54 );
lv_obj_set_align( ui_RedSliderValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_RedSliderValue,"127");
ui_object_set_themeable_style_property(ui_RedSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_RedSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_GreenSliderValue = lv_label_create(ui_RGBStripePanel);
lv_obj_set_width( ui_GreenSliderValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GreenSliderValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GreenSliderValue, 213 );
lv_obj_set_y( ui_GreenSliderValue, 0 );
lv_obj_set_align( ui_GreenSliderValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_GreenSliderValue,"127");
ui_object_set_themeable_style_property(ui_GreenSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_GreenSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_BlueSliderValue = lv_label_create(ui_RGBStripePanel);
lv_obj_set_width( ui_BlueSliderValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BlueSliderValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_BlueSliderValue, 213 );
lv_obj_set_y( ui_BlueSliderValue, 54 );
lv_obj_set_align( ui_BlueSliderValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_BlueSliderValue,"127");
ui_object_set_themeable_style_property(ui_BlueSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_BlueSliderValue, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_TempSensorSelectorPanel = lv_obj_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_TempSensorSelectorPanel, 477);
lv_obj_set_height( ui_TempSensorSelectorPanel, 145);
lv_obj_set_x( ui_TempSensorSelectorPanel, 0 );
lv_obj_set_y( ui_TempSensorSelectorPanel, 10 );
lv_obj_set_align( ui_TempSensorSelectorPanel, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_TempSensorSelectorPanel, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_TempSensorSelectorPanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_TempSensorSelectorPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TempSensorSelectorPanel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_TempSensorSelectorPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TempSensorListLabel = lv_label_create(ui_TempSensorSelectorPanel);
lv_obj_set_width( ui_TempSensorListLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_TempSensorListLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_TempSensorListLabel, -143 );
lv_obj_set_y( ui_TempSensorListLabel, -47 );
lv_obj_set_align( ui_TempSensorListLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_TempSensorListLabel,"Temperature sensor");
lv_obj_set_style_text_color(ui_TempSensorListLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_TempSensorListLabel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TempSensorListDropdown = lv_dropdown_create(ui_TempSensorSelectorPanel);
lv_dropdown_set_options( ui_TempSensorListDropdown, "T1\nT2\nT3\nT4" );
lv_obj_set_width( ui_TempSensorListDropdown, 119);
lv_obj_set_height( ui_TempSensorListDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_TempSensorListDropdown, 2 );
lv_obj_set_y( ui_TempSensorListDropdown, -48 );
lv_obj_set_align( ui_TempSensorListDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_TempSensorListDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_color(ui_TempSensorListDropdown, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_TempSensorListDropdown, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_TempSensorListDropdown, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TempSensorListDropdown, 150, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_TempSensorListDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_BackButton = lv_btn_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_BackButton, 100);
lv_obj_set_height( ui_BackButton, 32);
lv_obj_set_x( ui_BackButton, -183 );
lv_obj_set_y( ui_BackButton, 132 );
lv_obj_set_align( ui_BackButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BackButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_BackButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_BackButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_BackButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_BackButton, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_BackButton, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_BackButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_BackButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_BackButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_BackButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_BackButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_BackButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_BackButton, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_BackButton, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_BackButton, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_BackLabel = lv_label_create(ui_BackButton);
lv_obj_set_width( ui_BackLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BackLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_BackLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_BackLabel,"BACK");
ui_object_set_themeable_style_property(ui_BackLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_BackLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_SaveButton = lv_btn_create(ui_LedSettingsScreen);
lv_obj_set_width( ui_SaveButton, 100);
lv_obj_set_height( ui_SaveButton, 32);
lv_obj_set_x( ui_SaveButton, 0 );
lv_obj_set_y( ui_SaveButton, 132 );
lv_obj_set_align( ui_SaveButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SaveButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_SaveButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_SaveButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_SaveButton, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_SaveButton, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_SaveButton, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_SaveButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_SaveButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_SaveButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_SaveButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_SaveButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_SaveButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_SaveButton, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_SaveButton, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SaveButton, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SaveLabel = lv_label_create(ui_SaveButton);
lv_obj_set_width( ui_SaveLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_SaveLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_SaveLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_SaveLabel,"SAVE");
ui_object_set_themeable_style_property(ui_SaveLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_SaveLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_LEDSettingsScreenKB = lv_keyboard_create(ui_LedSettingsScreen);
lv_keyboard_set_mode(ui_LEDSettingsScreenKB,LV_KEYBOARD_MODE_USER_1);
lv_obj_set_width( ui_LEDSettingsScreenKB, 236);
lv_obj_set_height( ui_LEDSettingsScreenKB, 189);
lv_obj_set_x( ui_LEDSettingsScreenKB, 0 );
lv_obj_set_y( ui_LEDSettingsScreenKB, 13 );
lv_obj_set_align( ui_LEDSettingsScreenKB, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_LEDSettingsScreenKB, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_radius(ui_LEDSettingsScreenKB, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LEDSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LEDSettingsScreenKB, 200, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_LEDSettingsScreenKB, 5, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LEDSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LEDSettingsScreenKB, 50, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_LEDSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_LEDSettingsScreenKB, 255, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_LEDSettingsScreenKB, 2, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_LEDSettingsScreenKB, LV_BORDER_SIDE_FULL, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_LEDSettingsScreenKB, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LEDSettingsScreenKB, 255, LV_PART_ITEMS| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_NextLabel, ui_event_NextLabel, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NextButton, ui_event_NextButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_LEDEffectDropdown, ui_event_LEDEffectDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NumOfLEDs, ui_event_NumOfLEDs, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_RedSlider, ui_event_RedSlider, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_GreenSlider, ui_event_GreenSlider, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BlueSlider, ui_event_BlueSlider, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_TempSensorListDropdown, ui_event_TempSensorListDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackLabel, ui_event_BackLabel, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackButton, ui_event_BackButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveLabel, ui_event_SaveLabel, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveButton, ui_event_SaveButton, LV_EVENT_ALL, NULL);

}
