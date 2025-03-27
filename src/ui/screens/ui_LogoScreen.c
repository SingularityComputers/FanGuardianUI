// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_LogoScreen_screen_init(void)
{
ui_LogoScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_LogoScreen, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_LogoScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LogoScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SCLogo = lv_img_create(ui_LogoScreen);
lv_img_set_src(ui_SCLogo, &ui_img_sclogosmall_png);
lv_obj_set_width( ui_SCLogo, LV_SIZE_CONTENT);  /// 305
lv_obj_set_height( ui_SCLogo, LV_SIZE_CONTENT);   /// 227
lv_obj_set_align( ui_SCLogo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SCLogo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_SCLogo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_LogoScreen, ui_event_LogoScreen, LV_EVENT_ALL, NULL);

}
