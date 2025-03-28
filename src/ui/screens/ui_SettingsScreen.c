// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_SettingsScreen_screen_init(void)
{
ui_SettingsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_SettingsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_SettingsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SettingsScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ThemeLabel = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_ThemeLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ThemeLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ThemeLabel, -171 );
lv_obj_set_y( ui_ThemeLabel, -102 );
lv_obj_set_align( ui_ThemeLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_ThemeLabel,"BACKGROUND");
ui_object_set_themeable_style_property(ui_ThemeLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_ThemeLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_BgDropdown = lv_dropdown_create(ui_SettingsScreen);
lv_dropdown_set_options( ui_BgDropdown, "DEFAULT\nAETHER\nAFTERBURNER\nDIVINITY\nFINAL HOURS\nGAIA\nJADE\nNAPIER\nNIBIRU\nPLASMATIC\nSINGULARITY\nWAR" );
lv_obj_set_width( ui_BgDropdown, 162);
lv_obj_set_height( ui_BgDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_BgDropdown, -24 );
lv_obj_set_y( ui_BgDropdown, -102 );
lv_obj_set_align( ui_BgDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BgDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_BgDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_BgDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_BgDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_BgDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_BgDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_BgDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_BgDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_BgDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_BgDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_FlipScreenCheckBox = lv_checkbox_create(ui_SettingsScreen);
lv_checkbox_set_text(ui_FlipScreenCheckBox,"FLIP SCREEN");
lv_obj_set_width( ui_FlipScreenCheckBox, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_FlipScreenCheckBox, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_FlipScreenCheckBox, 161 );
lv_obj_set_y( ui_FlipScreenCheckBox, -102 );
lv_obj_set_align( ui_FlipScreenCheckBox, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_FlipScreenCheckBox, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_FlipScreenCheckBox, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_FlipScreenCheckBox, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_object_set_themeable_style_property(ui_FlipScreenCheckBox, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_FlipScreenCheckBox, LV_PART_INDICATOR| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
lv_obj_set_style_border_color(ui_FlipScreenCheckBox, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_FlipScreenCheckBox, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_BackButton4 = lv_btn_create(ui_SettingsScreen);
lv_obj_set_width( ui_BackButton4, 100);
lv_obj_set_height( ui_BackButton4, 32);
lv_obj_set_x( ui_BackButton4, -183 );
lv_obj_set_y( ui_BackButton4, 132 );
lv_obj_set_align( ui_BackButton4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BackButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_BackButton4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_BackButton4, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_BackButton4, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_BackButton4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_BackButton4, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_BackButton4, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);
lv_obj_set_style_text_letter_space(ui_BackButton4, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_BackButton4, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_BackButton4, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_BackButton4, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_BackButton4, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_BackLabel5 = lv_label_create(ui_BackButton4);
lv_obj_set_width( ui_BackLabel5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BackLabel5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_BackLabel5, LV_ALIGN_CENTER );
lv_label_set_text(ui_BackLabel5,"BACK");
ui_object_set_themeable_style_property(ui_BackLabel5, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_BackLabel5, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_RGBPanel2Title2 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_RGBPanel2Title2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_RGBPanel2Title2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_RGBPanel2Title2, -193 );
lv_obj_set_y( ui_RGBPanel2Title2, -143 );
lv_obj_set_align( ui_RGBPanel2Title2, LV_ALIGN_CENTER );
lv_label_set_text(ui_RGBPanel2Title2,"SETTINGS");
ui_object_set_themeable_style_property(ui_RGBPanel2Title2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_RGBPanel2Title2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
lv_obj_set_style_text_font(ui_RGBPanel2Title2, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_RGBPanel2Title2, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_RGBPanel2Title2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_RGBPanel2Title2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_RGBPanel2Title2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_RGBPanel2Title2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_RGBPanel2Title2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_RGBPanel2Title2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SaveButton3 = lv_btn_create(ui_SettingsScreen);
lv_obj_set_width( ui_SaveButton3, 100);
lv_obj_set_height( ui_SaveButton3, 32);
lv_obj_set_x( ui_SaveButton3, 0 );
lv_obj_set_y( ui_SaveButton3, 132 );
lv_obj_set_align( ui_SaveButton3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SaveButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_SaveButton3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_SaveButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_SaveButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_SaveButton3, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_SaveButton3, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_SaveButton3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_SaveButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_SaveButton3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_SaveButton3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_SaveButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_SaveButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_SaveButton3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_SaveButton3, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SaveButton3, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SaveLabel3 = lv_label_create(ui_SaveButton3);
lv_obj_set_width( ui_SaveLabel3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_SaveLabel3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_SaveLabel3, LV_ALIGN_CENTER );
lv_label_set_text(ui_SaveLabel3,"SAVE");
ui_object_set_themeable_style_property(ui_SaveLabel3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_SaveLabel3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_NextButton3 = lv_btn_create(ui_SettingsScreen);
lv_obj_set_width( ui_NextButton3, 100);
lv_obj_set_height( ui_NextButton3, 32);
lv_obj_set_x( ui_NextButton3, 183 );
lv_obj_set_y( ui_NextButton3, 132 );
lv_obj_set_align( ui_NextButton3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_NextButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_NextButton3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_NextButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_NextButton3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_NextButton3, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_NextButton3, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_NextButton3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_NextButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_NextButton3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_NextButton3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_NextButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_NextButton3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_NextButton3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_NextButton3, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_NextButton3, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_NextLabel3 = lv_label_create(ui_NextButton3);
lv_obj_set_width( ui_NextLabel3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_NextLabel3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_NextLabel3, LV_ALIGN_CENTER );
lv_label_set_text(ui_NextLabel3,"NEXT");
ui_object_set_themeable_style_property(ui_NextLabel3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_NextLabel3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_ThemeDropdown = lv_dropdown_create(ui_SettingsScreen);
lv_dropdown_set_options( ui_ThemeDropdown, "DEFAULT\nWARM\nCOOL" );
lv_obj_set_width( ui_ThemeDropdown, 162);
lv_obj_set_height( ui_ThemeDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ThemeDropdown, -24 );
lv_obj_set_y( ui_ThemeDropdown, -47 );
lv_obj_set_align( ui_ThemeDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ThemeDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_ThemeDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_ThemeDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_ThemeDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_ThemeDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_ThemeDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_ThemeDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_ThemeDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_ThemeDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_ThemeDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ColorThemeLabel = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_ColorThemeLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ColorThemeLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ColorThemeLabel, -171 );
lv_obj_set_y( ui_ColorThemeLabel, -47 );
lv_obj_set_align( ui_ColorThemeLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_ColorThemeLabel,"COLOR THEME");
ui_object_set_themeable_style_property(ui_ColorThemeLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_ColorThemeLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

lv_obj_add_event_cb(ui_BgDropdown, ui_event_BgDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_FlipScreenCheckBox, ui_event_FlipScreenCheckBox, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackLabel5, ui_event_BackLabel5, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackButton4, ui_event_BackButton4, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveLabel3, ui_event_SaveLabel3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveButton3, ui_event_SaveButton3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NextLabel3, ui_event_NextLabel3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NextButton3, ui_event_NextButton3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ThemeDropdown, ui_event_ThemeDropdown, LV_EVENT_ALL, NULL);

}
