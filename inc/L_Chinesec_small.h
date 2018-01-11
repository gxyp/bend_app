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

const uint8_t Ajdjh_U24_Width[85]= {
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,};

const uint32_t Ajdjh_U24_Offset[86]= {
0x0000,0x004F,0x009E,0x00ED,0x013C,0x018B,0x01DA,0x0229,0x0278,0x02C7,0x0316,0x0365,0x03B4,0x0403,0x0452,0x04A1,
0x04F0,0x053F,0x058E,0x05DD,0x062C,0x067B,0x06CA,0x0719,0x0768,0x07B7,0x0806,0x0855,0x08A4,0x08F3,0x0942,0x0991,
0x09E0,0x0A2F,0x0A7E,0x0ACD,0x0B1C,0x0B6B,0x0BBA,0x0C09,0x0C58,0x0CA7,0x0CF6,0x0D45,0x0D94,0x0DE3,0x0E32,0x0E81,
0x0ED0,0x0F1F,0x0F6E,0x0FBD,0x100C,0x105B,0x10AA,0x10F9,0x1148,0x1197,0x11E6,0x1235,0x1284,0x12D3,0x1322,0x1371,
0x13C0,0x140F,0x145E,0x14AD,0x14FC,0x154B,0x159A,0x15E9,0x1638,0x1687,0x16D6,0x1725,0x1774,0x17C3,0x1812,0x1861,
0x18B0,0x18FF,0x194E,0x199D,0x19EC,0x1A3B,};

const uint16_t Ajdjh_U24_RangeOffset[82]= {
0,1,2,3,4,5,6,7,8,9,10,11,12,13,16,17,
18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,
34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,
50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,
66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,82,
83,84,};

const uint8_t  Ajdjh_U24_Data[6715]= {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xC0,0xFF,0xFF,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,
0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x1E,0x0,0xC4,0x3F,0x0,0xF8,0xF,0x80,0xFF,
0x0,0xE0,0x3F,0x0,0xC0,0x47,0x0,0x80,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,
0x0,0x0,0x4,0x0,0x0,0x8,0x30,0x0,0x10,0x70,0x0,0x60,0xF0,0x0,0xC0,0xFF,
0x0,0x0,0x3E,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xFF,0xFF,0xF,0x80,0x1,
0x0,0x80,0x3,0x0,0x0,0x7,0x0,0x0,0xE,0x0,0x0,0x1C,0x0,0x0,0xF8,0x7F,
0x0,0x30,0xE0,0x0,0x60,0xC0,0x0,0xC0,0x80,0x1,0xC0,0x1,0x3,0x80,0x1,0x6,
0x0,0x3,0xC,0x0,0x3,0x18,0x0,0x7,0x30,0x80,0x7,0x70,0xC0,0x7,0xFC,0x0,
0x7,0xF8,0x0,0x0,0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0xFF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xFF,0x7F,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xC0,0xFF,0xFF,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x0,0xFC,
0xFF,0x7,0x8,0x8,0x8,0x10,0x10,0x10,0x20,0x20,0x20,0x40,0x40,0x40,0x80,0x80,
0x80,0x0,0x1,0x1,0x1,0x2,0x2,0x2,0xFC,0xFF,0x7,0x8,0x8,0x8,0x10,0x10,
0x0,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,
0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x38,
0x0,0x0,0x70,0x0,0x0,0xE0,0x0,0x0,0xC0,0x1,0x0,0x80,0x3,0x0,0x0,0x7,
0x0,0xF8,0xFF,0x3,0xF0,0xFF,0x7,0x0,0x18,0xE,0x0,0x30,0x1C,0x0,0x60,0x38,
0x0,0xE0,0x30,0x0,0xC0,0x60,0x0,0x80,0xC1,0x0,0x80,0x83,0x1,0x0,0x3,0x3,
0x0,0x7,0x86,0x0,0x7,0xC,0x83,0x7,0x1C,0xC7,0x7,0xF8,0x7,0x7,0xE0,0xF,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xF8,0xFF,0x7,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xC0,0xFF,0xFF,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xFF,0x7F,0x0,0x0,0x1,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,
0x8,0x0,0x0,0x10,0x0,0x0,0x20,0x0,0x0,0x40,0x0,0xE0,0xFF,0xFF,0x1,0x0,
0x1,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0x0,0x20,
0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0xE0,0x1,0x0,0xC0,0x3,0x0,0x80,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xFF,0xFF,0x7,0x0,0x3,0x0,0x0,0x6,0x0,0x0,0xC,
0x0,0x0,0x18,0x0,0x0,0x30,0x0,0x0,0x70,0x0,0x0,0xFF,0x7F,0x0,0xC0,0xE0,
0x0,0x80,0xC1,0x1,0x0,0x83,0x3,0x0,0x6,0x3,0x0,0xE,0x6,0x0,0x1C,0xC,
0x0,0x18,0x18,0x0,0x30,0x30,0xC0,0xFF,0xFF,0xF,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x2,0x0,0x3,0x4,
0x0,0x6,0x8,0x0,0x4,0x13,0x0,0x8,0x27,0x0,0x18,0x46,0x0,0x30,0xFC,0x1F,
0x70,0xC,0x1,0xF0,0x1C,0x2,0x60,0x11,0x4,0xC0,0x2,0x8,0x0,0x4,0x10,0x0,
0x8,0x20,0x0,0x90,0xFF,0x1F,0x20,0x80,0x0,0x40,0x0,0x1,0x80,0x0,0x2,0x0,
0x1,0x4,0x0,0x2,0x8,0x0,0x4,0x10,0x0,0x8,0x20,0x0,0x10,0x40,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0x1,0x0,0x3,0x7,0x0,
0x3,0xC,0x0,0x6,0x18,0x0,0x4,0x0,0x0,0x8C,0xFF,0x3F,0x18,0x0,0x0,0x38,
0x0,0x0,0x70,0x30,0x8,0xB0,0x60,0x70,0x70,0xC1,0x60,0x40,0x82,0xC3,0x0,0x4,
0x86,0x1,0x8,0x8C,0x3,0x10,0x18,0x3,0x20,0x70,0x6,0x40,0x60,0xC,0x80,0x0,
0x18,0x0,0x1,0x18,0x0,0xF2,0xFF,0xF,0x4,0x0,0x0,0x8,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x1,0x0,0x0,0x3,0x2,0x0,0x3,
0x4,0x0,0x6,0x8,0x0,0x4,0x10,0x0,0xEC,0xFF,0x1F,0x18,0xF0,0x1,0x38,0xF0,
0x3,0x78,0x60,0x5,0xB8,0xE0,0x1A,0x20,0xC1,0x35,0x0,0xC2,0xE9,0x0,0x84,0x93,
0x1,0x88,0x23,0x7,0x90,0x47,0x1C,0xA0,0x87,0x78,0xC0,0xFB,0xDF,0x80,0x0,0x82,
0x0,0x1,0x4,0x0,0x2,0x8,0x0,0x4,0x10,0x0,0x8,0x20,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x81,0x3,0x0,0x3,0xE,0x0,0x3,0x1C,
0x0,0x6,0x0,0x0,0xC4,0xFF,0x1F,0xC,0x0,0x0,0x18,0x0,0x0,0x38,0xFC,0x3F,
0x70,0x0,0x0,0xB0,0x0,0x0,0x70,0x1,0x0,0x40,0xC2,0xFF,0x3,0x4,0x0,0x0,
0x8,0x0,0x0,0x10,0xFE,0xF,0x20,0x4,0x10,0x40,0x8,0x20,0x80,0x10,0x40,0x0,
0x21,0x80,0x0,0xC2,0xFF,0x1,0x84,0x0,0x2,0x8,0x1,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x0,0x38,0xE,0x0,
0x70,0x1C,0x0,0xE0,0x30,0x0,0xC0,0x60,0x0,0x80,0xC1,0x0,0x0,0x83,0x1,0x0,
0x6,0x3,0x0,0xC,0xE,0x0,0x1C,0x1C,0x0,0x18,0x30,0x0,0x30,0xE0,0x0,0x70,
0x80,0x1,0x60,0x0,0x7,0xE0,0x0,0x1C,0xE0,0x0,0x78,0xC0,0x1,0xE0,0xC1,0x1,
0x80,0xC7,0x1,0x0,0x2,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1C,0x7,0x0,0x38,0xC,0x0,0x38,
0x38,0x0,0x70,0x60,0x0,0x70,0xC0,0x1,0x60,0x0,0x3,0xE0,0x0,0xE,0xE0,0x10,
0x38,0xE0,0xE1,0xE0,0xE1,0xE1,0x80,0xC7,0xC1,0x0,0x6,0xC0,0x1,0x0,0x80,0x41,
0x0,0x80,0xC3,0x1,0x80,0x3,0x3,0x0,0x3,0xE,0x80,0x7,0x18,0x0,0xFF,0x7F,
0x0,0xFE,0xFF,0x1,0x3C,0x80,0x3,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x30,0x0,0x0,0xE0,0x0,0x0,0xC0,0x1,0x0,0x0,0x3,
0x0,0x0,0xE,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0xFC,0xFF,0x7F,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x60,0x18,0x0,0xE0,0x70,0x0,0xC0,0xE0,0x0,
0xC0,0x81,0x3,0xC0,0x1,0xE,0x80,0x1,0x1C,0x80,0x3,0x70,0x80,0x3,0xC0,0x81,
0x3,0x80,0x3,0x3,0x0,0x6,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7,0x2,0x0,0xC,0xC,0x0,0x38,0x1C,0x0,0x20,0x18,0x0,
0x0,0x18,0x0,0xFC,0xFF,0xF,0x0,0x1C,0x0,0x0,0x38,0x0,0x0,0x70,0x0,0x0,
0xE0,0x0,0x0,0xC0,0x1,0x0,0x80,0x3,0x0,0xFF,0xFF,0xF,0x0,0xE,0x0,0x0,
0x3E,0x0,0x0,0xEC,0x0,0x0,0x9C,0x3,0x0,0x1C,0xE,0x0,0x1E,0xF8,0x80,0x1F,
0xE0,0x87,0xF,0x0,0x7,0x6,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x80,0x80,0xFF,0x0,0x1,0x1,0x11,0x2,0x2,
0x22,0x4,0x4,0x44,0x8,0x8,0x88,0x10,0xF0,0x1F,0x21,0x0,0x0,0x42,0x0,0x0,
0x84,0x0,0xC,0x8,0x1,0x18,0x10,0x2,0xFF,0x27,0x4,0x60,0x4C,0x8,0xC0,0x98,
0x10,0x80,0x31,0x21,0x80,0x61,0x40,0x0,0xC3,0x80,0x0,0x83,0x1,0x81,0xE3,0xC3,
0x83,0x83,0x3,0x7,0x2,0x0,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xC,0x0,0x0,0x18,0x0,0xFF,0x30,0x0,0x0,0x60,
0x0,0x0,0xC0,0x0,0x0,0xF8,0x3F,0x0,0x8,0x63,0xF0,0x1F,0xC6,0x0,0x7,0x8C,
0x1,0x6,0x18,0x3,0xC,0x38,0x6,0xDC,0x31,0xC,0x18,0x63,0x18,0x30,0xC6,0x30,
0x30,0xDF,0x61,0xF0,0xBF,0xC1,0xE0,0xA1,0xC3,0x1,0x80,0xF3,0x1,0x80,0xC3,0x3,
0xC0,0x83,0x3,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x0,
0x0,0x4,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0xF0,0xFF,0x7F,0x0,0x40,0x0,0x0,
0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,0x8,0x0,0x0,
0x10,0x0,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1E,0x0,0xF0,0x7F,0x0,0xFF,0xF,0x0,0x7E,0x2,0x0,0x0,
0x4,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0x0,0x20,0x0,0x0,0x40,0x0,0xE0,0xFF,
0xFF,0x3,0x0,0x1,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,0x8,0x0,0x0,0x10,
0x0,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,
0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x40,0x4,0x0,0xE0,0x9,0x0,0xFC,0x11,0x0,0xFF,0x20,0x0,0x8C,0x41,
0x0,0x0,0x83,0x0,0x0,0x6,0x1,0x0,0xC,0x2,0x0,0x18,0x4,0xE0,0xFF,0xFF,
0x3,0x30,0x10,0x0,0x60,0x20,0x0,0xC0,0x40,0x0,0x80,0x81,0x0,0x80,0x3,0x1,
0x0,0x3,0x2,0x0,0x7,0x4,0x0,0x7,0x8,0x80,0x7,0x10,0x0,0x7,0x20,0x0,
0x4,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,
0x0,0xE0,0x1C,0x0,0xC6,0x70,0x0,0x86,0xC1,0x1,0xC,0x83,0x0,0xC,0x6,0x0,
0xFC,0xFF,0x3F,0x0,0xC,0x0,0x0,0x1C,0x0,0x0,0x18,0x0,0x0,0xF8,0x7F,0x0,
0x30,0xE0,0x0,0x30,0xC0,0x0,0x70,0xC7,0x1,0x70,0x8C,0x1,0x60,0xB0,0x1,0xF0,
0xE0,0x3,0xF0,0xC0,0x3,0xC0,0xF0,0x3F,0x80,0xFE,0xF0,0xF,0x7C,0x80,0xF,0x10,
0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xFE,0x3F,0x0,0x4,0x40,0x0,0x8,0x80,0x0,0x10,0x0,0x1,0x20,
0x0,0x2,0xC0,0xFF,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xC0,0xFF,
0xFF,0xF,0x70,0x0,0x0,0x60,0x0,0x0,0xC0,0x0,0x0,0x80,0xFF,0xF,0x0,0x0,
0x18,0x0,0x0,0x30,0x0,0x0,0x70,0x0,0x0,0xF0,0x0,0x0,0xFC,0x0,0x0,0xF8,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x0,0x0,0x30,
0x0,0x0,0x70,0x0,0x0,0xF0,0xFF,0x1,0x70,0xC0,0x1,0x70,0xC0,0x3,0x70,0x82,
0x3,0x70,0x8E,0x3,0x40,0xF8,0x3,0x0,0xE0,0x3,0x0,0xE0,0x3,0x0,0xE0,0x3,
0x0,0xF0,0x3,0x0,0xFE,0xFF,0x7,0xBE,0x0,0x8,0x18,0x1,0x10,0x0,0x2,0x20,
0x0,0x4,0x40,0x0,0x8,0x80,0x0,0xF0,0xFF,0x1,0x60,0x0,0x3,0xC0,0x0,0x6,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x70,0x0,0x0,0xF0,0x1,
0x0,0xF0,0x7,0x0,0xE0,0x1C,0x0,0xF0,0xF8,0x0,0xF0,0xE0,0x3,0xF0,0x0,0x3F,
0x78,0xFF,0xFB,0x78,0x0,0xC0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x7E,0xFC,0x0,
0x84,0x8,0x1,0x8,0x11,0x2,0x10,0x22,0x4,0x20,0x44,0x8,0x40,0x88,0x10,0x80,
0x1F,0x21,0x0,0x21,0x72,0x0,0x2,0x64,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xFF,0xFF,0x1,0xC2,0x8,0x2,0x84,0x11,0x4,0x8,0x23,0x8,0x10,
0x46,0x10,0x20,0x8C,0x20,0x40,0x1C,0x41,0x80,0x38,0x82,0x0,0x71,0x4,0x1,0x72,
0x8,0x2,0xF4,0xF0,0x4,0xF8,0xE0,0x9,0xD0,0x0,0x10,0x20,0x0,0x20,0x40,0x0,
0x40,0x80,0xFF,0xFF,0x0,0x1,0x0,0x1,0x2,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x80,0x0,0x4,0x0,0x41,
0x8,0x0,0x82,0x10,0x0,0x4,0x21,0x4,0x8,0x42,0xE,0x10,0x84,0x1F,0xFC,0xF9,
0x33,0x40,0xFC,0x63,0x80,0x38,0x44,0x0,0x51,0x88,0x0,0x82,0x90,0x1,0x4,0x21,
0x3,0x8,0xC2,0x6,0xD0,0x84,0xE,0xE0,0xB,0xD,0xF8,0x10,0x2,0x70,0x20,0x84,
0x0,0x40,0x80,0x3,0x80,0xC1,0x7,0x0,0xFF,0x7,0x0,0xF0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x80,0x0,0x8,
0x0,0x1,0x10,0x0,0x2,0x20,0x0,0x4,0x44,0x0,0x8,0x88,0x0,0x10,0x10,0x1,
0xFC,0x21,0x7E,0x40,0x40,0x4,0x80,0x80,0x8,0x0,0x1,0x11,0x0,0x2,0x22,0x0,
0x4,0x44,0x0,0x8,0x88,0x0,0x90,0x11,0x1,0xE0,0x23,0x2,0xF8,0x43,0x4,0xF0,
0x80,0x8,0x60,0x0,0x11,0x0,0xC0,0xFF,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x0,0x40,0xC0,0xFF,0x88,0x0,
0x4C,0x10,0x1,0x98,0x20,0x2,0x30,0x41,0x4,0x60,0x82,0x8,0xFC,0x3F,0x11,0xC0,
0x8,0x22,0x80,0x11,0x44,0x0,0x23,0x88,0x0,0x43,0x20,0x1,0x87,0x80,0x3,0x6,
0x7,0x7,0x0,0x8,0x0,0x0,0x10,0x0,0xC0,0xFF,0x1F,0x0,0x40,0x0,0x0,0x80,
0x0,0x0,0x0,0x1,0x80,0xFF,0xFF,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xE0,0x0,0x0,0xC0,0x1,0x0,0x80,
0x1,0x0,0x80,0x3,0x0,0x0,0x7,0x0,0x0,0x6,0x0,0xFC,0xFF,0xFF,0x0,0xC,
0x6,0x0,0x1C,0xC,0x0,0x18,0x1C,0x0,0x38,0x38,0x0,0xF8,0x30,0x0,0xC0,0x77,
0x0,0x0,0x7E,0x0,0x0,0xF0,0x1,0x0,0xF0,0x7,0x0,0x78,0x3C,0x0,0x7E,0xF0,
0x81,0x3F,0x80,0x3,0xE,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x8,0x0,0x6,0x13,0x0,0xC,0x26,
0x0,0x18,0x4C,0x0,0x18,0x98,0x0,0xFE,0xFB,0x3F,0x60,0x36,0x2,0xC0,0x6C,0x4,
0x80,0x78,0x8,0x80,0x31,0x10,0x0,0x33,0x20,0x0,0x66,0xFC,0x7,0xCC,0x80,0x0,
0xF8,0x1,0x1,0xC0,0x3,0x2,0x80,0x1F,0x4,0x0,0x3B,0x8,0x80,0x23,0x10,0x80,
0x3,0x20,0x80,0x3,0xFF,0xF,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xE0,0x0,0x0,0x80,0x1,0x80,0xFF,0xFF,0x3,
0x1,0x0,0x4,0x2,0x0,0x8,0x4,0x0,0x10,0x0,0x0,0x0,0x80,0xFF,0xF,0x0,
0x40,0x0,0x0,0x80,0x0,0x0,0x1C,0x1,0x0,0x18,0x2,0x0,0x30,0xFC,0x3,0x70,
0x8,0x0,0xE0,0x10,0x0,0xE0,0x23,0x0,0xC0,0x5C,0x0,0xC0,0xF1,0x0,0xC3,0xC1,
0xFF,0x3,0x1,0xFC,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xC,0x0,0x0,0x1C,0x0,0x0,0x18,0x0,0x0,0xF8,
0xFF,0x3,0x38,0x8,0x0,0x30,0x10,0x0,0x70,0x20,0x0,0x70,0x40,0x0,0x0,0xFF,
0x3F,0x0,0x2,0x1,0x0,0x4,0x2,0x0,0x8,0x4,0x0,0x10,0x8,0x0,0x20,0x10,
0x0,0xFC,0xFF,0x3F,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,
0x0,0x0,0x4,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xC0,0x0,0x0,0xC0,0x1,0x0,0x0,0x7,0x0,0x0,0x6,0x0,0xFC,0xFF,
0x1F,0x38,0x0,0x0,0x70,0x0,0x0,0xE0,0x0,0x0,0xC0,0x1,0x0,0x80,0x1,0x0,
0x0,0x3,0x0,0x0,0x6,0x0,0x0,0xC,0x0,0x0,0x18,0x0,0x0,0x30,0x0,0x0,
0x60,0x0,0x0,0xE0,0x0,0x0,0xC0,0x1,0x0,0x80,0x1,0x0,0x80,0x3,0x0,0x80,
0x3,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0x1,0x0,0x0,0x3,0x0,0xFE,0xFF,0x7,0xC,0x0,0x0,
0x18,0x0,0x0,0x30,0x0,0x0,0x60,0xFE,0xF,0xC0,0x0,0x1E,0x80,0xC1,0x1E,0x0,
0x83,0xF,0x0,0x6,0x6,0x0,0xFC,0xFF,0x3,0x18,0x10,0x6,0x38,0x20,0xE,0x30,
0x40,0x0,0x60,0x80,0x0,0xE0,0x0,0x1,0xC0,0x0,0x2,0xC0,0x81,0x7,0x0,0x0,
0xE,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x80,0x0,0x0,0x80,0x3,0x0,0x0,0x6,0x0,0xFE,0xFF,0x7,0xC,0x0,0x0,0x18,
0x82,0x0,0x30,0x4,0x1,0xE0,0xFF,0x3F,0xC0,0x10,0x4,0x80,0x21,0x8,0x0,0x43,
0x10,0x0,0x86,0x3F,0x0,0xC,0x0,0x0,0x18,0x0,0x0,0xB0,0xFF,0x7,0x60,0x8,
0x6,0x60,0x38,0xE,0xC0,0xE0,0xE,0xC0,0x1,0x7,0x80,0xC1,0xFF,0x0,0xFB,0xE3,
0xF,0xE0,0x0,0xE,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0xFF,0xFF,0x0,0x10,0x10,0x0,0x20,0x20,0x0,0x40,0x40,
0x0,0x80,0x80,0x0,0x0,0x1,0x1,0x0,0x2,0x2,0x0,0x4,0x4,0xE0,0xFF,0xFF,
0x3,0x30,0x10,0x0,0x60,0x20,0x0,0xC0,0x40,0x0,0x80,0x81,0x0,0x80,0x3,0x1,
0x0,0x7,0x2,0x0,0x7,0x4,0x0,0x7,0x8,0x80,0x7,0x10,0x0,0x7,0x20,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x0,0x7,0x0,0x0,0xC7,0xFF,0x1,0x7,0x10,0x0,0x7,0x20,0x0,0x37,0x40,0x0,
0x64,0x80,0x0,0xE0,0x0,0x1,0xC0,0x0,0x2,0xC0,0x20,0x4,0xC0,0x41,0xF8,0xC1,
0x83,0x10,0xC0,0x5,0x21,0x0,0x9,0x42,0x0,0x10,0x84,0x0,0x20,0x8,0x1,0x40,
0x10,0x2,0x80,0x20,0x4,0x0,0x41,0x8,0x0,0xF2,0xFF,0x7,0x4,0x0,0x0,0x8,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xE0,0x0,0x0,0xC0,0x1,0x0,0x0,0x7,0x0,0x0,0x1C,0x0,0x0,0x38,0x0,0x0,
0x3,0x0,0x0,0x6,0x0,0xE0,0xC,0x38,0xC0,0x19,0x70,0x80,0x31,0xC0,0x1,0x63,
0x0,0x3,0xC6,0x0,0xE,0x8E,0x1,0x38,0xC,0x3,0x70,0x18,0x6,0x0,0x38,0xC,
0x0,0x0,0x18,0x18,0x0,0x30,0x38,0x0,0xE0,0x7F,0x0,0xC0,0x7F,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,
0x4,0x0,0x2,0x8,0x0,0x4,0x13,0x0,0x8,0x27,0x0,0x56,0x46,0x0,0xEC,0xFC,
0x1F,0x48,0x1F,0x1,0x98,0x18,0x2,0x30,0x39,0x4,0x60,0x2,0x8,0x0,0x4,0x10,
0x0,0x8,0xFF,0x7,0x10,0x40,0x0,0x20,0x80,0x0,0x40,0x0,0x1,0x80,0x0,0x2,
0x0,0x1,0x4,0x0,0x2,0x8,0x0,0x4,0x10,0x0,0xC8,0xFF,0xF,0x10,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x18,0x0,
0x0,0x30,0x0,0x0,0xFE,0x7F,0x0,0x4,0x80,0x0,0x8,0x0,0x1,0xF0,0xFF,0x3,
0x20,0x0,0x4,0x40,0x0,0x8,0x80,0xFF,0x1F,0x0,0x1,0x20,0x0,0x2,0x40,0x0,
0x4,0x80,0x0,0xF8,0xFF,0x1,0x0,0x10,0x0,0x30,0x31,0x18,0x60,0xC2,0x70,0x60,
0x84,0xC5,0xC1,0x8,0x18,0xC7,0x71,0x38,0x6,0xE1,0x3F,0x0,0x0,0x1C,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xE0,0x0,0x0,0x80,0x1,0x0,
0x0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xF0,0xFF,0x7,0x60,0x0,0x8,0xC0,
0x0,0x10,0x80,0x1,0x20,0x0,0x3,0x40,0x0,0x6,0x80,0x0,0xC,0x0,0x1,0xF8,
0xFF,0x3,0x30,0x0,0x4,0x60,0x0,0x8,0xC0,0x0,0x0,0x80,0x1,0x0,0x80,0x1,
0x0,0x0,0x3,0x0,0x0,0x3,0x0,0x0,0x7,0x0,0x0,0x6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x30,0x0,0xF1,
0xFF,0x0,0xC2,0xF,0x0,0x4,0x93,0x1,0x3F,0x26,0x3,0x10,0x48,0x3,0x20,0xFE,
0x7F,0x40,0xC1,0x7,0x80,0xC3,0x1A,0xC0,0xC3,0xF4,0xC0,0xE3,0xC9,0x87,0xF5,0x11,
0xF,0xC8,0xFF,0x7,0x10,0x42,0x8,0x20,0x84,0x10,0x40,0xF8,0x3F,0x80,0x10,0x42,
0x0,0x21,0x84,0xC0,0x43,0x8,0x1,0x87,0xFF,0x3,0x6,0x1,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0x7F,
0x0,0x80,0x1,0x0,0x0,0x3,0x0,0x0,0x6,0x0,0x0,0xC,0x0,0x0,0x18,0x0,
0x0,0x30,0x0,0xE0,0xFF,0xFF,0x1,0xE0,0x2,0x0,0xC0,0x4,0x0,0x80,0x9,0x0,
0x80,0x13,0x0,0x0,0x23,0x0,0x0,0x47,0x0,0x0,0x87,0x20,0x0,0x7,0xC1,0x81,
0x7,0xC2,0xC1,0x7,0xFC,0x3,0x3,0xF8,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x0,0x40,0x80,
0x3F,0x80,0x0,0x41,0x0,0x1,0x82,0x0,0x2,0x4,0x1,0x4,0x8,0xF2,0x7F,0x10,
0x4,0x10,0x20,0x8,0x21,0xC0,0x1F,0x43,0x80,0x20,0x8E,0x0,0x41,0x18,0x1,0x82,
0x70,0x2,0x4,0x1,0x4,0x8,0x2,0x8,0xF0,0x7,0x10,0x20,0x8,0x20,0x40,0x10,
0x40,0x80,0x0,0x80,0x0,0x0,0xE0,0x1,0x0,0xC0,0x3,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0x7F,0x0,0x2,
0x80,0x0,0x4,0x0,0x1,0x8,0x0,0x2,0xF0,0xFF,0x7,0x20,0x0,0x8,0x40,0x0,
0x10,0x80,0x0,0x20,0x0,0xFF,0x7F,0x0,0x40,0x4,0x0,0x86,0x8,0x6,0x1C,0x11,
0xE,0x30,0x22,0xC,0xC0,0x44,0x1C,0x80,0x8B,0x18,0x0,0x10,0x21,0x0,0x20,0x2,
0x0,0x40,0x4,0x80,0xFF,0xFF,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,
0x0,0x0,0x2,0x0,0x0,0x4,0x0,0xFC,0xFF,0x1F,0x0,0xFC,0x3F,0x0,0xE8,0x0,
0x0,0x58,0x1,0x0,0xB0,0x6,0x0,0x30,0xD,0x0,0x70,0x32,0x0,0x60,0xE4,0x0,
0x60,0x88,0x1,0xF0,0x10,0xF,0xF0,0x20,0x3C,0xF0,0xFE,0xF7,0xC1,0x80,0x80,0x1,
0x0,0x1,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x4,0x1,0x0,
0x8,0xFE,0x1,0x10,0x4,0x0,0x20,0x8,0x0,0x40,0x10,0x0,0x80,0x20,0x0,0xF8,
0xFF,0xFF,0x1,0x80,0x0,0x0,0x8,0x41,0x0,0x30,0x82,0x1,0x70,0x84,0x3,0x70,
0x88,0x3,0x70,0x10,0x3,0x60,0x20,0x7,0x0,0x40,0x7,0x0,0x80,0x7,0x0,0xE0,
0x3,0x0,0xFF,0x3,0x0,0xFC,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xC0,0x0,0xC0,0x80,0x7,0x80,0x7,0x3C,0x0,0xE,0x20,0x0,0x8,
0x0,0x0,0x0,0x1F,0x0,0x0,0x20,0x8,0x1C,0xC0,0x38,0xF0,0x80,0x39,0xC0,0xFD,
0x3B,0x0,0xC0,0x3E,0x0,0x80,0x1D,0x0,0x2,0x2B,0x0,0xC,0xD3,0x0,0x18,0xA6,
0x3,0x30,0x46,0xE,0x30,0x8E,0x38,0x60,0xF,0xF1,0xE1,0xE,0x82,0xC1,0x9,0x4,
0x0,0x1,0xF,0x0,0x0,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xC0,0x1,0x2,0x80,0x67,0x84,0x3,0xDC,0x9,0x3,0x10,0x13,
0x3,0x0,0x22,0x6,0xC,0x40,0x0,0x3C,0x80,0x0,0xE0,0xF8,0x3F,0x80,0x11,0x40,
0x0,0x20,0x80,0x0,0x42,0x0,0x1,0x8C,0xFF,0x3,0x18,0x1,0x4,0x30,0x2,0x8,
0x30,0x4,0x10,0x60,0xF8,0x3F,0xC0,0x10,0x40,0xC0,0x21,0x80,0x80,0x41,0x0,0x1,
0x82,0x80,0x3,0x0,0x1,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xC,0x0,0x60,0x30,0xC,0xC0,0x61,0x18,0x0,0x3,0x30,0x0,0x4,0xF0,0xF,
0xF0,0x6F,0x0,0xA4,0x61,0x0,0x1C,0xC3,0x0,0xF0,0x86,0x7E,0xC0,0xFC,0xE0,0x0,
0x98,0xE1,0x0,0x30,0x43,0x0,0x62,0x86,0x0,0xCC,0xFC,0x1F,0x98,0x19,0x2,0x18,
0x31,0x4,0x30,0x63,0x8,0x60,0xC6,0x10,0xE0,0x8E,0x21,0xC0,0xCC,0x79,0x80,0x8D,
0xE3,0x0,0x0,0xC0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0xE0,0x4,0x0,0xC0,0x89,0xFF,0x83,0x13,0xFF,0xF,0x26,0xE,0x0,0x4E,
0x1C,0x0,0x98,0x38,0x0,0xF0,0xF7,0x7F,0x20,0xE0,0xE0,0x40,0xC0,0xC1,0x81,0x80,
0x8F,0x83,0x1,0x17,0x3,0x3F,0x66,0x6,0x46,0xCC,0xE,0x8C,0x98,0xD,0x18,0x31,
0x1E,0x30,0x62,0x1C,0x60,0xE4,0x78,0xC0,0xC8,0xF8,0xC1,0xD1,0x3D,0x8F,0xA1,0x3F,
0x3C,0x83,0x33,0x20,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0xFF,0xFF,0x0,0x0,0x8,0x0,0x0,0x10,0x0,0x20,0x20,
0x0,0xE0,0x40,0x0,0xC0,0x80,0x0,0xC0,0x1,0x1,0x80,0x1,0x2,0x80,0xFF,0xFF,
0x1,0x0,0xB,0x0,0x0,0x17,0x0,0x0,0x27,0x0,0x0,0x47,0x0,0x0,0x87,0x0,
0x0,0x7,0x1,0x80,0x7,0x2,0xC0,0x7,0x4,0xC0,0x3,0x8,0x0,0x3,0x1E,0x0,
0x0,0x3C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x40,0x0,0x0,0x80,0x0,0x80,0xFF,0xFF,0x3,0x0,0x1,0x0,0xC,0x2,0x4,
0x38,0x26,0x1C,0xC0,0xE6,0xC,0x0,0xFE,0x8,0x0,0xFE,0x0,0x0,0xC6,0x60,0x0,
0xCE,0xCE,0x3,0xC7,0x18,0xE,0xC4,0x7F,0x8,0x0,0xCF,0x0,0x0,0x90,0x0,0x0,
0x20,0x0,0xF0,0xFF,0xFF,0x1,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x0,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,
0x80,0x0,0x0,0xC,0x1,0x0,0x18,0x2,0x0,0x38,0x4,0x0,0x30,0x8,0x0,0xF0,
0xFF,0x1F,0x60,0x20,0x0,0x60,0x40,0x0,0xE0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,
0x2,0x0,0x0,0x4,0x0,0xE0,0xFF,0x3,0x0,0x10,0x0,0x0,0x20,0x0,0x0,0x40,
0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x0,0xFF,0xFF,0xF,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xFF,
0x3F,0x0,0x83,0x40,0x0,0x6,0x81,0x0,0xC,0x2,0x1,0x18,0x4,0x2,0x30,0x8,
0x4,0xE0,0xFF,0xF,0xC0,0x20,0x10,0x80,0x41,0x20,0x0,0x83,0x40,0x0,0x6,0x81,
0x0,0xC,0x2,0x1,0xF8,0xFF,0x3,0x30,0x8,0x4,0x60,0x10,0x8,0x60,0x20,0x10,
0xC0,0x40,0x20,0xC0,0x81,0x40,0xC0,0x1,0x81,0x80,0x3,0xC2,0x1,0x2,0x80,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xFF,0x7F,0x0,0x2,0x81,0x0,0x4,0x2,0x1,0x8,0x4,0x2,0xF0,0xFF,0x7,
0x20,0x10,0x8,0x40,0x20,0x10,0x80,0x40,0x20,0x0,0xFF,0x7F,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xE,0x0,0x0,0xC,0x0,0xF8,0xFF,0x3F,0x0,0x38,0x70,0x0,
0x30,0xE0,0x0,0x38,0xC0,0x0,0x3C,0x80,0x81,0x3F,0xF0,0x3,0x1E,0xE0,0x3,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xE0,
0xFF,0xFF,0x3,0x80,0x1,0x0,0x0,0x3,0x0,0x0,0x6,0x0,0x0,0xC,0x0,0xC0,
0xFF,0x7,0x80,0x0,0x8,0x0,0x1,0x10,0x0,0x2,0x20,0x0,0x4,0x40,0x0,0x8,
0x80,0x0,0xF0,0xFF,0x1,0x20,0x0,0x2,0x40,0x0,0x4,0x80,0x0,0x8,0x0,0x1,
0x10,0x0,0xFE,0x3F,0x0,0x4,0x40,0x0,0x8,0x80,0x0,0x10,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,
0xFF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xF8,0xFF,0x7F,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,0x0,0x30,0x82,
0x1,0x70,0x4,0x3,0x60,0x8,0xC,0xE0,0x10,0x38,0xE0,0x20,0xE0,0xE0,0x40,0xC0,
0xC1,0x80,0x0,0x1,0xE0,0x1,0x0,0x80,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xC0,0x0,0x0,0x80,0x1,
0x80,0xFF,0xFF,0x7,0x40,0x30,0x0,0xC0,0x77,0x0,0x10,0x38,0x4,0x20,0xDE,0xB,
0x40,0xC,0x12,0x80,0x0,0x20,0x0,0xFF,0x7F,0x0,0x80,0x0,0x0,0x0,0x2,0x0,
0xFC,0xFF,0x7,0x8,0x43,0x8,0x10,0xC3,0x11,0x20,0x7,0x23,0x40,0xFE,0x4F,0x80,
0xC,0x98,0x0,0x1,0x0,0x1,0x2,0x80,0x3,0x0,0x0,0x3,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x86,0xC0,0x0,
0xC,0xC1,0x1,0x38,0x82,0x1,0xE0,0x84,0x1,0x80,0x89,0x3,0x0,0x10,0x2,0x0,
0x20,0x0,0xE0,0xFF,0xFF,0x0,0xE0,0x3,0x0,0xE0,0x7,0x0,0xC0,0x1A,0x0,0xC0,
0x75,0x0,0xC0,0xC9,0x0,0xC0,0x91,0x7,0xC0,0x21,0x1E,0xC0,0x41,0xF8,0xE1,0x81,
0xC0,0x81,0x1,0x1,0x1,0x0,0x2,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x43,0x30,0x0,0x9E,0x60,0x0,0x30,
0x61,0x0,0x0,0x42,0x0,0x0,0x4,0x0,0xFC,0xFF,0x1F,0x0,0x16,0x0,0x0,0x2E,
0x7,0x0,0x4E,0x3C,0x0,0x8F,0xE0,0x81,0x7,0x81,0x3,0x6,0x0,0x2,0x0,0xC,
0x0,0x0,0x18,0x0,0xFC,0xFF,0xFF,0x0,0xF0,0x0,0x0,0x70,0x3,0x0,0x70,0xC,
0x0,0x78,0x70,0x0,0x7F,0xC0,0xF,0x1E,0x0,0x1E,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x3F,0xC0,0xFF,0x7F,0x0,0xFF,0x1,
0x0,0x80,0x3,0x0,0x80,0xE3,0x0,0x80,0xE1,0x1,0xC0,0xF1,0x0,0xC0,0xFF,0x0,
0x0,0x61,0x4,0x0,0x70,0x1C,0x0,0x70,0x70,0x0,0xFE,0xFF,0x3,0xFC,0xFF,0xF,
0x0,0x8,0x8,0x80,0x10,0x2,0x80,0x23,0xE,0x80,0x43,0x78,0x80,0x83,0xC0,0x81,
0x3,0x1,0x3,0x82,0x3,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xC0,0x1,0x0,0x80,0x3,0x0,0x0,0xE3,0xFF,0x0,0x7,0x86,0x1,
0xC6,0x8C,0x3,0xC6,0x19,0x7,0x8C,0x31,0x6,0xFC,0x63,0xC,0x18,0xC3,0xFC,0x0,
0x83,0x81,0x1,0x3,0x8F,0x1,0x47,0x1F,0x83,0x7F,0x36,0x6,0xFE,0x4C,0xE,0x0,
0x98,0xD,0x0,0x18,0x1B,0x80,0x37,0x1C,0xF0,0x3F,0x38,0xE0,0x71,0xFC,0x0,0x70,
0x9E,0x7,0x70,0x1F,0x1E,0x40,0xC,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xC0,0x1,0x1,0x80,0x1,0x2,0x0,0x3,0x4,0x0,0x3,0x8,0x0,0x46,
0xFF,0x3,0xC6,0x21,0x0,0x8E,0x41,0x0,0xFC,0x81,0x0,0xF8,0x3,0x1,0x0,0xE3,
0x7F,0x0,0x3,0x4,0x0,0x6,0x8,0x0,0x77,0x10,0x0,0xFE,0xFF,0xF,0xC,0x40,
0x18,0x0,0x80,0x30,0x0,0xE,0x61,0xF0,0x1F,0xF2,0xE0,0x7,0xE4,0x80,0x0,0x8,
0x0,0x0,0x10,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,
0x0,0x80,0x81,0x13,0x0,0x3,0x73,0x0,0x7,0xC6,0x0,0x6,0x8C,0x1,0xC6,0x18,
0xC,0xCC,0xF1,0x1F,0x8C,0xFF,0xF,0xFC,0xFB,0x0,0xF0,0x83,0x1,0x1,0x3,0xE3,
0x3,0x3,0xFF,0x7,0x86,0x7F,0x0,0x46,0x33,0x2,0xFE,0x60,0xE,0x7C,0xC0,0xE,
0x0,0x0,0xF,0x0,0x8,0xE,0xF0,0x1F,0x1E,0xC1,0x1F,0x7F,0x86,0x81,0xC7,0xF,
0x80,0x7,0x1F,0x0,0x2,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x80,0x1,0x3,0x80,0x3,0x6,0x0,0x3,0x6,0x0,0xC3,0xFF,0x3,0x26,0xC,0x0,
0xC6,0x18,0x0,0xCE,0x31,0x0,0xFC,0xFD,0x1,0x98,0x61,0x2,0x80,0x63,0x4,0x0,
0xE3,0x8,0x0,0xC3,0x11,0x0,0xFF,0xFF,0x7,0x7E,0x40,0x0,0x4,0x80,0x8,0x0,
0x70,0x19,0x0,0x67,0x62,0xF0,0x6F,0xC4,0xE1,0xE3,0x8,0x43,0xE0,0x10,0x2,0x80,
0x38,0x0,0x0,0x70,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,
0x1,0x0,0x0,0x3,0x0,0x0,0xC7,0xFF,0x1,0x6,0xC0,0x1,0x4C,0xC0,0x1,0x8C,
0xC3,0x1,0xC,0xC3,0x7,0xFC,0xC7,0x1D,0xF8,0xC7,0xF1,0x10,0xE6,0x81,0x3,0xC6,
0x0,0x2,0xE,0x0,0x0,0xE,0x0,0x0,0xFF,0xFC,0xF,0xFC,0x81,0x0,0x18,0x0,
0x1,0x0,0x0,0x2,0x0,0xE,0x4,0xE0,0x1F,0x8,0x80,0x7,0x10,0x0,0x0,0xFF,
0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xC0,0x0,
0x6,0x80,0x1,0xC,0x0,0x3,0x18,0x0,0x3,0x0,0x0,0x86,0xFF,0xF,0x46,0x20,
0x0,0x86,0xE1,0x0,0xFC,0xE3,0xC,0xF8,0xC3,0x18,0x0,0xC3,0x60,0x0,0xC3,0xFF,
0x1,0x87,0x3F,0x7,0x7,0x4C,0x0,0xFF,0x98,0x0,0xFC,0x31,0x1,0x8,0x60,0x2,
0x0,0xC8,0x4,0x0,0x8F,0x9,0xE0,0x9F,0x13,0xC1,0x83,0x23,0x7,0xC0,0xC3,0xF,
0x0,0x83,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x1,0x2,
0x80,0x3,0x6,0x0,0x3,0xC,0x0,0xC6,0xFF,0x3,0xE6,0x3,0x4,0xCC,0x7,0x8,
0xCC,0xD,0x10,0xFC,0xFD,0x3F,0xF0,0x19,0x0,0x0,0x31,0x0,0x0,0xE3,0xFF,0x3,
0xC3,0x48,0x4,0xF3,0x91,0x8,0xFE,0x23,0x11,0x8C,0x45,0x22,0x0,0xFB,0x7F,0x0,
0x12,0x89,0xC0,0x27,0x12,0xE1,0x43,0x24,0xC2,0x80,0x48,0x4,0x0,0x1,0xF,0x0,
0x2,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,
0xFF,0x7F,0x0,0x21,0x84,0x0,0x42,0x8,0x1,0x84,0x10,0x2,0xF8,0xFF,0x7,0x0,
0x8,0x0,0xF0,0xFF,0x3F,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0xFE,0x3F,0x0,0x4,
0x40,0x0,0xF8,0xFF,0x0,0x10,0x0,0x1,0x20,0x0,0x2,0xC0,0xFF,0x7,0x80,0x0,
0x8,0x0,0xFF,0x1F,0x0,0x2,0x20,0x0,0x4,0x40,0x80,0xFF,0xFF,0xF,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x20,0x0,0x2,
0x78,0x0,0x4,0xFF,0x80,0x7F,0x1E,0x0,0x10,0x20,0x0,0x20,0x40,0x0,0x40,0x80,
0x1C,0xF0,0xE7,0x3F,0x0,0xC1,0x7,0x0,0x2,0x4,0xC0,0x3F,0x8,0x0,0xC,0xD0,
0x7,0x58,0xFE,0xF,0xF8,0xFC,0x0,0x70,0x83,0x0,0xB0,0xE,0x1,0x30,0x1,0x2,
0x70,0x2,0x84,0x40,0x4,0x88,0x3,0x8,0xF0,0x3,0x10,0xE0,0x7,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x8,0x2,
0x0,0x10,0x4,0x80,0xFF,0xFF,0x3,0x40,0x10,0x0,0x0,0x0,0x0,0x10,0x0,0x0,
0x20,0xC4,0x1,0x40,0x88,0x1,0x80,0x90,0xFF,0x0,0xA1,0x13,0x0,0xC2,0x73,0x0,
0x84,0xC2,0x0,0x0,0x1,0x1,0x0,0x0,0x0,0xE0,0xFF,0xF,0x40,0x88,0x10,0x80,
0x10,0x21,0x0,0x21,0x42,0x0,0x42,0x84,0x0,0x84,0x8,0x1,0xFF,0xFF,0x1F,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x80,0x61,0x40,0x0,
0xC3,0x84,0x0,0x8E,0x9,0x1,0x38,0x11,0x2,0x10,0x22,0x4,0x0,0x44,0x8,0x0,
0x88,0x10,0x0,0x10,0x21,0xF0,0x20,0x42,0x0,0x41,0x84,0x0,0x82,0x8,0x1,0x84,
0x11,0x2,0x8,0x23,0x4,0xD0,0x46,0x8,0xE0,0x8D,0x10,0xC0,0x19,0x21,0x80,0x39,
0x42,0x80,0x31,0x84,0x0,0x72,0x8,0x1,0x70,0x10,0x2,0x0,0x0,0x4,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x1,0x0,0x0,0x83,
0x3F,0x0,0xE,0x43,0x0,0x18,0x86,0x0,0x0,0xC,0x1,0x0,0x1C,0x32,0x3C,0x1C,
0x7C,0x78,0x38,0xF8,0x80,0x0,0x0,0x0,0x1,0x0,0x0,0xE2,0xFF,0x3,0x4,0x0,
0x3,0x8,0x6,0x7,0x10,0x1C,0x6,0xA0,0x71,0x6,0xC0,0xC3,0xF,0x80,0x3,0xF,
0x0,0x3,0x3F,0x0,0x83,0xE7,0xF,0xE0,0x7,0xF,0x80,0x3,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x0,0x0,0x3,0xC0,0x1F,0x7,
0x80,0x20,0x6,0x0,0x41,0xFC,0xF,0x82,0x4,0x1C,0x4,0x9,0x38,0x8,0xA,0x70,
0xF0,0xFF,0x67,0x0,0xA2,0xC8,0x0,0x4,0x91,0x81,0x8,0x22,0x3,0xF1,0x44,0x6,
0x22,0xF8,0xC,0x44,0x10,0x19,0x88,0x20,0x3C,0x10,0x41,0x40,0x20,0x9E,0x80,0xE1,
0x3F,0x1,0xC3,0x7,0xFE,0x87,0x0,0xFC,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x1F,0xFF,0x1,
0x21,0x2,0x0,0x42,0x4,0x0,0x84,0x8,0x0,0x8,0x11,0x0,0x10,0x22,0x0,0xE0,
0xC7,0x3F,0x0,0x82,0x40,0x0,0x4,0x81,0x80,0x8,0x2,0x1,0xF1,0x4,0x2,0x22,
0x8,0x4,0x44,0xF0,0xF,0x88,0x20,0x0,0x10,0x59,0x0,0xA0,0x9F,0x0,0xF0,0x3F,
0x1,0xC0,0x3,0x2,0x0,0x0,0xFC,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x0,0x0,0x3,0x6,0x0,0x6,0xC,0x0,0x6,
0x1C,0x80,0xFF,0x19,0x0,0xC,0xF0,0x3F,0x18,0x30,0x30,0xB0,0x70,0x63,0x30,0x61,
0xE6,0x60,0x82,0xC,0xE0,0x4,0x18,0xC0,0x7F,0x70,0x0,0x10,0xE0,0x0,0x20,0xC0,
0x1,0x40,0xC7,0x2,0xFC,0x8F,0xD,0xF8,0x83,0x1B,0x30,0x2,0x63,0x0,0x4,0xC3,
0x1,0x88,0x7,0x1F,0x90,0x7,0xC,0x20,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x0,0x0,0xC0,0x1,0x0,0x80,0xC3,0xFF,0x1,0x6,0x0,
0x0,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFE,0xFF,0x0,0x80,0x1,
0xF0,0x80,0x1,0x0,0x1,0x73,0x0,0x2,0xC3,0x0,0x4,0x86,0x3,0x8,0x6,0x6,
0x10,0xFF,0x1F,0x20,0xFC,0x7F,0x40,0x8,0x20,0x80,0x0,0x0,0x80,0x7,0x0,0xC0,
0xFD,0x80,0x87,0xE3,0xFF,0x7,0x2,0xFC,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0x7F,0x0,0x2,0x81,0x0,
0x4,0x2,0x1,0x8,0x4,0x2,0x10,0x8,0x4,0xE0,0xFF,0xF,0x40,0x20,0x10,0x80,
0x40,0x20,0x0,0x81,0x40,0x0,0xFE,0xFF,0x0,0x0,0x2,0x0,0x0,0x4,0x0,0x0,
0x8,0x0,0xE0,0xFF,0x1F,0x0,0x20,0x0,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,
0x1,0x80,0xFF,0xFF,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1F,0x80,0xFF,0x7F,0x0,0xFE,0x1,0x0,0x0,
0x2,0x0,0xFE,0xFF,0x1F,0x0,0x8,0x0,0x0,0x10,0x0,0xC0,0xFF,0x1F,0x80,0x40,
0x20,0x0,0x81,0x40,0x0,0xFE,0xFF,0x0,0x4,0x2,0x1,0x8,0x4,0x2,0xF0,0xFF,
0x7,0x0,0x10,0x0,0xC0,0xFF,0x1F,0x0,0x40,0x0,0x0,0x80,0x0,0x0,0x0,0x1,
0x0,0xFF,0xFF,0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x80,0x1,0x0,0x0,0x3,0x0,0x0,0xCE,0xFF,0x0,0x18,0x0,0x1,0x2,0x0,
0x2,0x4,0x0,0x4,0x8,0x0,0x8,0x10,0xFF,0x10,0x20,0x2,0x21,0x40,0x4,0x42,
0x80,0x8,0x84,0x0,0xF1,0xF,0x1,0x22,0x10,0x2,0x44,0x20,0x4,0x88,0x40,0x8,
0x10,0x81,0x10,0x20,0xFE,0x21,0x40,0x0,0x40,0x80,0x0,0x80,0x0,0x1,0xE0,0x1,
0x2,0x80,0x3,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0xFF,0x0,0x0,0x1,0x0,0xFF,0xFF,0xF,
0x2,0x4,0x10,0xE4,0xCB,0x27,0x0,0x10,0x0,0x80,0x2F,0x1F,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xFE,0xFF,0x3,0xC,0x0,0x0,0xD8,0xFF,0x3,0x30,0x0,0x0,0x60,
0x0,0x0,0xC0,0xFF,0x7F,0x80,0x89,0x21,0x80,0x11,0x76,0x0,0x23,0x3D,0x0,0xC3,
0xE3,0xF,0xC6,0x1,0x1F,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x2,0xE,0x0,0x4,0x1C,0x80,0x8,0x3C,0x0,0xF1,0xD8,0x0,0x22,
0xB0,0x1,0x44,0x30,0x6,0x88,0x70,0x1F,0xFC,0x7F,0xF6,0x0,0x73,0x98,0x20,0x26,
0x0,0x40,0x46,0x0,0x80,0x8C,0xFC,0x7,0x39,0x1,0xE,0xDA,0x2,0xC,0x34,0xC7,
0xC,0x38,0x8A,0x1F,0x10,0x10,0x1E,0x20,0x30,0x38,0xC0,0x7F,0xE0,0x0,0x80,0x80,
0x1,0x0,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

const RangeData Ajdjh_U24_RangeData[82]={
{19968,19968},{19971,19971},{19975,19975},{19977,19977},{20013,20013},{20061,20061},{20108,20108},{20110,20110},{20116,20116},{20214,20214},
{20301,20301},{20307,20307},{20449,20449},{20843,20845},{20851,20851},{21035,21035},{21160,21160},{21313,21313},{21315,21315},{21319,21319},
{21457,21457},{21495,21495},{21517,21517},{21629,21629},{22235,22235},{22320,22320},{22336,22336},{22411,22411},{22899,22899},{22995,22995},
{23450,23450},{24180,24180},{24191,24191},{24207,24207},{24230,24230},{24320,24320},{24449,24449},{24515,24515},{24615,24615},{24687,24687},
{25143,25143},{25773,25773},{26080,26080},{26102,26102},{26174,26174},{26412,26412},{27493,27493},{27891,27891},{28040,28040},{28216,28216},
{29256,29256},{29273,29273},{29575,29575},{29983,29983},{29992,29992},{30007,30007},{30334,30334},{31034,31034},{31163,31163},{31859,31859},
{31867,31867},{31995,31995},{32423,32423},{32428,32428},{32447,32447},{32451,32451},{32463,32463},{32479,32479},{32534,32534},{32622,32622},
{32791,32791},{34013,34013},{35757,35757},{35774,35774},{36305,36305},{36317,36317},{36719,36719},{36816,36816},{37324,37325},{38388,38388},
{38663,38663},{40836,40836},};

const RangeDetails Ajdjh_U24_RangeInfo={
82,
Ajdjh_U24_RangeData
};

const sCustFontData Chinesec_small = {
25, 25,
19, 4,
0, 79, 500,
(uint8_t*)Ajdjh_U24_Width, (uint8_t*)Ajdjh_U24_Width, (uint32_t*)Ajdjh_U24_Offset, (uint8_t*)Ajdjh_U24_Data, (uint16_t*)Ajdjh_U24_RangeOffset,
&Ajdjh_U24_RangeInfo,
0X00000000,
};
