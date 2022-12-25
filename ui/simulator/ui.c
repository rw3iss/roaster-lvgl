// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: Roaster_UI

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_ScreenHome;
lv_obj_t *ui_Screen1_Roller2;
void ui_event_Screen1_Roller3(lv_event_t *e);
lv_obj_t *ui_Screen1_Roller3;
lv_obj_t *ui_Screen1_Label1;
lv_obj_t *ui_Screen1_Label2;
lv_obj_t *ui_Screen1_Label3;
lv_obj_t *ui_ScreenRoast;
lv_obj_t *ui_ScreenRoast_Label4;
lv_obj_t *ui_ScreenRoast_Arc1;
lv_obj_t *ui_ScreenRoast_Arc2;
void ui_event_ScreenRoast_Button2(lv_event_t *e);
lv_obj_t *ui_ScreenRoast_Button2;
lv_obj_t *ui_ScreenRoast_Label5;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
#error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_Roller3(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_screen_change(ui_ScreenRoast, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}

void ui_event_ScreenRoast_Button2(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenHome, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_ScreenHome_screen_init(void) {
    ui_ScreenHome = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenHome, LV_OBJ_FLAG_SCROLLABLE);  /// Flags

    ui_Screen1_Roller2 = lv_roller_create(ui_ScreenHome);
    lv_roller_set_options(ui_Screen1_Roller2, "Profile A\nProfile B\nProfile C", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_Screen1_Roller2, lv_pct(48));
    lv_obj_set_height(ui_Screen1_Roller2, lv_pct(80));
    lv_obj_set_y(ui_Screen1_Roller2, 27);
    lv_obj_set_x(ui_Screen1_Roller2, lv_pct(25));
    lv_obj_set_align(ui_Screen1_Roller2, LV_ALIGN_CENTER);

    lv_obj_set_style_text_color(ui_Screen1_Roller2, lv_color_hex(0x282B30), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Roller2, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Roller2, lv_color_hex(0xFFD600), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Roller2, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_Screen1_Roller3 = lv_roller_create(ui_ScreenHome);
    lv_roller_set_options(ui_Screen1_Roller3, "Start Live Roast\nRoast Profiles\nSettings\nHelp\n",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_Screen1_Roller3, lv_pct(48));
    lv_obj_set_height(ui_Screen1_Roller3, lv_pct(80));
    lv_obj_set_y(ui_Screen1_Roller3, 27);
    lv_obj_set_x(ui_Screen1_Roller3, lv_pct(-25));
    lv_obj_set_align(ui_Screen1_Roller3, LV_ALIGN_CENTER);

    lv_obj_set_style_text_color(ui_Screen1_Roller3, lv_color_hex(0x282B30), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Roller3, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Roller3, lv_color_hex(0xFFD600), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Roller3, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_Screen1_Label1 = lv_label_create(ui_ScreenHome);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_Screen1_Label1, -122);
    lv_obj_set_y(ui_Screen1_Label1, -112);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "Choose a Selection");
    lv_obj_set_style_text_color(ui_Screen1_Label1, lv_color_hex(0x76B6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Screen1_Label1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Label1, lv_color_hex(0x282B30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Screen1_Label1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Screen1_Label1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Screen1_Label1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Screen1_Label1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label2 = lv_label_create(ui_ScreenHome);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_Screen1_Label2, 122);
    lv_obj_set_y(ui_Screen1_Label2, -112);
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label2, "Recent Profiles");
    lv_obj_set_style_text_color(ui_Screen1_Label2, lv_color_hex(0x76B6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Label2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Screen1_Label2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Label2, lv_color_hex(0x282B30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Screen1_Label2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Screen1_Label2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Screen1_Label2, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Screen1_Label2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_Screen1_Label2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Screen1_Label2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label3 = lv_label_create(ui_ScreenHome);
    lv_obj_set_width(ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_Screen1_Label3, 4);
    lv_obj_set_y(ui_Screen1_Label3, -145);
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label3, "Roaster v1.0");
    lv_obj_set_style_text_color(ui_Screen1_Label3, lv_color_hex(0xFFD600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1_Roller3, ui_event_Screen1_Roller3, LV_EVENT_ALL, NULL);
}

void ui_ScreenRoast_screen_init(void) {
    ui_ScreenRoast = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenRoast, LV_OBJ_FLAG_SCROLLABLE);  /// Flags

    ui_ScreenRoast_Label4 = lv_label_create(ui_ScreenRoast);
    lv_obj_set_width(ui_ScreenRoast_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenRoast_Label4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_ScreenRoast_Label4, -3);
    lv_obj_set_y(ui_ScreenRoast_Label4, -141);
    lv_obj_set_align(ui_ScreenRoast_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenRoast_Label4, "Live Roast");

    ui_ScreenRoast_Arc1 = lv_arc_create(ui_ScreenRoast);
    lv_obj_set_width(ui_ScreenRoast_Arc1, 150);
    lv_obj_set_height(ui_ScreenRoast_Arc1, 150);
    lv_obj_set_x(ui_ScreenRoast_Arc1, -105);
    lv_obj_set_y(ui_ScreenRoast_Arc1, -4);
    lv_obj_set_align(ui_ScreenRoast_Arc1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ScreenRoast_Arc1,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE);  /// Flags
    lv_arc_set_value(ui_ScreenRoast_Arc1, 0);
    lv_arc_set_bg_angles(ui_ScreenRoast_Arc1, 270, 60);

    lv_obj_set_style_arc_color(ui_ScreenRoast_Arc1, lv_color_hex(0xBF7600), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_ScreenRoast_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ScreenRoast_Arc2 = lv_arc_create(ui_ScreenRoast);
    lv_obj_set_width(ui_ScreenRoast_Arc2, 150);
    lv_obj_set_height(ui_ScreenRoast_Arc2, 150);
    lv_obj_set_x(ui_ScreenRoast_Arc2, 108);
    lv_obj_set_y(ui_ScreenRoast_Arc2, -7);
    lv_obj_set_align(ui_ScreenRoast_Arc2, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_ScreenRoast_Arc2, 0);

    ui_ScreenRoast_Button2 = lv_btn_create(ui_ScreenRoast);
    lv_obj_set_width(ui_ScreenRoast_Button2, 75);
    lv_obj_set_height(ui_ScreenRoast_Button2, 25);
    lv_obj_set_x(ui_ScreenRoast_Button2, -198);
    lv_obj_set_y(ui_ScreenRoast_Button2, -142);
    lv_obj_set_align(ui_ScreenRoast_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScreenRoast_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);  /// Flags
    lv_obj_clear_flag(ui_ScreenRoast_Button2, LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_style_radius(ui_ScreenRoast_Button2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ScreenRoast_Button2, lv_color_hex(0xFFD600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenRoast_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenRoast_Label5 = lv_label_create(ui_ScreenRoast);
    lv_obj_set_width(ui_ScreenRoast_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenRoast_Label5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_ScreenRoast_Label5, -200);
    lv_obj_set_y(ui_ScreenRoast_Label5, -142);
    lv_obj_set_align(ui_ScreenRoast_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenRoast_Label5, "< Back");
    lv_obj_set_style_text_color(ui_ScreenRoast_Label5, lv_color_hex(0x282B30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenRoast_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenRoast_Label5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ScreenRoast_Button2, ui_event_ScreenRoast_Button2, LV_EVENT_ALL, NULL);
}

void ui_init(void) {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenHome_screen_init();
    ui_ScreenRoast_screen_init();
    lv_disp_load_scr(ui_ScreenHome);
}
