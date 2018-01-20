/* Copyright Statement:
 *
 * (C) 2017-2018  gaochao All rights reserved.
 *
 */
#include <string.h>


#include "nvdm.h"
#include "bend_config.h"

uint32_t BendUser_config_load(Bend_User_struct_t *t)
{
	uint32_t sz = sizeof(Bend_User_struct_t);

	if (nvdm_read_data_item("LY_Bend","Bend_User", (uint8_t*)t, &sz) != NVDM_STATUS_OK) {
		memset(t,0,sz);
		memcpy(t->name, "XueYan", NAME_LENGTH);
		t->age = 18;
		t->weight = 50;

        nvdm_write_data_item("LY_Bend","Bend_User",NVDM_DATA_ITEM_TYPE_RAW_DATA,(const uint8_t*)t,sz);
    }
	return 0;

}

uint32_t TimeOutTime_config_load(TimeOut_Time_struct_t *t)
{
	uint32_t sz = sizeof(TimeOut_Time_struct_t);

//	if (nvdm_read_data_item("LY_Bend","TimeOut_Time", (uint8_t*)t, &sz) != NVDM_STATUS_OK) {
        t->poweron_BackWF_Time = 15;
		t->backlight_Time = 8;
		t->idle_BackWF_Time = 20;

        nvdm_write_data_item("LY_Bend","TimeOut_Time",NVDM_DATA_ITEM_TYPE_RAW_DATA,(const uint8_t*)t,sz);
//    }
	return 0;
}