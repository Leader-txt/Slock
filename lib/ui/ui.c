// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Main;
void ui_event_Screen1_Button1(lv_event_t * e);
lv_obj_t * ui_Screen1_Button1;
lv_obj_t * ui_Screen1_Image1;
lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Button2(lv_event_t * e);
lv_obj_t * ui_Screen1_Button2;
lv_obj_t * ui_Screen1_Image2;
lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
lv_obj_t * ui_Screen1_Button3;
lv_obj_t * ui_Screen1_Image3;
lv_obj_t * ui_Screen1_Label3;
void ui_event_Screen1_Button4(lv_event_t * e);
lv_obj_t * ui_Screen1_Button4;
lv_obj_t * ui_Screen1_Image4;
lv_obj_t * ui_Screen1_Label4;
void ui_event_Clock(lv_event_t * e);
lv_obj_t * ui_Clock;
lv_obj_t * ui_Clock_Label3;
lv_obj_t * ui_Read;
void ui_event_Files(lv_event_t * e);
lv_obj_t * ui_Files;
void ui_event_Settings(lv_event_t * e);
lv_obj_t * ui_Settings;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Clock, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen1_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen1_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Files, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen1_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Read, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Clock(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Files(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Settings(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
        _ui_screen_change(ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Main_screen_init(void)
{
    ui_Main = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Main, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Button1 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Screen1_Button1, 60);
    lv_obj_set_height(ui_Screen1_Button1, 80);
    lv_obj_set_x(ui_Screen1_Button1, 16);
    lv_obj_set_y(ui_Screen1_Button1, 0);
    lv_obj_set_align(ui_Screen1_Button1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image1 = lv_img_create(ui_Screen1_Button1);
    lv_img_set_src(ui_Screen1_Image1, &ui_img_icons_clock_png);
    lv_obj_set_width(ui_Screen1_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Image1, 0);
    lv_obj_set_y(ui_Screen1_Image1, -10);
    lv_obj_set_align(ui_Screen1_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Screen1_Image1, 80);

    ui_Screen1_Label1 = lv_label_create(ui_Screen1_Button1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 0);
    lv_obj_set_y(ui_Screen1_Label1, 5);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Screen1_Label1, "时钟");
    lv_obj_set_style_text_font(ui_Screen1_Label1, &ui_font_CN, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button2 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Screen1_Button2, 60);
    lv_obj_set_height(ui_Screen1_Button2, 80);
    lv_obj_set_x(ui_Screen1_Button2, -16);
    lv_obj_set_y(ui_Screen1_Button2, 0);
    lv_obj_set_align(ui_Screen1_Button2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Screen1_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image2 = lv_img_create(ui_Screen1_Button2);
    lv_img_set_src(ui_Screen1_Image2, &ui_img_icons_settings_png);
    lv_obj_set_width(ui_Screen1_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Image2, 0);
    lv_obj_set_y(ui_Screen1_Image2, -10);
    lv_obj_set_align(ui_Screen1_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Screen1_Image2, 80);

    ui_Screen1_Label2 = lv_label_create(ui_Screen1_Button2);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label2, 0);
    lv_obj_set_y(ui_Screen1_Label2, 5);
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Screen1_Label2, "设置");
    lv_obj_set_style_text_font(ui_Screen1_Label2, &ui_font_CN, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button3 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Screen1_Button3, 60);
    lv_obj_set_height(ui_Screen1_Button3, 80);
    lv_obj_set_x(ui_Screen1_Button3, 38);
    lv_obj_set_y(ui_Screen1_Button3, 0);
    lv_obj_set_align(ui_Screen1_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image3 = lv_img_create(ui_Screen1_Button3);
    lv_img_set_src(ui_Screen1_Image3, &ui_img_icons_file_png);
    lv_obj_set_width(ui_Screen1_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Image3, 0);
    lv_obj_set_y(ui_Screen1_Image3, -10);
    lv_obj_set_align(ui_Screen1_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Screen1_Image3, 60);

    ui_Screen1_Label3 = lv_label_create(ui_Screen1_Button3);
    lv_obj_set_width(ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label3, 0);
    lv_obj_set_y(ui_Screen1_Label3, 5);
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Screen1_Label3, "文件管理");
    lv_obj_set_style_text_font(ui_Screen1_Label3, &ui_font_CN, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button4 = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Screen1_Button4, 60);
    lv_obj_set_height(ui_Screen1_Button4, 80);
    lv_obj_set_x(ui_Screen1_Button4, -38);
    lv_obj_set_y(ui_Screen1_Button4, 0);
    lv_obj_set_align(ui_Screen1_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button4, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image4 = lv_img_create(ui_Screen1_Button4);
    lv_img_set_src(ui_Screen1_Image4, &ui_img_icons_read_png);
    lv_obj_set_width(ui_Screen1_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Image4, 0);
    lv_obj_set_y(ui_Screen1_Image4, -10);
    lv_obj_set_align(ui_Screen1_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Screen1_Image4, 80);

    ui_Screen1_Label4 = lv_label_create(ui_Screen1_Button4);
    lv_obj_set_width(ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label4, 0);
    lv_obj_set_y(ui_Screen1_Label4, 5);
    lv_obj_set_align(ui_Screen1_Label4, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Screen1_Label4, "阅读");
    lv_obj_set_style_text_font(ui_Screen1_Label4, &ui_font_CN, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1_Button1, ui_event_Screen1_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button2, ui_event_Screen1_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button3, ui_event_Screen1_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button4, ui_event_Screen1_Button4, LV_EVENT_ALL, NULL);

}
void ui_Clock_screen_init(void)
{
    ui_Clock = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Clock, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Clock_Label3 = lv_label_create(ui_Clock);
    lv_obj_set_width(ui_Clock_Label3, lv_pct(44));
    lv_obj_set_height(ui_Clock_Label3, lv_pct(32));
    lv_obj_set_align(ui_Clock_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Clock_Label3, "00:00");
    lv_obj_set_style_text_font(ui_Clock_Label3, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Clock, ui_event_Clock, LV_EVENT_ALL, NULL);

}
void ui_Read_screen_init(void)
{
    ui_Read = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Read, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_Files_screen_init(void)
{
    ui_Files = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Files, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Files, ui_event_Files, LV_EVENT_ALL, NULL);

}
void ui_Settings_screen_init(void)
{
    ui_Settings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Settings, ui_event_Settings, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Main_screen_init();
    ui_Clock_screen_init();
    ui_Read_screen_init();
    ui_Files_screen_init();
    ui_Settings_screen_init();
    lv_disp_load_scr(ui_Main);
}
