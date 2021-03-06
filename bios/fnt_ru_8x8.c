/*
 * fnt_ru_8x8.c - a font in standard format
 *
 * Copyright (C) 2010-2017 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "config.h"
#include "portab.h"
#include "fonthdr.h"

extern const UWORD off_8x8_table[];

static const UBYTE dat_table[] =
{
    0x00, 0x18, 0x3c, 0x18, 0x18, 0x3c, 0xff, 0xe7, 0x01, 0x7e, 0x18, 0x18, 0xf0, 0xf0, 0x05, 0xa0,
    0x7c, 0x06, 0x7c, 0x7c, 0xc6, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x00, 0x78, 0x07, 0xf0, 0x11, 0x04,
    0x00, 0x18, 0x66, 0x00, 0x18, 0x00, 0x38, 0x18, 0x0c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
    0x7c, 0x18, 0x3c, 0x3c, 0x1c, 0x7e, 0x1c, 0x7e, 0x3c, 0x3c, 0x00, 0x00, 0x06, 0x00, 0x60, 0x3c,
    0x7c, 0x18, 0xfc, 0x3c, 0xf8, 0xfe, 0xfe, 0x3c, 0x66, 0x3c, 0x1e, 0xe6, 0xf0, 0xc6, 0x66, 0x3c,
    0xfc, 0x3c, 0xfc, 0x3c, 0x7e, 0x66, 0x66, 0xc6, 0xc6, 0x66, 0xfe, 0x1e, 0xc0, 0x78, 0x10, 0x00,
    0x60, 0x00, 0xe0, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0xe0, 0x18, 0x06, 0xe0, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x70, 0x76, 0x00,
    0x78, 0x00, 0x1c, 0x7e, 0xcc, 0xe0, 0x30, 0x00, 0x7e, 0xcc, 0xe0, 0xcc, 0x7c, 0xe0, 0xc6, 0x30,
    0x1c, 0x00, 0x3e, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0xc3, 0xcc, 0x18, 0x38, 0xcc, 0xf8, 0x0e,
    0x1c, 0x38, 0x00, 0x00, 0x00, 0xfc, 0x3c, 0x38, 0x30, 0x00, 0x00, 0xc3, 0xc3, 0x18, 0x00, 0x00,
    0x22, 0x00, 0xdb, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36, 0x36, 0x00, 0x36, 0x7e, 0x7e, 0xf1,
    0x18, 0x7e, 0xfc, 0x7e, 0x3c, 0xfe, 0xdb, 0x3c, 0x66, 0x5c, 0xe6, 0x1f, 0xc6, 0x66, 0x3c, 0x7e,
    0xfc, 0x3c, 0x7e, 0x66, 0x18, 0xc6, 0x66, 0x66, 0xd6, 0xd6, 0xe0, 0xc3, 0x60, 0x3c, 0xce, 0x3f,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3c, 0x24, 0x1c, 0x38, 0x99, 0xff, 0xc3, 0x03, 0xc3, 0x3c, 0x1c, 0xc0, 0xc0, 0x05, 0xa0,
    0xc6, 0x06, 0x06, 0x06, 0xc6, 0xc0, 0xc0, 0x06, 0xc6, 0xc6, 0x00, 0x60, 0x0f, 0xf8, 0x0b, 0x28,
    0x00, 0x3c, 0x66, 0x6c, 0x3e, 0xc6, 0x6c, 0x18, 0x18, 0x18, 0x66, 0x18, 0x00, 0x00, 0x00, 0x0c,
    0xc6, 0x38, 0x66, 0x66, 0x3c, 0x60, 0x30, 0x66, 0x66, 0x66, 0x18, 0x18, 0x0c, 0x00, 0x30, 0x66,
    0xce, 0x3c, 0x66, 0x66, 0x6c, 0x62, 0x62, 0x66, 0x66, 0x18, 0x0c, 0x66, 0x60, 0xee, 0x76, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x5a, 0x66, 0x66, 0xc6, 0xc6, 0x66, 0xc6, 0x18, 0x60, 0x18, 0x38, 0x00,
    0x60, 0x00, 0x60, 0x00, 0x0c, 0x00, 0x36, 0x00, 0x60, 0x00, 0x00, 0x60, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0xdc, 0x18,
    0xcc, 0xcc, 0x00, 0xc3, 0x00, 0x00, 0x30, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x38, 0x30,
    0x00, 0x00, 0x6c, 0xcc, 0xcc, 0xe0, 0xcc, 0xe0, 0xcc, 0x18, 0x00, 0x18, 0x6c, 0xcc, 0xcc, 0x1b,
    0x00, 0x00, 0x1c, 0x1c, 0xf8, 0x00, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0x18, 0x33, 0xcc,
    0x88, 0x00, 0x77, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36, 0x36, 0x00, 0x36, 0xc3, 0xc3, 0x5b,
    0x3c, 0x60, 0x66, 0x62, 0x6c, 0x62, 0xdb, 0x66, 0x66, 0x66, 0x66, 0x3e, 0xee, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x5a, 0x66, 0x7e, 0xc6, 0x66, 0x66, 0xd6, 0xd6, 0x60, 0xc3, 0x60, 0x66, 0xdb, 0x66,
    0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x66, 0x24, 0xf6, 0x6f, 0xc3, 0xfe, 0x99, 0x06, 0xd3, 0x3c, 0x16, 0xfe, 0xdf, 0x05, 0xa0,
    0xc6, 0x06, 0x06, 0x06, 0xc6, 0xc0, 0xc0, 0x06, 0xc6, 0xc6, 0x3c, 0x78, 0x1f, 0xec, 0x0d, 0xd8,
    0x00, 0x3c, 0x66, 0xfe, 0x60, 0xcc, 0x38, 0x30, 0x30, 0x0c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x18,
    0xce, 0x18, 0x06, 0x06, 0x6c, 0x7c, 0x60, 0x06, 0x66, 0x66, 0x18, 0x18, 0x18, 0x7e, 0x18, 0x06,
    0xde, 0x66, 0x66, 0x60, 0x66, 0x68, 0x68, 0x60, 0x66, 0x18, 0x0c, 0x6c, 0x60, 0xfe, 0x7e, 0x66,
    0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x66, 0xc6, 0x6c, 0x66, 0x8c, 0x18, 0x30, 0x18, 0x6c, 0x00,
    0x30, 0x78, 0x60, 0x3c, 0x0c, 0x3c, 0x30, 0x76, 0x6c, 0x38, 0x06, 0x66, 0x18, 0xcc, 0x7c, 0x3c,
    0xdc, 0x76, 0xdc, 0x3e, 0x7c, 0xcc, 0x66, 0xc6, 0xc6, 0x66, 0x7e, 0x18, 0x18, 0x18, 0x00, 0x18,
    0xc0, 0x00, 0x78, 0x3c, 0x78, 0x78, 0x78, 0x78, 0x3c, 0x78, 0x78, 0x70, 0x38, 0x70, 0x6c, 0x00,
    0xfc, 0x7f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xcc, 0x7e, 0x64, 0x78, 0xcc, 0x18,
    0x78, 0x70, 0x00, 0x00, 0x00, 0xcc, 0x6c, 0x6c, 0x30, 0x00, 0x00, 0xcc, 0xcc, 0x00, 0x66, 0x66,
    0x22, 0x3e, 0xdb, 0x18, 0x18, 0xf8, 0x36, 0x00, 0xf8, 0xf6, 0x36, 0xfe, 0xf6, 0xbd, 0xbd, 0x5f,
    0x66, 0x60, 0x66, 0x60, 0x6c, 0x68, 0x7e, 0x06, 0x6e, 0x6e, 0x6c, 0x66, 0xfe, 0x66, 0x66, 0x66,
    0x66, 0x60, 0x18, 0x66, 0xdb, 0x6c, 0x66, 0x66, 0xd6, 0xd6, 0x60, 0xc3, 0x60, 0x06, 0xdb, 0x66,
    0x78, 0x60, 0x7c, 0x3e, 0x1e, 0x3c, 0xdb, 0x7c, 0xcc, 0xcc, 0x66, 0x1e, 0xcc, 0x66, 0x3c, 0x7e,
    0x7c, 0x3c, 0x7e, 0x66, 0x7e, 0xc6, 0x66, 0x66, 0xd6, 0xd6, 0xe0, 0xc6, 0x60, 0x7c, 0xce, 0x3e,
    0x00, 0xc3, 0xe7, 0x83, 0xc1, 0xe7, 0xfc, 0x3c, 0x8c, 0xd3, 0x3c, 0x10, 0xd8, 0xdb, 0x0d, 0xb0,
    0x00, 0x00, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x00, 0x7c, 0x7c, 0x06, 0x60, 0x18, 0x04, 0x06, 0x28,
    0x00, 0x18, 0x00, 0x6c, 0x3c, 0x18, 0x76, 0x00, 0x30, 0x0c, 0xff, 0x7e, 0x00, 0x7e, 0x00, 0x30,
    0xde, 0x18, 0x1c, 0x1c, 0xcc, 0x06, 0x7c, 0x0c, 0x3c, 0x3e, 0x00, 0x00, 0x30, 0x00, 0x0c, 0x0c,
    0xde, 0x66, 0x7c, 0x60, 0x66, 0x78, 0x78, 0x60, 0x7e, 0x18, 0x0c, 0x78, 0x60, 0xd6, 0x7e, 0x66,
    0x7c, 0x66, 0x7c, 0x3c, 0x18, 0x66, 0x66, 0xd6, 0x38, 0x3c, 0x18, 0x18, 0x18, 0x18, 0xc6, 0x00,
    0x00, 0x0c, 0x7c, 0x66, 0x7c, 0x66, 0x78, 0xcc, 0x76, 0x18, 0x06, 0x6c, 0x18, 0xfe, 0x66, 0x66,
    0x66, 0xcc, 0x76, 0x60, 0x30, 0xcc, 0x66, 0xd6, 0x6c, 0x66, 0x4c, 0x70, 0x18, 0x0e, 0x00, 0x34,
    0xcc, 0xcc, 0xcc, 0x06, 0x0c, 0x0c, 0x0c, 0xc0, 0x66, 0xcc, 0xcc, 0x30, 0x18, 0x30, 0xc6, 0x78,
    0x66, 0x0c, 0xfe, 0x78, 0x78, 0x78, 0xcc, 0xcc, 0xcc, 0x66, 0xcc, 0xc0, 0xf0, 0xfc, 0xfa, 0x3c,
    0x0c, 0x30, 0x78, 0xcc, 0xf8, 0xec, 0x3e, 0x38, 0x60, 0xfc, 0xfc, 0xde, 0xdb, 0x18, 0xcc, 0x33,
    0x88, 0x66, 0xee, 0x18, 0x18, 0x18, 0x36, 0x00, 0x18, 0x06, 0x36, 0x06, 0x06, 0xb1, 0xa5, 0x55,
    0x66, 0x7c, 0x7c, 0x60, 0x6c, 0x78, 0x7e, 0x1c, 0x7e, 0x7e, 0x78, 0x66, 0xd6, 0x7e, 0x66, 0x66,
    0x7c, 0x60, 0x18, 0x3e, 0xdb, 0x38, 0x66, 0x7e, 0xda, 0xda, 0x7c, 0xfb, 0x7c, 0x1e, 0xfb, 0x3e,
    0x0c, 0x7c, 0x66, 0x30, 0x36, 0x66, 0xdb, 0x06, 0xcc, 0xcc, 0x6c, 0x36, 0xfe, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x18, 0x66, 0xdb, 0x6c, 0x66, 0x66, 0xd6, 0xd6, 0x60, 0xc6, 0x60, 0x06, 0xdb, 0x66,
    0x00, 0xe7, 0xc3, 0x83, 0xc1, 0xc3, 0xf9, 0x99, 0xd8, 0xdb, 0x7e, 0x10, 0xde, 0xff, 0x0d, 0xb0,
    0xc6, 0x06, 0xc0, 0x06, 0x06, 0x06, 0xc6, 0x06, 0xc6, 0x06, 0x7e, 0x7e, 0x18, 0x04, 0x07, 0xd0,
    0x00, 0x18, 0x00, 0x6c, 0x06, 0x30, 0xdc, 0x00, 0x30, 0x0c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x60,
    0xf6, 0x18, 0x30, 0x06, 0xfe, 0x06, 0x66, 0x18, 0x66, 0x06, 0x00, 0x00, 0x18, 0x00, 0x18, 0x18,
    0xde, 0x7e, 0x66, 0x60, 0x66, 0x68, 0x68, 0x6e, 0x66, 0x18, 0xcc, 0x6c, 0x62, 0xc6, 0x6e, 0x66,
    0x60, 0x6e, 0x6c, 0x06, 0x18, 0x66, 0x66, 0xfe, 0x38, 0x18, 0x32, 0x18, 0x0c, 0x18, 0x00, 0x00,
    0x00, 0x7c, 0x66, 0x60, 0xcc, 0x7e, 0x30, 0xcc, 0x66, 0x18, 0x06, 0x78, 0x18, 0xfe, 0x66, 0x66,
    0x66, 0xcc, 0x66, 0x3c, 0x30, 0xcc, 0x66, 0xfe, 0x38, 0x66, 0x18, 0x18, 0x00, 0x18, 0x00, 0x34,
    0x78, 0xcc, 0xfc, 0x3e, 0x7c, 0x7c, 0x7c, 0x70, 0x7e, 0xfc, 0xfc, 0x30, 0x18, 0x30, 0xfe, 0xcc,
    0x78, 0x7f, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x66, 0xcc, 0xc0, 0x60, 0x30, 0xc6, 0x18,
    0x7c, 0x30, 0xcc, 0xcc, 0xcc, 0xfc, 0x00, 0x00, 0xc0, 0xc0, 0x0c, 0x33, 0x37, 0x18, 0x66, 0x66,
    0x22, 0x3e, 0xdb, 0x18, 0xf8, 0xf8, 0xf6, 0xfe, 0xf8, 0xf6, 0x36, 0xf6, 0xfe, 0xb1, 0xb9, 0x51,
    0x7e, 0x66, 0x66, 0x60, 0x6c, 0x68, 0xdb, 0x06, 0x76, 0x76, 0x6c, 0x66, 0xc6, 0x66, 0x66, 0x66,
    0x60, 0x60, 0x18, 0x06, 0x7e, 0x38, 0x66, 0x06, 0xda, 0xda, 0x66, 0xdf, 0x66, 0x06, 0xdb, 0x36,
    0x7c, 0x66, 0x7c, 0x30, 0x36, 0x7e, 0x7e, 0x1c, 0xcc, 0xcc, 0x78, 0x36, 0xfe, 0x7e, 0x66, 0x66,
    0x66, 0x60, 0x18, 0x66, 0xdb, 0x38, 0x66, 0x7e, 0xda, 0xda, 0x7c, 0xfa, 0x7c, 0x3e, 0xf3, 0x3e,
    0x00, 0x24, 0x66, 0xf6, 0x6f, 0x99, 0xf3, 0xc3, 0x70, 0xc3, 0x10, 0x70, 0x18, 0x1e, 0x19, 0x98,
    0xc6, 0x06, 0xc0, 0x06, 0x06, 0x06, 0xc6, 0x06, 0xc6, 0x06, 0x66, 0x18, 0x10, 0x04, 0x2e, 0x10,
    0x00, 0x00, 0x00, 0xfe, 0x7c, 0x66, 0xcc, 0x00, 0x18, 0x18, 0x66, 0x18, 0x30, 0x00, 0x18, 0xc0,
    0xe6, 0x18, 0x66, 0x66, 0x0c, 0x66, 0x66, 0x18, 0x66, 0x0c, 0x18, 0x18, 0x0c, 0x7e, 0x30, 0x00,
    0xc0, 0x66, 0x66, 0x66, 0x6c, 0x62, 0x60, 0x66, 0x66, 0x18, 0xcc, 0x66, 0x66, 0xc6, 0x66, 0x66,
    0x60, 0x3c, 0x66, 0x66, 0x18, 0x66, 0x3c, 0xee, 0x6c, 0x18, 0x66, 0x18, 0x06, 0x18, 0x00, 0x00,
    0x00, 0xcc, 0x66, 0x66, 0xcc, 0x60, 0x30, 0x7c, 0x66, 0x18, 0x66, 0x6c, 0x18, 0xd6, 0x66, 0x66,
    0x7c, 0x7c, 0x60, 0x06, 0x34, 0xcc, 0x3c, 0xfe, 0x6c, 0x3e, 0x32, 0x18, 0x18, 0x18, 0x00, 0x62,
    0x18, 0xcc, 0xc0, 0x66, 0xcc, 0xcc, 0xcc, 0x78, 0x60, 0xc0, 0xc0, 0x30, 0x18, 0x30, 0xc6, 0xfc,
    0x60, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x7c, 0x3c, 0xcc, 0x78, 0xe6, 0xfc, 0xcf, 0x18,
    0xcc, 0x30, 0xcc, 0xcc, 0xcc, 0xdc, 0x7e, 0x7c, 0xcc, 0xc0, 0x0c, 0x66, 0x6f, 0x18, 0x33, 0xcc,
    0x88, 0x36, 0x77, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0xbd, 0xad, 0x00,
    0x66, 0x66, 0x66, 0x60, 0x6c, 0x62, 0xdb, 0x66, 0x66, 0x66, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x66,
    0x60, 0x66, 0x18, 0x06, 0x18, 0x6c, 0x66, 0x06, 0xda, 0xda, 0x66, 0xcf, 0x66, 0x66, 0xdb, 0x66,
    0xcc, 0x66, 0x66, 0x30, 0x36, 0x60, 0xdb, 0x06, 0xcc, 0xcc, 0x6c, 0x36, 0xd6, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x18, 0x3e, 0xdb, 0x6c, 0x66, 0x06, 0xda, 0xda, 0x66, 0xce, 0x66, 0x06, 0xdb, 0x36,
    0x00, 0x24, 0x3c, 0x1c, 0x38, 0x3c, 0xe7, 0xe7, 0x20, 0xc3, 0x38, 0xf0, 0x18, 0x1b, 0x79, 0x9e,
    0x7c, 0x06, 0x7c, 0x7c, 0x06, 0x7c, 0x7c, 0x06, 0x7c, 0x7c, 0x3c, 0x1e, 0x1e, 0x3c, 0x39, 0xe0,
    0x00, 0x18, 0x00, 0x6c, 0x18, 0xc6, 0x76, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x30, 0x00, 0x18, 0x80,
    0x7c, 0x7e, 0x7e, 0x3c, 0x1e, 0x3c, 0x3c, 0x18, 0x3c, 0x38, 0x18, 0x18, 0x06, 0x00, 0x60, 0x18,
    0x78, 0x66, 0xfc, 0x3c, 0xf8, 0xfe, 0xf0, 0x3e, 0x66, 0x3c, 0x78, 0xe6, 0xfe, 0xc6, 0x66, 0x3c,
    0xf0, 0x0e, 0xe6, 0x3c, 0x3c, 0x7e, 0x18, 0xc6, 0xc6, 0x3c, 0xfe, 0x1e, 0x02, 0x78, 0x00, 0xfe,
    0x00, 0x76, 0xdc, 0x3c, 0x76, 0x3c, 0x78, 0x0c, 0xe6, 0x3c, 0x66, 0xe6, 0x3c, 0xc6, 0x66, 0x3c,
    0x60, 0x0c, 0xf0, 0x7c, 0x18, 0x76, 0x18, 0x6c, 0xc6, 0x06, 0x7e, 0x0e, 0x18, 0x70, 0x00, 0x7e,
    0x0c, 0x7e, 0x78, 0x3f, 0x7e, 0x7e, 0x7e, 0x0c, 0x3c, 0x78, 0x78, 0x78, 0x3c, 0x78, 0xc6, 0xcc,
    0xfc, 0x7f, 0xce, 0x78, 0x78, 0x78, 0x7e, 0x7e, 0x0c, 0x18, 0x78, 0x18, 0xfc, 0x30, 0xc6, 0xd8,
    0x7e, 0x78, 0x78, 0x7e, 0xcc, 0xcc, 0x00, 0x00, 0x78, 0x00, 0x00, 0xcc, 0xcf, 0x18, 0x00, 0x00,
    0x22, 0x66, 0xdb, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0xc3, 0xc3, 0x00,
    0x66, 0x7c, 0xfc, 0x60, 0xff, 0xfe, 0xdb, 0x3c, 0x66, 0x66, 0xe6, 0xe6, 0xc6, 0x66, 0x3c, 0x66,
    0xf0, 0x3c, 0x3c, 0x7c, 0x3c, 0xc6, 0x7f, 0x06, 0xfe, 0xff, 0x7c, 0xfb, 0x7c, 0x3c, 0xce, 0x67,
    0x76, 0x3c, 0x7c, 0x30, 0x7f, 0x3c, 0xdb, 0x7c, 0x76, 0x76, 0x66, 0x76, 0xc6, 0x66, 0x3c, 0x66,
    0x7c, 0x3c, 0x18, 0x06, 0x7e, 0xc6, 0x7f, 0x06, 0xfe, 0xff, 0x7c, 0xfa, 0x7c, 0x7c, 0xce, 0x66,
    0x00, 0x3c, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x10, 0x60, 0x00, 0x00, 0x71, 0x8e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x54, 0x38, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x18, 0x00, 0x30, 0xc7, 0x70,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0x00, 0x00, 0x00,
    0x88, 0x00, 0xee, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0x7e, 0x7e, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x7c, 0x18, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const Fonthead fnt_ru_8x8 = {
    1,  /* font_id */
    9,  /* point */
    "8x8 Russian font",  /*   BYTE name[32]     */
    0,  /* first_ade */
    255,  /* last_ade */
    6,  /* top */
    6,  /* ascent */
    4,  /* half */
    1,  /* descent */
    1,  /* bottom */
    8,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555, /* lighten */
    0x5555, /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_8x8_table,          /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    256,  /* form_width */
    8,  /* form_height */
    0   /* Fonthead * next_font */
};
