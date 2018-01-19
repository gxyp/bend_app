/* Copyright Statement:
 *
 * (C) 2017-2018  gaochao All rights reserved.
 *
 */

#ifndef __BEND_CONFIG_H__
#define __BEND_CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

/* Kernel includes. */
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

#define NAME_LENGTH 10
typedef struct Bend_User_struct {
	uint8_t id;
	uint8_t name[NAME_LENGTH];
	bool sex;
	uint8_t age;
	uint8_t weight;
	uint8_t HR_static;
	uint8_t HR_max;
	uint8_t BO_low;
	uint8_t BO_high;
	uint8_t BP_systolic_low;
	uint8_t BP_systolic_high;
	uint8_t BP_diastolic_low;
	uint8_t BP_diastolic_high;
} Bend_User_struct_t;

typedef struct TimeOut_Time_struct {
	uint8_t poweron_BackWF_Time;
    uint8_t backlight_Time;
    uint8_t idle_BackWF_Time;
} TimeOut_Time_struct_t;

uint32_t TimeOutTime_config_load(TimeOut_Time_struct_t *t);
uint32_t BendUser_config_load(Bend_User_struct_t *t);

#ifdef __cplusplus
}
#endif

#endif /* __BEND_CONFIG_H__ */