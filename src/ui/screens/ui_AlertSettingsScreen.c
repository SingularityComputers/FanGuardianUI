// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_AlertSettingsScreen_screen_init(void)
{
ui_AlertSettingsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_AlertSettingsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_AlertSettingsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_AlertSettingsScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TresholdsPanel = lv_obj_create(ui_AlertSettingsScreen);
lv_obj_set_width( ui_TresholdsPanel, 368);
lv_obj_set_height( ui_TresholdsPanel, 266);
lv_obj_set_x( ui_TresholdsPanel, 63 );
lv_obj_set_y( ui_TresholdsPanel, -27 );
lv_obj_set_align( ui_TresholdsPanel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_TresholdsPanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_TresholdsPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TresholdsPanel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_TresholdsPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MinRPMAlertLabel = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_MinRPMAlertLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MinRPMAlertLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MinRPMAlertLabel, -96 );
lv_obj_set_y( ui_MinRPMAlertLabel, -118 );
lv_obj_set_align( ui_MinRPMAlertLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_MinRPMAlertLabel,"MIN RPM ALERT");
ui_object_set_themeable_style_property(ui_MinRPMAlertLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_MinRPMAlertLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
lv_obj_set_style_text_font(ui_MinRPMAlertLabel, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_MinRPMAlertLabel, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_MinRPMAlertLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_MinRPMAlertLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_MinRPMAlertLabel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_MinRPMAlertLabel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_MinRPMAlertLabel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_MinRPMAlertLabel, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Fan1Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Fan1Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Fan1Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Fan1Label, -28 );
lv_obj_set_y( ui_Fan1Label, 21 );
lv_obj_set_align( ui_Fan1Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Fan1Label,"FAN #1");
ui_object_set_themeable_style_property(ui_Fan1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Fan1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Fan1Min = lv_textarea_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Fan1Min, 59);
lv_obj_set_height( ui_Fan1Min, LV_SIZE_CONTENT);   /// 70
lv_obj_set_x( ui_Fan1Min, 38 );
lv_obj_set_y( ui_Fan1Min, 21 );
lv_obj_set_align( ui_Fan1Min, LV_ALIGN_CENTER );
if ("0123456789"=="") lv_textarea_set_accepted_chars(ui_Fan1Min, NULL);
else lv_textarea_set_accepted_chars(ui_Fan1Min, "0123456789");
lv_textarea_set_max_length(ui_Fan1Min,4);
lv_textarea_set_placeholder_text(ui_Fan1Min,"0");
lv_textarea_set_one_line(ui_Fan1Min,true);
ui_object_set_themeable_style_property(ui_Fan1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_Fan1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_Fan1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Fan1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Fan1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Fan1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Fan2Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Fan2Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Fan2Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Fan2Label, -29 );
lv_obj_set_y( ui_Fan2Label, -16 );
lv_obj_set_align( ui_Fan2Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Fan2Label,"FAN #2");
ui_object_set_themeable_style_property(ui_Fan2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Fan2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Fan2Min = lv_textarea_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Fan2Min, 59);
lv_obj_set_height( ui_Fan2Min, LV_SIZE_CONTENT);   /// 70
lv_obj_set_x( ui_Fan2Min, 38 );
lv_obj_set_y( ui_Fan2Min, -16 );
lv_obj_set_align( ui_Fan2Min, LV_ALIGN_CENTER );
if ("0123456789"=="") lv_textarea_set_accepted_chars(ui_Fan2Min, NULL);
else lv_textarea_set_accepted_chars(ui_Fan2Min, "0123456789");
lv_textarea_set_max_length(ui_Fan2Min,4);
lv_textarea_set_placeholder_text(ui_Fan2Min,"0");
lv_textarea_set_one_line(ui_Fan2Min,true);
ui_object_set_themeable_style_property(ui_Fan2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_Fan2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_Fan2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Fan2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Fan2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Fan2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Pump1Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Pump1Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Pump1Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Pump1Label, -31 );
lv_obj_set_y( ui_Pump1Label, -53 );
lv_obj_set_align( ui_Pump1Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Pump1Label,"PUMP #1");
ui_object_set_themeable_style_property(ui_Pump1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Pump1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Pump1Min = lv_textarea_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Pump1Min, 59);
lv_obj_set_height( ui_Pump1Min, LV_SIZE_CONTENT);   /// 70
lv_obj_set_x( ui_Pump1Min, 38 );
lv_obj_set_y( ui_Pump1Min, -53 );
lv_obj_set_align( ui_Pump1Min, LV_ALIGN_CENTER );
if ("0123456789"=="") lv_textarea_set_accepted_chars(ui_Pump1Min, NULL);
else lv_textarea_set_accepted_chars(ui_Pump1Min, "0123456789");
lv_textarea_set_max_length(ui_Pump1Min,4);
lv_textarea_set_placeholder_text(ui_Pump1Min,"0");
lv_textarea_set_one_line(ui_Pump1Min,true);
ui_object_set_themeable_style_property(ui_Pump1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_Pump1Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_Pump1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Pump1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Pump1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Pump1Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Pump2Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Pump2Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Pump2Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Pump2Label, -31 );
lv_obj_set_y( ui_Pump2Label, -90 );
lv_obj_set_align( ui_Pump2Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Pump2Label,"PUMP #2");
ui_object_set_themeable_style_property(ui_Pump2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Pump2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Pump2Min = lv_textarea_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Pump2Min, 59);
lv_obj_set_height( ui_Pump2Min, LV_SIZE_CONTENT);   /// 70
lv_obj_set_x( ui_Pump2Min, 38 );
lv_obj_set_y( ui_Pump2Min, -90 );
lv_obj_set_align( ui_Pump2Min, LV_ALIGN_CENTER );
if ("0123456789"=="") lv_textarea_set_accepted_chars(ui_Pump2Min, NULL);
else lv_textarea_set_accepted_chars(ui_Pump2Min, "0123456789");
lv_textarea_set_max_length(ui_Pump2Min,4);
lv_textarea_set_placeholder_text(ui_Pump2Min,"0");
lv_textarea_set_one_line(ui_Pump2Min,true);
ui_object_set_themeable_style_property(ui_Pump2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_Pump2Min, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_Pump2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Pump2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Pump2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Pump2Min, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Fan1LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Fan1LabelDropdown, "FAN #1\nCPU\nGPU" );
lv_obj_set_width( ui_Fan1LabelDropdown, 97);
lv_obj_set_height( ui_Fan1LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Fan1LabelDropdown, 123 );
lv_obj_set_y( ui_Fan1LabelDropdown, 21 );
lv_obj_set_align( ui_Fan1LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Fan1LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Fan1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Fan1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Fan1LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Fan1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Fan1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Fan1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Fan1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Fan2LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Fan2LabelDropdown, "FAN #2\nCPU\nGPU" );
lv_obj_set_width( ui_Fan2LabelDropdown, 97);
lv_obj_set_height( ui_Fan2LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Fan2LabelDropdown, 123 );
lv_obj_set_y( ui_Fan2LabelDropdown, -16 );
lv_obj_set_align( ui_Fan2LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Fan2LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Fan2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Fan2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Fan2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Fan2LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Fan2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Fan2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Fan2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Fan2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Pump1LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Pump1LabelDropdown, "PUMP #1\nCPU\nGPU" );
lv_obj_set_width( ui_Pump1LabelDropdown, 97);
lv_obj_set_height( ui_Pump1LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Pump1LabelDropdown, 123 );
lv_obj_set_y( ui_Pump1LabelDropdown, -53 );
lv_obj_set_align( ui_Pump1LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Pump1LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Pump1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Pump1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Pump1LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Pump1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Pump1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Pump1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Pump1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Pump2LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Pump2LabelDropdown, "PUMP #2\nCPU\nGPU" );
lv_obj_set_width( ui_Pump2LabelDropdown, 97);
lv_obj_set_height( ui_Pump2LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Pump2LabelDropdown, 123 );
lv_obj_set_y( ui_Pump2LabelDropdown, -90 );
lv_obj_set_align( ui_Pump2LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Pump2LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Pump2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Pump2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Pump2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Pump2LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Pump2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Pump2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Pump2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Pump2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Temp2Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Temp2Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Temp2Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Temp2Label, 33 );
lv_obj_set_y( ui_Temp2Label, 58 );
lv_obj_set_align( ui_Temp2Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Temp2Label,"TEMP #2");
ui_object_set_themeable_style_property(ui_Temp2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Temp2Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Temp1Label = lv_label_create(ui_TresholdsPanel);
lv_obj_set_width( ui_Temp1Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Temp1Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Temp1Label, 33 );
lv_obj_set_y( ui_Temp1Label, 95 );
lv_obj_set_align( ui_Temp1Label, LV_ALIGN_CENTER );
lv_label_set_text(ui_Temp1Label,"TEMP #1");
ui_object_set_themeable_style_property(ui_Temp1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_Temp1Label, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_Temp1LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Temp1LabelDropdown, "TEMP #1\nCPU\nGPU" );
lv_obj_set_width( ui_Temp1LabelDropdown, 97);
lv_obj_set_height( ui_Temp1LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Temp1LabelDropdown, 123 );
lv_obj_set_y( ui_Temp1LabelDropdown, 95 );
lv_obj_set_align( ui_Temp1LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Temp1LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Temp1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Temp1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Temp1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Temp1LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Temp1LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Temp1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Temp1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Temp1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Temp1LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Temp2LabelDropdown = lv_dropdown_create(ui_TresholdsPanel);
lv_dropdown_set_options( ui_Temp2LabelDropdown, "TEMP #2\nCPU\nGPU" );
lv_obj_set_width( ui_Temp2LabelDropdown, 97);
lv_obj_set_height( ui_Temp2LabelDropdown, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Temp2LabelDropdown, 123 );
lv_obj_set_y( ui_Temp2LabelDropdown, 58 );
lv_obj_set_align( ui_Temp2LabelDropdown, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Temp2LabelDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
ui_object_set_themeable_style_property(ui_Temp2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_Temp2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
ui_object_set_themeable_style_property(ui_Temp2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_Temp2LabelDropdown, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);
lv_obj_set_style_border_width(ui_Temp2LabelDropdown, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Temp2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Temp2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Temp2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Temp2LabelDropdown, 7, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_RGBPanel2 = lv_obj_create(ui_AlertSettingsScreen);
lv_obj_set_width( ui_RGBPanel2, 244);
lv_obj_set_height( ui_RGBPanel2, 265);
lv_obj_set_x( ui_RGBPanel2, -116 );
lv_obj_set_y( ui_RGBPanel2, -17 );
lv_obj_set_align( ui_RGBPanel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_RGBPanel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_RGBPanel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RGBPanel2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_RGBPanel2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_RGBPanel2, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_RGBPanel2Title = lv_label_create(ui_RGBPanel2);
lv_obj_set_width( ui_RGBPanel2Title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_RGBPanel2Title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_RGBPanel2Title, LV_ALIGN_CENTER );
lv_label_set_text(ui_RGBPanel2Title,"ALERT COLOR");
ui_object_set_themeable_style_property(ui_RGBPanel2Title, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_LABELTEXT);
ui_object_set_themeable_style_property(ui_RGBPanel2Title, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_LABELTEXT);
lv_obj_set_style_text_font(ui_RGBPanel2Title, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_RGBPanel2Title, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_RGBPanel2Title, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_RGBPanel2Title, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_pad_left(ui_RGBPanel2Title, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_RGBPanel2Title, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_RGBPanel2Title, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_RGBPanel2Title, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Colorwheel2 = lv_colorwheel_create(ui_RGBPanel2,true);
lv_colorwheel_set_mode_fixed(ui_Colorwheel2, true);
lv_obj_set_width( ui_Colorwheel2, 230);
lv_obj_set_height( ui_Colorwheel2, 230);
lv_obj_set_x( ui_Colorwheel2, 0 );
lv_obj_set_y( ui_Colorwheel2, 5 );
lv_obj_set_align( ui_Colorwheel2, LV_ALIGN_CENTER );
lv_obj_set_style_border_width(ui_Colorwheel2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Colorwheel2, 20, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Colorwheel2, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Colorwheel2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Colorwheel2, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Colorwheel2, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Colorwheel2, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Colorwheel2, 1, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Colorwheel2, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Colorwheel2, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Colorwheel2, 8, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Colorwheel2, 8, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_EnableLedAlert = lv_switch_create(ui_RGBPanel2);
lv_obj_set_width( ui_EnableLedAlert, 50);
lv_obj_set_height( ui_EnableLedAlert, 25);
lv_obj_set_x( ui_EnableLedAlert, -1 );
lv_obj_set_y( ui_EnableLedAlert, 31 );
lv_obj_set_align( ui_EnableLedAlert, LV_ALIGN_CENTER );
ui_object_set_themeable_style_property(ui_EnableLedAlert, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_DROPDOWNBG);
ui_object_set_themeable_style_property(ui_EnableLedAlert, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_DROPDOWNBG);

ui_object_set_themeable_style_property(ui_EnableLedAlert, LV_PART_KNOB| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_EnableLedAlert, LV_PART_KNOB| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BORDERBG);

ui_NextButton1 = lv_btn_create(ui_AlertSettingsScreen);
lv_obj_set_width( ui_NextButton1, 100);
lv_obj_set_height( ui_NextButton1, 32);
lv_obj_set_x( ui_NextButton1, 183 );
lv_obj_set_y( ui_NextButton1, 132 );
lv_obj_set_align( ui_NextButton1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_NextButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_NextButton1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_NextButton1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_NextButton1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_NextButton1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_NextButton1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_NextButton1, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_NextButton1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_NextButton1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_NextButton1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_NextButton1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_NextButton1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_NextButton1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_NextButton1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_NextButton1, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_NextButton1, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_NextLabel1 = lv_label_create(ui_NextButton1);
lv_obj_set_width( ui_NextLabel1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_NextLabel1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_NextLabel1, LV_ALIGN_CENTER );
lv_label_set_text(ui_NextLabel1,"NEXT");
ui_object_set_themeable_style_property(ui_NextLabel1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_NextLabel1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_BackButton2 = lv_btn_create(ui_AlertSettingsScreen);
lv_obj_set_width( ui_BackButton2, 100);
lv_obj_set_height( ui_BackButton2, 32);
lv_obj_set_x( ui_BackButton2, -183 );
lv_obj_set_y( ui_BackButton2, 132 );
lv_obj_set_align( ui_BackButton2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BackButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_BackButton2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_BackButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_BackButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_BackButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_BackButton2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_BackButton2, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_BackButton2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_BackButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_BackButton2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_BackButton2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_BackButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_BackButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_BackButton2, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_BackButton2, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_BackButton2, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_BackLabel2 = lv_label_create(ui_BackButton2);
lv_obj_set_width( ui_BackLabel2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BackLabel2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_BackLabel2, LV_ALIGN_CENTER );
lv_label_set_text(ui_BackLabel2,"BACK");
ui_object_set_themeable_style_property(ui_BackLabel2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_BackLabel2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_SaveButton2 = lv_btn_create(ui_AlertSettingsScreen);
lv_obj_set_width( ui_SaveButton2, 100);
lv_obj_set_height( ui_SaveButton2, 32);
lv_obj_set_x( ui_SaveButton2, 0 );
lv_obj_set_y( ui_SaveButton2, 132 );
lv_obj_set_align( ui_SaveButton2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SaveButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_SaveButton2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_SaveButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_BUTTONBG);
ui_object_set_themeable_style_property(ui_SaveButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_BORDERBG);
ui_object_set_themeable_style_property(ui_SaveButton2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_BORDERBG);
lv_obj_set_style_border_width(ui_SaveButton2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_SaveButton2, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_SaveButton2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_SaveButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_SaveButton2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_SaveButton2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_SaveButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_SaveButton2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_SaveButton2, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_SaveButton2, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SaveButton2, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SaveLabel2 = lv_label_create(ui_SaveButton2);
lv_obj_set_width( ui_SaveLabel2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_SaveLabel2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_SaveLabel2, LV_ALIGN_CENTER );
lv_label_set_text(ui_SaveLabel2,"SAVE");
ui_object_set_themeable_style_property(ui_SaveLabel2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_TEXT);
ui_object_set_themeable_style_property(ui_SaveLabel2, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_TEXT);

ui_AlertSettingsScreenKB = lv_keyboard_create(ui_AlertSettingsScreen);
lv_keyboard_set_mode(ui_AlertSettingsScreenKB,LV_KEYBOARD_MODE_USER_1);
lv_obj_set_width( ui_AlertSettingsScreenKB, 236);
lv_obj_set_height( ui_AlertSettingsScreenKB, 189);
lv_obj_set_x( ui_AlertSettingsScreenKB, 0 );
lv_obj_set_y( ui_AlertSettingsScreenKB, 13 );
lv_obj_set_align( ui_AlertSettingsScreenKB, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_radius(ui_AlertSettingsScreenKB, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_AlertSettingsScreenKB, lv_color_hex(0x7D7D7D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_AlertSettingsScreenKB, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_AlertSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_AlertSettingsScreenKB, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_AlertSettingsScreenKB, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_AlertSettingsScreenKB, 5, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_AlertSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_AlertSettingsScreenKB, 50, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_AlertSettingsScreenKB, lv_color_hex(0xFFFFFF), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_AlertSettingsScreenKB, 255, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_AlertSettingsScreenKB, 2, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_AlertSettingsScreenKB, LV_BORDER_SIDE_FULL, LV_PART_ITEMS| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_AlertSettingsScreenKB, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_AlertSettingsScreenKB, 255, LV_PART_ITEMS| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Fan1Min, ui_event_Fan1Min, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Fan2Min, ui_event_Fan2Min, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Pump1Min, ui_event_Pump1Min, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Pump2Min, ui_event_Pump2Min, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Fan1LabelDropdown, ui_event_Fan1LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Fan2LabelDropdown, ui_event_Fan2LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Pump1LabelDropdown, ui_event_Pump1LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Pump2LabelDropdown, ui_event_Pump2LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Temp1LabelDropdown, ui_event_Temp1LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Temp2LabelDropdown, ui_event_Temp2LabelDropdown, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Colorwheel2, ui_event_Colorwheel2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_EnableLedAlert, ui_event_EnableLedAlert, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NextLabel1, ui_event_NextLabel1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_NextButton1, ui_event_NextButton1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackLabel2, ui_event_BackLabel2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BackButton2, ui_event_BackButton2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveLabel2, ui_event_SaveLabel2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SaveButton2, ui_event_SaveButton2, LV_EVENT_ALL, NULL);

}
