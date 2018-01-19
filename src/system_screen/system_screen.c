/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */

#if defined(_MSC_VER)
#else
#include "stdio.h"
#endif


#include "gdi_font_engine.h"
#include "gdi.h"
//#include "graphic_interface.h"
#include "main_screen.h"
#include "bt_gap.h"
#include "traing_type.h"
#include "mt25x3_hdk_lcd.h"
//add by chen
#include "FreeRTOS.h"
#include "stdint.h"
#include "stdbool.h"
#include <string.h>
#include "stdlib.h"
#include "memory_attribute.h"
#include "bsp_lcd.h"
#include "mt25x3_hdk_backlight.h"
#include "custom_image_data_resource.h"
#include "custom_resource_def.h"
#include "timers.h"

#include "syslog.h"
#include <stdarg.h>
#include <stdint.h>
#include <string.h>

#define LEFT_GAP 5
#define ITEM_HEIGHT 25

#define RESIZE_RATE LCD_CURR_HEIGHT/240
#define DEMO_ITEM_NAME_MAX_LEN 50
//TimerHandle_t vSystemscreenWatchfaceTimer = NULL;

static struct {
  int32_t fota_title_x;
  int32_t fota_title_y;
  int32_t hr_title_x;
  int32_t hr_title_y;
  int32_t hrv_title_x;
  int32_t hrv_title_y;
  int32_t hrv_value_x;
  int32_t hrv_value_y;
  int32_t bt_name_x;
  int32_t bt_name_y;
  int32_t bt_status_x;
  int32_t bt_status_y;
  int32_t back_x1;
  int32_t back_y1;
  int32_t back_x2;
  int32_t back_y2;
  int32_t start_item;
  int32_t curr_item_num;
  int32_t one_screen_item_num;
  int32_t total_item_num;
  int32_t focus_point_index;
  gdi_color_t bg_color;
  gdi_color_t font_color;
  uint32_t width;
  uint32_t height;
} system_screen_cntx;

static event_handle_func curr_event_handler;

#define DEMO_ITEM_NAME_MAX_LEN 50

#define CONFIG_INCLUDE_HEADER
#include "system_screen_config.h"
#undef CONFIG_INCLUDE_HEADER
#define CONFIG_INCLUD_BODY

#define RESIZE_RATE LCD_CURR_HEIGHT/240

typedef struct list_system_item_struct {
    show_screen_proc_f show_system_screen_f;
    event_handle_func event_system_handle_f;
    uint8_t name[DEMO_ITEM_NAME_MAX_LEN];
} list_system_item_struct_t;

static const list_system_item_struct_t demo_system_screen_item[] =
{
#include "system_screen_config.h"
};


void show_system_screen(void);

void system_screen_event_handler(message_id_enum event_id, int32_t param1, void* param2)
{

}
static void system_screen_cntx_init()
{
    if ((system_screen_cntx.height == 0) && (system_screen_cntx.width==0)) {

        bsp_lcd_get_parameter(LCM_IOCTRL_QUERY__LCM_HEIGHT, &(system_screen_cntx.height));
        bsp_lcd_get_parameter(LCM_IOCTRL_QUERY__LCM_WIDTH, &(system_screen_cntx.width));
//        LOG_I("width(%d), height(%d).\r\n", fota_screen_cntx.width, fota_screen_cntx.height);

        system_screen_cntx.bg_color = 0;
        system_screen_cntx.font_color = 0xFFFF;
        /* first */
        system_screen_cntx.fota_title_x = 5;
        system_screen_cntx.fota_title_y = 6;

        /* middle */
        system_screen_cntx.hr_title_x = LEFT_GAP;
        system_screen_cntx.hr_title_y = ITEM_HEIGHT*2 + system_screen_cntx.fota_title_y;
        system_screen_cntx.hrv_title_x = LEFT_GAP;
        system_screen_cntx.hrv_title_y = ITEM_HEIGHT + system_screen_cntx.hr_title_y;
        system_screen_cntx.hrv_value_x = LEFT_GAP;
        system_screen_cntx.hrv_value_y = ITEM_HEIGHT + system_screen_cntx.hrv_title_y;

        /* end */
        system_screen_cntx.bt_name_x = LEFT_GAP;
        system_screen_cntx.bt_name_y = system_screen_cntx.height - 6 - (ITEM_HEIGHT*3);
        system_screen_cntx.bt_status_x = LEFT_GAP;
        system_screen_cntx.bt_status_y = ITEM_HEIGHT*2 + system_screen_cntx.bt_name_y;
        system_screen_cntx.back_x1 = system_screen_cntx.width-80;
        system_screen_cntx.back_y1 = ITEM_HEIGHT*2 + system_screen_cntx.bt_name_y;
        system_screen_cntx.back_x2 = system_screen_cntx.width-1;
        system_screen_cntx.back_y2 = system_screen_cntx.height-1;

		system_screen_cntx.focus_point_index = 0;
		system_screen_cntx.start_item = 0;
		system_screen_cntx.one_screen_item_num = 2;
		system_screen_cntx.total_item_num = 2;
		system_screen_cntx.curr_item_num = 2;
    }

}

static char* my_itoa(int num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned unum;
    int i=0,j,k;
    char temp;

    if(radix==10 && num<0) {
        unum=(unsigned)-num;
        str[i++]='-';
    } else {
        unum=(unsigned)num;
    }

    do {
        str[i++] = index[unum%(unsigned)radix];
        unum /= radix;
    } while(unum);

    str[i]='\0';
    if(str[0]=='-') {
        k=1;
    } else {
        k=0;
    }

    for(j=k;j<=(i-1)/2;j++)
    {
        temp=str[j];
        str[j]=str[i-1+k-j];
        str[i-1+k-j]=temp;
    }
    return str;
}


static uint8_t* system_screen_convert_string_to_wstring(char* string)
{
    static uint8_t wstring[50];
    int32_t index = 0;
    if (!string) {
        return NULL;
    }
    while (*string) {
        wstring[index] = *((uint8_t*)string);
        wstring[index + 1] = 0;
        string++;
        index+=2;
    }
    return wstring;
}

static void system_screen_draw()
{
    int32_t index = system_screen_cntx.start_item;
    int32_t num = system_screen_cntx.curr_item_num;
    int32_t x,y;
	gdi_font_engine_size_t font;

	x = 40 * RESIZE_RATE;
	y = 30 * RESIZE_RATE;
	gdi_font_engine_display_string_info_t system_screen_string_info = {0};
    gdi_draw_filled_rectangle(0,0,system_screen_cntx.width-1,system_screen_cntx.height-1, system_screen_cntx.bg_color);

//	gdi_image_draw_by_id(0, 0, IMAGE_ID_ZBG_03_BMP);

	gdi_font_engine_get_font_size(&font);
	if (font != GDI_FONT_ENGINE_FONT_MEDIUM) {
		GRAPHICLOG("[chenchen font size=%d,\r\n", font);
		font = GDI_FONT_ENGINE_FONT_MEDIUM;
	}
	gdi_font_engine_set_font_size(font);
	gdi_font_engine_get_font_size(&font);
	GRAPHICLOG("[chenchen 2nd font size=%d,\r\n", font);

    gdi_font_engine_color_t text_color = {0, 255, 255, 255};//black color
    gdi_font_engine_set_text_color(text_color);



    while (num) {
        uint8_t pre_index[10];
        int32_t str_len;
		
		if (index == system_screen_cntx.focus_point_index){
			gdi_font_engine_color_t text_color1 = {0, 0, 0, 255};
			gdi_font_engine_set_text_color(text_color1);
/*
			my_itoa((int) index, (char*) pre_index,10);
			str_len = strlen((char*) pre_index);
			pre_index[str_len] = '.';
			pre_index[str_len + 1] = '*';
			pre_index[str_len + 2] = 0;
*/
		}else {
			gdi_font_engine_color_t text_color2 = {0, 255, 255, 255};
			gdi_font_engine_set_text_color(text_color2);
/*
			my_itoa((int) index, (char*) pre_index,10);
        	str_len = strlen((char*) pre_index);
        	pre_index[str_len] = '.';        	
			pre_index[str_len + 1] = 0;
*/
		}
/*		
        system_screen_string_info.x = x - 30 * RESIZE_RATE;
        system_screen_string_info.y = y;
        system_screen_string_info.string = system_screen_convert_string_to_wstring((char*)pre_index);
        system_screen_string_info.length = strlen((char*) pre_index);
        system_screen_string_info.baseline_height = -1;
        gdi_font_engine_display_string(&system_screen_string_info);
*/
/*
        system_screen_string_info.x = x;
        system_screen_string_info.y = y;
        system_screen_string_info.string = traing_type_convert_string_to_wstring((char*)demo_system_screen_item[index].name);
        system_screen_string_info.length = strlen((char*) demo_system_screen_item[index].name);
        system_screen_string_info.baseline_height = -1;
        gdi_font_engine_display_string(&system_screen_string_info);
*/
		system_screen_string_info.x = x;
        system_screen_string_info.y = y;
        system_screen_string_info.string = (uint8_t*)demo_system_screen_item[index].name;
        system_screen_string_info.length = 4;
        system_screen_string_info.baseline_height = -1;
        gdi_font_engine_display_string(&system_screen_string_info);
                                
        y += 40 * RESIZE_RATE;
        index++;
        num--;
    }
	
	gdi_lcd_update_screen(0,0,system_screen_cntx.width-1,system_screen_cntx.height-1);

}

static void system_screen_keypad_event_handler(hal_keypad_event_t* keypad_event,void* user_data)
{
		int32_t temp_index;
		int32_t max_item_num;
		int32_t temp_focus;
/*
    keyvalue
    13 0xd ---enter --- DEVICE_KEY_ENTER
    14 0xe ---back  --- DEVICE_KEY_BACK
    17 0x11---up  --- DEVICE_KEY_UP(0x14)
    18 0x12---down  --- DEVICE_KEY_DOWN(0x15)   // gaochao up, down was not correct
                        DEVICE_KEY_POWER
*/

		GRAPHICLOG("[chenchen traing_screen_keypad_event_handler key state=%d, position=%d\r\n", (int)keypad_event->state, (int)keypad_event->key_data);
/*
		if( xTimerReset( vSystemscreenWatchfaceTimer, 100 ) != pdPASS ) {
		LOG_I(common, "chenchen main show traingtype timer fail");
		}
*/		
		if (keypad_event->key_data == DEVICE_KEY_ENTER && keypad_event->state == 0){
			temp_index = 1;
		} else if (keypad_event->key_data == DEVICE_KEY_BACK && keypad_event->state == 0){
			temp_index = 2;
		} else if (keypad_event->key_data == DEVICE_KEY_DOWN && keypad_event->state == 0){
			temp_focus = system_screen_cntx.focus_point_index+1;
			max_item_num = system_screen_cntx.total_item_num;
			system_screen_cntx.focus_point_index = temp_focus%max_item_num;
			GRAPHICLOG("[chenchen[get key]main_screen_cntx.focus_point_index=%d,\r\n", system_screen_cntx.focus_point_index);
			if (system_screen_cntx.focus_point_index < 0)
				system_screen_cntx.focus_point_index = 0;
			
		} else if (keypad_event->key_data == DEVICE_KEY_UP && keypad_event->state == 0){
			temp_focus = system_screen_cntx.focus_point_index-1;
			max_item_num = system_screen_cntx.total_item_num;
			system_screen_cntx.focus_point_index = temp_focus%max_item_num;
			
			if (system_screen_cntx.focus_point_index < 0)
				system_screen_cntx.focus_point_index = 0;
		}
	
		switch (temp_index){
			case -1:
				return;
			case -2:
//				main_screen_scroll_to_prevoius_page();
				break;
			case -3:
//				main_screen_scroll_to_next_page();
				break;
			case 0:
				break;
			case 1:
//				show_traingtypewatchface_timer_stop();
				curr_event_handler = demo_system_screen_item[system_screen_cntx.focus_point_index].event_system_handle_f;
				if (demo_system_screen_item[system_screen_cntx.focus_point_index].show_system_screen_f) {
					demo_system_screen_item[system_screen_cntx.focus_point_index].show_system_screen_f();
				}
				return;
			default:
				break;
	
		}

		if (keypad_event->key_data == DEVICE_KEY_BACK && keypad_event->state == 0){
//			show_systemscreenwatchface_timer_stop();
			show_main_screen();
		} else {
			system_screen_draw();
		}

}

/*
void vSystemscreenWatchfaceTimerCallback( TimerHandle_t xTimer )
{
	wf_app_task_enable_show();

}

void show_systemscreenwatchface_timer_stop(void)
{
    if (vSystemscreenWatchfaceTimer && (xTimerIsTimerActive(vSystemscreenWatchfaceTimer) != pdFALSE)) {
        xTimerStop(vSystemscreenWatchfaceTimer, 0);
    }

}

void show_systemscreenwatchface_timer_init(uint32_t time)
{
    if (vSystemscreenWatchfaceTimer && (xTimerIsTimerActive(vSystemscreenWatchfaceTimer) != pdFALSE)) {
        xTimerStop(vSystemscreenWatchfaceTimer, 0);
    } else {
		vSystemscreenWatchfaceTimer = xTimerCreate( "vSystemscreenWatchfaceTimer",           // Just a text name, not used by the kernel.
                                      ( time*1000 / portTICK_PERIOD_MS), // The timer period in ticks.
                                      pdFALSE,                    // The timer is a one-shot timer.
                                      0,                          // The id is not used by the callback so can take any value.
                                      vSystemscreenWatchfaceTimerCallback     // The callback function that switches the LCD back-light off.
                                   );
    }
	xTimerStart(vSystemscreenWatchfaceTimer, 0);
}
*/

void show_system_screen(void)
{
	system_screen_cntx_init();
	demo_ui_register_keypad_event_callback(system_screen_keypad_event_handler,true, NULL);
	system_screen_draw();
//	show_systemscreenwatchface_timer_init(10);
}

