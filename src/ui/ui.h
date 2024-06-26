// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

    #include "lv_i18n.h"
#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_LogoScreen
void ui_LogoScreen_screen_init(void);
void ui_event_LogoScreen( lv_event_t * e);
extern lv_obj_t *ui_LogoScreen;
extern lv_obj_t *ui_Image3;
// SCREEN: ui_IntermediateBlack
void ui_IntermediateBlack_screen_init(void);
void ui_event_IntermediateBlack( lv_event_t * e);
extern lv_obj_t *ui_IntermediateBlack;
// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
extern lv_obj_t *ui_MainScreen;
extern lv_obj_t *ui_PanelFan1;
extern lv_obj_t *ui_ArcFan1;
extern lv_obj_t *ui_LabelFan1;
extern lv_obj_t *ui_ValueFan1;
extern lv_obj_t *ui_RPMFan1;
extern lv_obj_t *ui_VoltagesLabel;
extern lv_obj_t *ui_PanelFan2;
extern lv_obj_t *ui_ArcFan2;
extern lv_obj_t *ui_LabelFan2;
extern lv_obj_t *ui_ValueFan2;
extern lv_obj_t *ui_RPMFan2;
extern lv_obj_t *ui_PanelFan3;
extern lv_obj_t *ui_ArcFan3;
extern lv_obj_t *ui_LabelFan3;
extern lv_obj_t *ui_ValueFan3;
extern lv_obj_t *ui_RPMFan3;
extern lv_obj_t *ui_PanelFan4;
extern lv_obj_t *ui_ArcFan4;
extern lv_obj_t *ui_LabelFan4;
extern lv_obj_t *ui_ValueFan4;
extern lv_obj_t *ui_RPMFan4;
extern lv_obj_t *ui_Panel12Volts;
extern lv_obj_t *ui_Volts12Value;
extern lv_obj_t *ui_Volts12Label;
extern lv_obj_t *ui_Panel5Volts;
extern lv_obj_t *ui_Volts5Value;
extern lv_obj_t *ui_Volts5Label;
extern lv_obj_t *ui_Panel3V3Volts;
extern lv_obj_t *ui_Volts3V3Value;
extern lv_obj_t *ui_Volts3V3Label;
void ui_event_PanelAmbient1( lv_event_t * e);
extern lv_obj_t *ui_PanelAmbient1;
extern lv_obj_t *ui_Ambient1Label;
extern lv_obj_t *ui_Temp3Value;
extern lv_obj_t *ui_Temp3Label;
void ui_event_PanelAmbient2( lv_event_t * e);
extern lv_obj_t *ui_PanelAmbient2;
extern lv_obj_t *ui_Ambient2Label;
extern lv_obj_t *ui_Temp4Value;
extern lv_obj_t *ui_Temp4Label;
extern lv_obj_t *ui_PanelT1;
extern lv_obj_t *ui_ArcT1;
extern lv_obj_t *ui_LabelT1;
extern lv_obj_t *ui_ValueT1;
extern lv_obj_t *ui_MetricT1;
extern lv_obj_t *ui_PanelT2;
extern lv_obj_t *ui_ArcT2;
extern lv_obj_t *ui_LabelT2;
extern lv_obj_t *ui_ValueT2;
extern lv_obj_t *ui_RPMT2;
void ui_event_SettingsButton( lv_event_t * e);
extern lv_obj_t *ui_SettingsButton;
void ui_event_BackLabel3( lv_event_t * e);
extern lv_obj_t *ui_BackLabel3;
extern lv_obj_t *ui_Label1;
// SCREEN: ui_LedSettingsScreen
void ui_LedSettingsScreen_screen_init(void);
extern lv_obj_t *ui_LedSettingsScreen;
void ui_event_NextButton( lv_event_t * e);
extern lv_obj_t *ui_NextButton;
void ui_event_NextLabel( lv_event_t * e);
extern lv_obj_t *ui_NextLabel;
extern lv_obj_t *ui_RGBStripePanel;
extern lv_obj_t *ui_RGBPanelTitle;
void ui_event_RedSlider( lv_event_t * e);
extern lv_obj_t *ui_RedSlider;
void ui_event_GreenSlider( lv_event_t * e);
extern lv_obj_t *ui_GreenSlider;
void ui_event_BlueSlider( lv_event_t * e);
extern lv_obj_t *ui_BlueSlider;
extern lv_obj_t *ui_RedSliderValue;
extern lv_obj_t *ui_GreenSliderValue;
extern lv_obj_t *ui_BlueSliderValue;
extern lv_obj_t *ui_LedRGB;
extern lv_obj_t *ui_LEDEffectLabel;
void ui_event_LEDEffectDropdown( lv_event_t * e);
extern lv_obj_t *ui_LEDEffectDropdown;
extern lv_obj_t *ui_NumOfLEDsLabel;
void ui_event_NumOfLEDs( lv_event_t * e);
extern lv_obj_t *ui_NumOfLEDs;
void ui_event_BackButton( lv_event_t * e);
extern lv_obj_t *ui_BackButton;
void ui_event_BackLabel( lv_event_t * e);
extern lv_obj_t *ui_BackLabel;
void ui_event_SaveButton( lv_event_t * e);
extern lv_obj_t *ui_SaveButton;
void ui_event_SaveLabel( lv_event_t * e);
extern lv_obj_t *ui_SaveLabel;
extern lv_obj_t *ui_LEDSettingsScreenKB;
// SCREEN: ui_AlertSettingsScreen
void ui_AlertSettingsScreen_screen_init(void);
extern lv_obj_t *ui_AlertSettingsScreen;
extern lv_obj_t *ui_TresholdsPanel;
extern lv_obj_t *ui_MinRPMAlertLabel;
extern lv_obj_t *ui_Fan1Label;
void ui_event_Fan1Min( lv_event_t * e);
extern lv_obj_t *ui_Fan1Min;
extern lv_obj_t *ui_Fan2Label;
void ui_event_Fan2Min( lv_event_t * e);
extern lv_obj_t *ui_Fan2Min;
extern lv_obj_t *ui_Pump1Label;
void ui_event_Fan3Min( lv_event_t * e);
extern lv_obj_t *ui_Fan3Min;
extern lv_obj_t *ui_Pump2Label;
void ui_event_Fan4Min( lv_event_t * e);
extern lv_obj_t *ui_Fan4Min;
extern lv_obj_t *ui_RGBPanel2;
extern lv_obj_t *ui_RGBPanel2Title;
void ui_event_Colorwheel2( lv_event_t * e);
extern lv_obj_t *ui_Colorwheel2;
void ui_event_EnableLedAlert( lv_event_t * e);
extern lv_obj_t *ui_EnableLedAlert;
void ui_event_NextButton1( lv_event_t * e);
extern lv_obj_t *ui_NextButton1;
void ui_event_NextLabel1( lv_event_t * e);
extern lv_obj_t *ui_NextLabel1;
void ui_event_BackButton2( lv_event_t * e);
extern lv_obj_t *ui_BackButton2;
void ui_event_BackLabel2( lv_event_t * e);
extern lv_obj_t *ui_BackLabel2;
void ui_event_SaveButton2( lv_event_t * e);
extern lv_obj_t *ui_SaveButton2;
void ui_event_SaveLabel2( lv_event_t * e);
extern lv_obj_t *ui_SaveLabel2;
extern lv_obj_t *ui_AlertSettingsScreenKB;
// SCREEN: ui_AboutScreen
void ui_AboutScreen_screen_init(void);
extern lv_obj_t *ui_AboutScreen;
extern lv_obj_t *ui_FWLabel;
extern lv_obj_t *ui_Panel3;
extern lv_obj_t *ui_AboutLabel;
extern lv_obj_t *ui_GithubURLLabel;
extern lv_obj_t *ui_Label3;
void ui_event_BackButton1( lv_event_t * e);
extern lv_obj_t *ui_BackButton1;
void ui_event_BackLabel1( lv_event_t * e);
extern lv_obj_t *ui_BackLabel1;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_sclogosmall_png);   // assets/sclogosmall.png
LV_IMG_DECLARE( ui_img_pbdisplay3_png);   // assets/pbdisplay3.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
