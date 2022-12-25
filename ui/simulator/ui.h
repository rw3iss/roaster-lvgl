// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: Roaster_UI

#ifndef _ROASTER_UI_UI_H
#define _ROASTER_UI_UI_H

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

extern lv_obj_t *ui_ScreenHome;
extern lv_obj_t *ui_Screen1_Roller2;
void ui_event_Screen1_Roller3(lv_event_t *e);
extern lv_obj_t *ui_Screen1_Roller3;
extern lv_obj_t *ui_Screen1_Label1;
extern lv_obj_t *ui_Screen1_Label2;
extern lv_obj_t *ui_Screen1_Label3;
extern lv_obj_t *ui_ScreenRoast;
extern lv_obj_t *ui_ScreenRoast_Label4;
extern lv_obj_t *ui_ScreenRoast_Arc1;
extern lv_obj_t *ui_ScreenRoast_Arc2;
void ui_event_ScreenRoast_Button2(lv_event_t *e);
extern lv_obj_t *ui_ScreenRoast_Button2;
extern lv_obj_t *ui_ScreenRoast_Label5;

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
