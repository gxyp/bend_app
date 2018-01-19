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

#include "stdint.h"

typedef struct TimeOut_Time_struct {
	uint8_t poweron_BackWF_Time;
    uint8_t backlight_Time;
    uint8_t idle_BackWF_Time;
} TimeOut_Time_struct_t;

uint32_t TimeOutTime_config_load(TimeOut_Time_struct_t *t);

#ifdef __cplusplus
}
#endif

#endif /* __BEND_CONFIG_H__ */