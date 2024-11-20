SET(SOURCES screens/ui_LogoScreen.c
    screens/ui_MainScreen.c
    screens/ui_LedSettingsScreen.c
    screens/ui_AlertSettingsScreen.c
    screens/ui_SettingsScreen.c
    screens/ui_AboutScreen.c
    screens/ui_FanControllerScreen.c
    ui_theme_manager.cpp
    ui_themes.cpp
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    images/ui_img_sclogosmall_png.c)

add_library(ui ${SOURCES})
