/*******************************************************************************
* Title                 :   RGB mixer example with LVGL  
* Filename              :   rgb_mixer.c
* Author                :   ItachiVN
* Origin Date           :   2023/09/25
* Version               :   0.0.0
* Compiler              :   ESP-IDF V5.0.2
* Target                :   ESP32 
* Notes                 :   None
*******************************************************************************/

/*************** MODULE REVISION LOG ******************************************
*
*    Date       Software Version	Initials	Description
*  2023/09/25       0.0.0	         ItachiVN      Module Created.
*
*******************************************************************************/

/** \file rgb_mixer.c
 *  \brief This module contains the
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include "rgb_mixer.h"
/******************************************************************************
* Module Preprocessor Constants
*******************************************************************************/


/******************************************************************************
* Module Preprocessor Macros
*******************************************************************************/

/******************************************************************************
* Module Typedefs
*******************************************************************************/

/******************************************************************************
* Module Variable Definitions
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/

/******************************************************************************
* Function Definitions
*******************************************************************************/
void slider_create(void)
{
    lv_obj_t* p_act_screen = lv_scr_act();

    lv_obj_t* p_slider_r = lv_slider_create(lv_scr_act());
    lv_obj_align_to(p_slider_r, lv_scr_act(), LV_ALIGN_TOP_MID, 0, 10);
    lv_obj_set_style_bg_color(p_slider_r, lv_palette_main(LV_PALETTE_RED), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(p_slider_r, lv_palette_main(LV_PALETTE_RED), LV_PART_KNOB);

    lv_obj_t* p_slider_g = lv_slider_create(lv_scr_act());
    lv_obj_align_to(p_slider_g, p_slider_r, LV_ALIGN_TOP_MID, 0, 50);
    lv_obj_set_style_bg_color(p_slider_g, lv_palette_main(LV_PALETTE_GREEN), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(p_slider_g, lv_palette_main(LV_PALETTE_GREEN), LV_PART_KNOB);

    lv_obj_t* p_slider_b = lv_slider_create(lv_scr_act());
    lv_obj_align_to(p_slider_b, p_slider_g, LV_ALIGN_TOP_MID, 0, 50);
    lv_obj_set_style_bg_color(p_slider_b, lv_palette_main(LV_PALETTE_BLUE), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(p_slider_b, lv_palette_main(LV_PALETTE_BLUE), LV_PART_KNOB);



    // Creating labels

    lv_obj_t* p_heading = lv_label_create(lv_scr_act());
    lv_label_set_text(p_heading, "RGB MIXER");
    lv_obj_align(p_heading, LV_ALIGN_TOP_MID, 0, HEADING_Y_POS);

    p_rgb_r_label = lv_label_create(lv_scr_act());
    lv_label_set_text(p_rgb_r_label, "0");
    lv_obj_align_to(p_rgb_r_label, p_slider_r, LV_ALIGN_OUT_TOP_MID, 0, 0);

    p_rgb_g_label = lv_label_create(lv_scr_act());
    lv_label_set_text(p_rgb_g_label, "0");
    lv_obj_align_to(p_rgb_g_label, p_slider_g, LV_ALIGN_OUT_TOP_MID, 0, 0);

    p_rgb_b_label = lv_label_create(lv_scr_act());
    lv_label_set_text(p_rgb_b_label, "0");
    lv_obj_align_to(p_rgb_b_label, p_slider_b, LV_ALIGN_OUT_TOP_MID, 0, 0);
}
