/*
 * Generated by MTK Easy PinMux Tool Version 2.3.0 for 2523. Copyright MediaTek Inc. (C) 2015.
 * 2017-09-04 13:27:00:0049
 * Do Not Modify the File.
 */

/*****************************************************************************
*
* Filename:
* ---------
*    ***.*
*
* Project:
* --------
*
* Description:
* ------------
*
* Author:
* -------
*
*============================================================================
****************************************************************************/

#ifndef  _EPT_KEYPAD_DRV_H
#define  _EPT_KEYPAD_DRV_H


#define  __DOUBLE_KEYPAD__

#if defined(__SINGLE_KEYPAD__)
#define KEYPAD_MAPPING \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE 
#elif defined(__DOUBLE_KEYPAD__)
#define KEYPAD_MAPPING \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_ENTER, \
DEVICE_KEY_BACK, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_UP, \
DEVICE_KEY_DOWN, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE, \
DEVICE_KEY_NONE 
#endif

#define POWERKEY_POSITION DEVICE_KEY_POWER

#define DRV_KBD_COL_ROW_SEL 0x142

#define EPT_KEYPAD_DEBOUNCE_TIME 16

#define EPT_KEYPAD_LONGPRESS_TIME 2000

#define EPT_KEYPAD_REPEAT_TIME 1000


#endif /* _EPT_KEYPAD_DRV_H */