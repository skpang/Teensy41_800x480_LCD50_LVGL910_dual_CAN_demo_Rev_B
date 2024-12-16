// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: Teensy41_800x400_dual_CAN

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Button1 = lv_button_create(ui_Screen1);
lv_obj_set_width( ui_Button1, 125);
lv_obj_set_height( ui_Button1, 74);
lv_obj_set_x( ui_Button1, -324 );
lv_obj_set_y( ui_Button1, 188 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_remove_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFF0510), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_Button1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_Button1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_Button1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Button1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Button1, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Button1, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Spinner1 = lv_spinner_create(ui_Screen1);
//lv_spinner_set_anim_params(ui_Spinner1, 1000, 90);
lv_obj_set_width( ui_Spinner1, 98);
lv_obj_set_height( ui_Spinner1, 80);
lv_obj_set_x( ui_Spinner1, 334 );
lv_obj_set_y( ui_Spinner1, 177 );
lv_obj_set_align( ui_Spinner1, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_Spinner1, LV_OBJ_FLAG_CLICKABLE );    /// Flags

ui_Switch1 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch1, 99);
lv_obj_set_height( ui_Switch1, 47);
lv_obj_set_x( ui_Switch1, 323 );
lv_obj_set_y( ui_Switch1, 12 );
lv_obj_set_align( ui_Switch1, LV_ALIGN_CENTER );


ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, -326 );
lv_obj_set_y( ui_Label1, -90 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"5.0\" LCD 800x480");

ui_Button2 = lv_button_create(ui_Screen1);
lv_obj_set_width( ui_Button2, 125);
lv_obj_set_height( ui_Button2, 74);
lv_obj_set_x( ui_Button2, -178 );
lv_obj_set_y( ui_Button2, 189 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_remove_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, -353 );
lv_obj_set_y( ui_Label2, -68 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"TP Co ord :");
lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, -205 );
lv_obj_set_y( ui_Label3, -90 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"LVGL version :");
lv_obj_set_style_text_align(ui_Label3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, -17 );
lv_obj_set_y( ui_Label4, -177 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"Teensy 4.1 LVGL Demo\nskpang.co.uk");
lv_obj_set_style_text_align(ui_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_36, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"");

ui_version = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_version, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_version, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_version, -132 );
lv_obj_set_y( ui_version, -90 );
lv_obj_set_align( ui_version, LV_ALIGN_CENTER );
lv_label_set_text(ui_version,"text");
lv_obj_set_style_text_align(ui_version, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label6 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label6, -341 );
lv_obj_set_y( ui_Label6, -47 );
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,"Frame count :");

ui_coord = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_coord, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_coord, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_coord, -262 );
lv_obj_set_y( ui_coord, -68 );
lv_obj_set_align( ui_coord, LV_ALIGN_CENTER );
lv_label_set_text(ui_coord,"0");
lv_obj_set_style_text_align(ui_coord, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_framecount = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_framecount, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_framecount, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_framecount, -269 );
lv_obj_set_y( ui_framecount, -46 );
lv_obj_set_align( ui_framecount, LV_ALIGN_CENTER );
lv_label_set_text(ui_framecount,"text");

ui_Slider1 = lv_slider_create(ui_Screen1);
lv_slider_set_value( ui_Slider1, 0, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider1)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider1, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider1, 375);
lv_obj_set_height( ui_Slider1, 33);
lv_obj_set_x( ui_Slider1, 182 );
lv_obj_set_y( ui_Slider1, -50 );
lv_obj_set_align( ui_Slider1, LV_ALIGN_CENTER );


//Compensating for LVGL9.1 draw crash with bar/slider max value when top-padding is nonzero and right-padding is 0
if (lv_obj_get_style_pad_top(ui_Slider1,LV_PART_MAIN) > 0) lv_obj_set_style_pad_right( ui_Slider1, lv_obj_get_style_pad_right(ui_Slider1,LV_PART_MAIN) + 1, LV_PART_MAIN );
ui_Switch2 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch2, 99);
lv_obj_set_height( ui_Switch2, 47);
lv_obj_set_x( ui_Switch2, 323 );
lv_obj_set_y( ui_Switch2, 81 );
lv_obj_set_align( ui_Switch2, LV_ALIGN_CENTER );


ui_Button3 = lv_button_create(ui_Screen1);
lv_obj_set_width( ui_Button3, 125);
lv_obj_set_height( ui_Button3, 74);
lv_obj_set_x( ui_Button3, -30 );
lv_obj_set_y( ui_Button3, 188 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_remove_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Button4 = lv_button_create(ui_Screen1);
lv_obj_set_width( ui_Button4, 125);
lv_obj_set_height( ui_Button4, 74);
lv_obj_set_x( ui_Button4, 120 );
lv_obj_set_y( ui_Button4, 188 );
lv_obj_set_align( ui_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_remove_flag( ui_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label7 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label7, -180 );
lv_obj_set_y( ui_Label7, 188 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label7,"START");
lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label8 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label8, -326 );
lv_obj_set_y( ui_Label8, 190 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"STOP");
lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}