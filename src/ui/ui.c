// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_LogoScreen
void ui_LogoScreen_screen_init(void);
void ui_event_LogoScreen( lv_event_t * e);
lv_obj_t *ui_LogoScreen;
lv_obj_t *ui_SCLogo;


// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
lv_obj_t *ui_MainScreen;
lv_obj_t *ui_PanelFan1;
lv_obj_t *ui_ArcFan1;
lv_obj_t *ui_LabelFan1;
lv_obj_t *ui_ValueFan1;
lv_obj_t *ui_RPMFan1;
lv_obj_t *ui_VoltagesLabel;
lv_obj_t *ui_PanelFan2;
lv_obj_t *ui_ArcFan2;
lv_obj_t *ui_LabelFan2;
lv_obj_t *ui_ValueFan2;
lv_obj_t *ui_RPMFan2;
lv_obj_t *ui_PanelFan3;
lv_obj_t *ui_ArcFan3;
lv_obj_t *ui_LabelFan3;
lv_obj_t *ui_ValueFan3;
lv_obj_t *ui_RPMFan3;
lv_obj_t *ui_PanelFan4;
lv_obj_t *ui_ArcFan4;
lv_obj_t *ui_LabelFan4;
lv_obj_t *ui_ValueFan4;
lv_obj_t *ui_RPMFan4;
lv_obj_t *ui_Panel12Volts;
lv_obj_t *ui_Volts12Value;
lv_obj_t *ui_Volts12Label;
lv_obj_t *ui_Panel5Volts;
lv_obj_t *ui_Volts5Value;
lv_obj_t *ui_Volts5Label;
lv_obj_t *ui_Panel3V3Volts;
lv_obj_t *ui_Volts3V3Value;
lv_obj_t *ui_Volts3V3Label;
void ui_event_PanelAmbient1( lv_event_t * e);
lv_obj_t *ui_PanelAmbient1;
lv_obj_t *ui_Ambient1Label;
lv_obj_t *ui_Temp3Value;
lv_obj_t *ui_Temp3Label;
void ui_event_PanelAmbient2( lv_event_t * e);
lv_obj_t *ui_PanelAmbient2;
lv_obj_t *ui_Ambient2Label;
lv_obj_t *ui_Temp4Value;
lv_obj_t *ui_Temp4Label;
lv_obj_t *ui_PanelT1;
lv_obj_t *ui_ArcT1;
lv_obj_t *ui_LabelT1;
lv_obj_t *ui_ValueT1;
lv_obj_t *ui_MetricT1;
lv_obj_t *ui_PanelT2;
lv_obj_t *ui_ArcT2;
lv_obj_t *ui_LabelT2;
lv_obj_t *ui_ValueT2;
lv_obj_t *ui_RPMT2;
void ui_event_SettingsButton( lv_event_t * e);
lv_obj_t *ui_SettingsButton;
void ui_event_BackLabel3( lv_event_t * e);
lv_obj_t *ui_BackLabel3;
lv_obj_t *ui_Label1;


// SCREEN: ui_LedSettingsScreen
void ui_LedSettingsScreen_screen_init(void);
lv_obj_t *ui_LedSettingsScreen;
void ui_event_NextButton( lv_event_t * e);
lv_obj_t *ui_NextButton;
void ui_event_NextLabel( lv_event_t * e);
lv_obj_t *ui_NextLabel;
lv_obj_t *ui_RGBPanelTitle;
lv_obj_t *ui_LEDEffectLabel;
void ui_event_LEDEffectDropdown( lv_event_t * e);
lv_obj_t *ui_LEDEffectDropdown;
lv_obj_t *ui_NumOfLEDsLabel;
void ui_event_NumOfLEDs( lv_event_t * e);
lv_obj_t *ui_NumOfLEDs;
lv_obj_t *ui_RGBStripePanel;
void ui_event_RedSlider( lv_event_t * e);
lv_obj_t *ui_RedSlider;
void ui_event_GreenSlider( lv_event_t * e);
lv_obj_t *ui_GreenSlider;
void ui_event_BlueSlider( lv_event_t * e);
lv_obj_t *ui_BlueSlider;
lv_obj_t *ui_RedSliderValue;
lv_obj_t *ui_GreenSliderValue;
lv_obj_t *ui_BlueSliderValue;
lv_obj_t *ui_TempSensorSelectorPanel;
lv_obj_t *ui_TempSensorListLabel;
void ui_event_TempSensorListDropdown( lv_event_t * e);
lv_obj_t *ui_TempSensorListDropdown;
void ui_event_BackButton( lv_event_t * e);
lv_obj_t *ui_BackButton;
void ui_event_BackLabel( lv_event_t * e);
lv_obj_t *ui_BackLabel;
void ui_event_SaveButton( lv_event_t * e);
lv_obj_t *ui_SaveButton;
void ui_event_SaveLabel( lv_event_t * e);
lv_obj_t *ui_SaveLabel;
lv_obj_t *ui_LEDSettingsScreenKB;


// SCREEN: ui_AlertSettingsScreen
void ui_AlertSettingsScreen_screen_init(void);
lv_obj_t *ui_AlertSettingsScreen;
lv_obj_t *ui_TresholdsPanel;
lv_obj_t *ui_MinRPMAlertLabel;
lv_obj_t *ui_Fan1Label;
void ui_event_Fan1Min( lv_event_t * e);
lv_obj_t *ui_Fan1Min;
lv_obj_t *ui_Fan2Label;
void ui_event_Fan2Min( lv_event_t * e);
lv_obj_t *ui_Fan2Min;
lv_obj_t *ui_Pump1Label;
void ui_event_Fan3Min( lv_event_t * e);
lv_obj_t *ui_Fan3Min;
lv_obj_t *ui_Pump2Label;
void ui_event_Fan4Min( lv_event_t * e);
lv_obj_t *ui_Fan4Min;
lv_obj_t *ui_RGBPanel2;
lv_obj_t *ui_RGBPanel2Title;
void ui_event_Colorwheel2( lv_event_t * e);
lv_obj_t *ui_Colorwheel2;
void ui_event_EnableLedAlert( lv_event_t * e);
lv_obj_t *ui_EnableLedAlert;
void ui_event_NextButton1( lv_event_t * e);
lv_obj_t *ui_NextButton1;
void ui_event_NextLabel1( lv_event_t * e);
lv_obj_t *ui_NextLabel1;
void ui_event_BackButton2( lv_event_t * e);
lv_obj_t *ui_BackButton2;
void ui_event_BackLabel2( lv_event_t * e);
lv_obj_t *ui_BackLabel2;
void ui_event_SaveButton2( lv_event_t * e);
lv_obj_t *ui_SaveButton2;
void ui_event_SaveLabel2( lv_event_t * e);
lv_obj_t *ui_SaveLabel2;
lv_obj_t *ui_AlertSettingsScreenKB;


// SCREEN: ui_AboutScreen
void ui_AboutScreen_screen_init(void);
lv_obj_t *ui_AboutScreen;
lv_obj_t *ui_FWLabel;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_AboutLabel;
lv_obj_t *ui_GithubURLLabel;
lv_obj_t *ui_Label3;
void ui_event_BackButton1( lv_event_t * e);
lv_obj_t *ui_BackButton1;
void ui_event_BackLabel1( lv_event_t * e);
lv_obj_t *ui_BackLabel1;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_pbdisplay[1] = {&ui_img_pbdisplay3_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_LogoScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      _ui_screen_change( &ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 0, 1500, &ui_MainScreen_screen_init);
}
}
void ui_event_PanelAmbient1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_PanelAmbient2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_PanelAmbient1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_PanelAmbient2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_PanelAmbient1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_PanelAmbient2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_SettingsButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_LedSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_LedSettingsScreen_screen_init);
}
}
void ui_event_BackLabel3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_LedSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_LedSettingsScreen_screen_init);
}
}
void ui_event_NextButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AlertSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AlertSettingsScreen_screen_init);
}
}
void ui_event_NextLabel( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AlertSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AlertSettingsScreen_screen_init);
}
}
void ui_event_LEDEffectDropdown( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      led_effect_dropdown_event_cb( e );
}
}
void ui_event_NumOfLEDs( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_FOCUSED) {
      _ui_flag_modify( ui_LEDSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_keyboard_set_target(ui_LEDSettingsScreenKB,  ui_NumOfLEDs);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      _ui_flag_modify( ui_LEDSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      num_of_leds_event_cb( e );
}
}
void ui_event_RedSlider( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      colorslider_event_cb( e );
}
}
void ui_event_GreenSlider( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      colorslider_event_cb( e );
}
}
void ui_event_BlueSlider( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      colorslider_event_cb( e );
}
}
void ui_event_TempSensorListDropdown( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      temp_sensor_dropdown_event_cb( e );
}
}
void ui_event_BackButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_MainScreen_screen_init);
      SaveLedSettings( e );
}
}
void ui_event_BackLabel( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_MainScreen_screen_init);
}
}
void ui_event_SaveButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      SaveLedSettings( e );
}
}
void ui_event_SaveLabel( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MainScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_MainScreen_screen_init);
}
}
void ui_event_Fan1Min( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_FOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_keyboard_set_target(ui_AlertSettingsScreenKB,  ui_Fan1Min);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Fan2Min( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_FOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_keyboard_set_target(ui_AlertSettingsScreenKB,  ui_Fan2Min);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Fan3Min( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_FOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_keyboard_set_target(ui_AlertSettingsScreenKB,  ui_Fan3Min);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Fan4Min( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_FOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_keyboard_set_target(ui_AlertSettingsScreenKB,  ui_Fan4Min);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      _ui_flag_modify( ui_AlertSettingsScreenKB, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Colorwheel2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      colorwheel_event_cb( e );
}
}
void ui_event_EnableLedAlert( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      led_alert_event_cb( e );
}
}
void ui_event_NextButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AboutScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AboutScreen_screen_init);
}
}
void ui_event_NextLabel1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AboutScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AboutScreen_screen_init);
}
}
void ui_event_BackButton2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_LedSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_LedSettingsScreen_screen_init);
}
}
void ui_event_BackLabel2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_LedSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_LedSettingsScreen_screen_init);
}
}
void ui_event_SaveButton2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      SaveAlertSettings( e );
}
}
void ui_event_SaveLabel2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      SaveAlertSettings( e );
}
}
void ui_event_BackButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AlertSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AlertSettingsScreen_screen_init);
}
}
void ui_event_BackLabel1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AlertSettingsScreen, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_AlertSettingsScreen_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_LogoScreen_screen_init();
ui_MainScreen_screen_init();
ui_LedSettingsScreen_screen_init();
ui_AlertSettingsScreen_screen_init();
ui_AboutScreen_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_LogoScreen);
}
