// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Main;
void ui_event_Screen1_Button1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button1;
extern lv_obj_t * ui_Screen1_Image1;
extern lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Button2(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button2;
extern lv_obj_t * ui_Screen1_Image2;
extern lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button3;
extern lv_obj_t * ui_Screen1_Image3;
extern lv_obj_t * ui_Screen1_Label3;
void ui_event_Screen1_Button4(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button4;
extern lv_obj_t * ui_Screen1_Image4;
extern lv_obj_t * ui_Screen1_Label4;
void ui_event_Clock(lv_event_t * e);
extern lv_obj_t * ui_Clock;
extern lv_obj_t * ui_Clock_Label3;
extern lv_obj_t * ui_Read;
void ui_event_Files(lv_event_t * e);
extern lv_obj_t * ui_Files;
void ui_event_Settings(lv_event_t * e);
extern lv_obj_t * ui_Settings;


LV_IMG_DECLARE(ui_img_icons_clock_png);    // assets\Icons\Clock.png
LV_IMG_DECLARE(ui_img_icons_settings_png);    // assets\Icons\Settings.png
LV_IMG_DECLARE(ui_img_icons_file_png);    // assets\Icons\File.png
LV_IMG_DECLARE(ui_img_icons_read_png);    // assets\Icons\Read.png


LV_FONT_DECLARE(ui_font_CN);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
