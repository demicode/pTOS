/*
 * fnt_gr_8x16.c - a font in standard format
 *
 * Copyright (C) 2003-2015 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * And then the font was "refined" a bit by GGN
 * because I always hated having ANSI characters from
 * MS-DOS on my STe instead of the copyright or TM characters!
 *
 * (BTW: original font comes from ELKAT)
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "config.h"
#include "portab.h"
#include "fonthdr.h"

extern const UWORD off_8x8_table[];
#define off_8x16_table off_8x8_table

static const UBYTE dat_table[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x32, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF1,
    0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xA0,
    0x7C, 0x00, 0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x28,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x18, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x32, 0x32, 0x01, 0x00, 0x00, 0x00, 0x30, 0x7A, 0x7A, 0x66, 0x06, 0x10, 0x00, 0x00, 0x00, 0x5B,
    0x66, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x06, 0x06, 0x00, 0x0C, 0x06, 0x06, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x38, 0x1E, 0x00, 0x00, 0x00, 0x38, 0x00, 0xFE,
    0x00, 0x00, 0x00, 0x30, 0x0C, 0x7C, 0xFE, 0xEE, 0x01, 0x00, 0x00, 0x08, 0x78, 0x38, 0x05, 0xA0,
    0xBA, 0x02, 0x3A, 0x3A, 0x82, 0xB8, 0xB8, 0xBA, 0xBA, 0xBA, 0x00, 0x78, 0x00, 0x00, 0x0D, 0xD8,
    0x00, 0x18, 0x66, 0x66, 0x3E, 0x66, 0x6C, 0x18, 0x06, 0x60, 0x66, 0x00, 0x00, 0x00, 0x00, 0x06,
    0x3C, 0x18, 0x3C, 0x7E, 0x0C, 0x7E, 0x1C, 0x7E, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C,
    0x38, 0x18, 0x7C, 0x3C, 0x78, 0x7E, 0x7E, 0x3E, 0x66, 0x7E, 0x06, 0xCC, 0x60, 0xC6, 0x66, 0x3C,
    0x7C, 0x3C, 0xF8, 0x3E, 0x7E, 0x66, 0x66, 0xC6, 0x66, 0x66, 0x7E, 0x1E, 0x60, 0x78, 0x10, 0x00,
    0x70, 0x00, 0x60, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x60, 0x18, 0x0C, 0xC0, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x18, 0x7C, 0x7E, 0x18, 0x7E, 0x7E, 0x66, 0x3C, 0x7E, 0x66, 0x18, 0x63, 0x66, 0x7E, 0x3C, 0x7E,
    0x7C, 0x7E, 0x7E, 0x66, 0x08, 0x66, 0x63, 0x3C, 0x00, 0x3C, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0x3C,
    0x00, 0x00, 0x3C, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x7A, 0x7A, 0x3D, 0x00, 0x00, 0x7E, 0x18, 0x4C, 0x4C, 0x66, 0x0C, 0x7C, 0x7A, 0x7C, 0x7C, 0x5F,
    0x66, 0x66, 0x66, 0x7C, 0x1E, 0x7E, 0x7E, 0x38, 0x1E, 0x7E, 0x6E, 0x3C, 0x3C, 0x7E, 0x6C, 0x1C,
    0xFE, 0x36, 0x7E, 0x6E, 0x3E, 0x7C, 0xD6, 0x7E, 0x38, 0x7E, 0x7E, 0x7E, 0x6E, 0x1C, 0x00, 0x00,
    0x00, 0x0C, 0x0C, 0x0C, 0xCC, 0x18, 0x0C, 0x0C, 0x66, 0x06, 0x8C, 0xBF, 0xB3, 0xBF, 0x9E, 0xB3,
    0x9E, 0x00, 0x60, 0x06, 0x0E, 0x18, 0x00, 0x00, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x44, 0x00, 0xFE,
    0x00, 0x18, 0x3C, 0x38, 0x1C, 0x38, 0xFE, 0xC6, 0x01, 0x3C, 0x00, 0x0E, 0x40, 0x40, 0x05, 0xA0,
    0xC6, 0x06, 0x06, 0x06, 0xC6, 0xC0, 0xC0, 0xC6, 0xC6, 0xC6, 0x00, 0x40, 0x00, 0x00, 0x06, 0x28,
    0x00, 0x18, 0x66, 0x66, 0x7E, 0x66, 0x6C, 0x18, 0x0C, 0x30, 0x66, 0x18, 0x00, 0x00, 0x00, 0x06,
    0x7E, 0x18, 0x7E, 0x7E, 0x0C, 0x7E, 0x3C, 0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x0E, 0x00, 0xE0, 0x7E,
    0x7C, 0x3C, 0x7E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7E, 0x66, 0x7E, 0x06, 0xCC, 0x60, 0xC6, 0x66, 0x7E,
    0x7E, 0x7E, 0xFC, 0x7E, 0x7E, 0x66, 0x66, 0xC6, 0x66, 0x66, 0x7E, 0x1E, 0x60, 0x78, 0x38, 0x00,
    0x38, 0x00, 0x60, 0x00, 0x06, 0x00, 0x1E, 0x00, 0x60, 0x18, 0x0C, 0xC0, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x3C, 0x7E, 0x7E, 0x18, 0x7E, 0x7E, 0x66, 0x7E, 0x7E, 0x66, 0x18, 0x63, 0x66, 0x7E, 0x7E, 0x7E,
    0x7E, 0x7E, 0x7E, 0x66, 0x3E, 0x66, 0x63, 0x7E, 0x00, 0x7E, 0x00, 0x7C, 0x00, 0x7E, 0x00, 0x7E,
    0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x4C, 0x4C, 0x7E, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0xCA, 0xC6, 0xC6, 0x55,
    0x00, 0x66, 0x76, 0x7C, 0x1E, 0x7E, 0x7E, 0x38, 0x1E, 0x7E, 0x6E, 0x3C, 0x3E, 0x7E, 0x6E, 0x1C,
    0xFE, 0x36, 0x7E, 0x6E, 0x3E, 0x7E, 0xD6, 0x7E, 0x38, 0x7E, 0x3E, 0x7E, 0x6E, 0x36, 0x00, 0x00,
    0x00, 0x18, 0x18, 0x18, 0xCC, 0x30, 0x18, 0x18, 0x66, 0x0C, 0x9E, 0xBF, 0xB3, 0xBF, 0xBF, 0xB3,
    0xBF, 0x18, 0x70, 0x0E, 0x19, 0x18, 0x00, 0x00, 0x44, 0x30, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x3C, 0x24, 0x2C, 0x34, 0xBA, 0xFE, 0xD6, 0x03, 0x66, 0x18, 0x0F, 0x70, 0x40, 0x05, 0xA0,
    0xC6, 0x06, 0x06, 0x06, 0xC6, 0xC0, 0xC0, 0xC6, 0xC6, 0xC6, 0x00, 0x70, 0x00, 0x00, 0x07, 0xD0,
    0x00, 0x18, 0x66, 0xFF, 0x60, 0x6C, 0x38, 0x18, 0x1C, 0x38, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x06,
    0x66, 0x38, 0x66, 0x0C, 0x1C, 0x60, 0x70, 0x06, 0x66, 0x66, 0x18, 0x18, 0x1C, 0x7E, 0x70, 0x66,
    0xE6, 0x7E, 0x66, 0x66, 0x6E, 0x60, 0x60, 0x60, 0x66, 0x18, 0x06, 0xD8, 0x60, 0xEE, 0x66, 0x66,
    0x66, 0x66, 0xCC, 0x60, 0x18, 0x66, 0x66, 0xC6, 0x66, 0x66, 0x0C, 0x18, 0x60, 0x18, 0x38, 0x00,
    0x1C, 0x00, 0x60, 0x00, 0x06, 0x00, 0x18, 0x00, 0x60, 0x00, 0x00, 0xC0, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x7E, 0x66, 0x60, 0x3C, 0x60, 0x0C, 0x66, 0x66, 0x18, 0x6C, 0x3C, 0x77, 0x66, 0x00, 0x66, 0x66,
    0x66, 0x60, 0x18, 0x66, 0x7F, 0x66, 0x6B, 0x66, 0x00, 0x66, 0x00, 0x60, 0x00, 0x18, 0x00, 0x66,
    0x00, 0x00, 0x66, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x01, 0x00, 0xD8, 0x3C, 0x3C, 0x3C, 0x00, 0x00, 0x10, 0xCA, 0x82, 0x82, 0x51,
    0xE6, 0x66, 0x76, 0x0C, 0x06, 0x0C, 0x06, 0x18, 0x04, 0x66, 0x66, 0x0C, 0x06, 0x06, 0x3E, 0x0C,
    0xFE, 0x36, 0x66, 0x66, 0x3E, 0x06, 0xD6, 0x66, 0x18, 0x06, 0x36, 0x66, 0x66, 0x32, 0x00, 0x66,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xB0, 0xB3, 0x8C, 0xB3, 0xB3,
    0xB3, 0x18, 0x38, 0x1C, 0x1B, 0x18, 0x18, 0x02, 0x6C, 0x30, 0x00, 0x1E, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x66, 0x24, 0xE6, 0x67, 0x92, 0xFC, 0x92, 0x03, 0xC3, 0x3C, 0x09, 0x40, 0x40, 0x0D, 0xB0,
    0xC6, 0x06, 0x06, 0x06, 0xC6, 0xC0, 0xC0, 0xC6, 0xC6, 0xC6, 0x7C, 0x40, 0x00, 0x00, 0x2E, 0x10,
    0x00, 0x18, 0x66, 0xFF, 0x60, 0x0C, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x0C,
    0x66, 0x38, 0x66, 0x0C, 0x1C, 0x60, 0x60, 0x06, 0x66, 0x66, 0x18, 0x18, 0x38, 0x7E, 0x38, 0x66,
    0xC2, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x60, 0x66, 0x18, 0x06, 0xD8, 0x60, 0xEE, 0x76, 0x66,
    0x66, 0x66, 0xCC, 0x60, 0x18, 0x66, 0x66, 0xC6, 0x3C, 0x66, 0x0C, 0x18, 0x30, 0x18, 0x6C, 0x00,
    0x0C, 0x3C, 0x7C, 0x3C, 0x3E, 0x3C, 0x18, 0x3E, 0x7C, 0x38, 0x0C, 0xCC, 0x18, 0x6C, 0x3C, 0x3C,
    0x7C, 0x3E, 0x7C, 0x3E, 0x7E, 0x66, 0x66, 0xC6, 0x66, 0x66, 0x7E, 0x18, 0x18, 0x30, 0x62, 0x18,
    0x66, 0x66, 0x60, 0x3C, 0x60, 0x0C, 0x66, 0x66, 0x18, 0x6C, 0x3C, 0x7F, 0x76, 0x00, 0x66, 0x66,
    0x66, 0x30, 0x18, 0x66, 0x6B, 0x3C, 0x6B, 0x66, 0x3E, 0x66, 0x66, 0x30, 0x3E, 0x30, 0xFC, 0x66,
    0x30, 0x66, 0x06, 0x66, 0x66, 0x18, 0x3C, 0x7E, 0x3C, 0x3F, 0x3E, 0x7E, 0x66, 0x2E, 0x66, 0x63,
    0x3C, 0x3C, 0x66, 0x3D, 0x7E, 0xD8, 0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x10, 0xCA, 0xBA, 0xBA, 0x00,
    0x66, 0x66, 0x3E, 0x0C, 0x06, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x66, 0x0C, 0x06, 0x06, 0x36, 0x0C,
    0xC6, 0x36, 0x66, 0x36, 0x06, 0x06, 0xD6, 0x66, 0x18, 0x06, 0x36, 0x66, 0x76, 0x18, 0x10, 0xF7,
    0x63, 0x3E, 0x3E, 0xFC, 0x30, 0x30, 0x3C, 0x66, 0x66, 0x63, 0x33, 0x30, 0x33, 0x0C, 0x33, 0x33,
    0x33, 0x18, 0x1C, 0x38, 0x1B, 0x18, 0x18, 0x3E, 0x38, 0x30, 0x00, 0x10, 0x00, 0x20, 0x3C, 0x00,
    0x00, 0xC3, 0x24, 0x83, 0xC1, 0xD6, 0xFC, 0xBA, 0x06, 0x91, 0x3C, 0x08, 0x40, 0x38, 0x0D, 0xB0,
    0x82, 0x02, 0x3A, 0x3A, 0xBA, 0xB8, 0xB8, 0x82, 0xBA, 0xBA, 0x7E, 0x78, 0x00, 0x00, 0x39, 0xE0,
    0x00, 0x18, 0x66, 0x66, 0x7C, 0x18, 0x70, 0x18, 0x18, 0x18, 0xFF, 0x7E, 0x00, 0x7E, 0x00, 0x0C,
    0x66, 0x18, 0x0C, 0x18, 0x3C, 0x7C, 0x60, 0x0C, 0x3C, 0x7E, 0x18, 0x18, 0x70, 0x00, 0x1C, 0x0C,
    0xDA, 0x66, 0x7E, 0x60, 0x66, 0x7C, 0x7C, 0x6E, 0x7E, 0x18, 0x06, 0xF0, 0x60, 0xFE, 0x76, 0x66,
    0x66, 0x66, 0xCC, 0x70, 0x18, 0x66, 0x66, 0xC6, 0x3C, 0x3C, 0x18, 0x18, 0x30, 0x18, 0x6C, 0x00,
    0x04, 0x3E, 0x7E, 0x7C, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x38, 0x0C, 0xDC, 0x18, 0xFE, 0x7E, 0x7E,
    0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x66, 0x66, 0xC6, 0x66, 0x66, 0x7E, 0x38, 0x18, 0x38, 0xF2, 0x18,
    0x66, 0x7C, 0x60, 0x66, 0x7C, 0x18, 0x7E, 0x66, 0x18, 0x78, 0x66, 0x7F, 0x76, 0x00, 0x66, 0x66,
    0x66, 0x18, 0x18, 0x3C, 0x6B, 0x3C, 0x6B, 0x66, 0x7E, 0x66, 0x66, 0x18, 0x7E, 0x60, 0xFE, 0x76,
    0x30, 0x66, 0x06, 0x66, 0x66, 0x30, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x66, 0x6F, 0x66, 0x63,
    0x3E, 0x7E, 0x6E, 0x7E, 0xFF, 0xDE, 0x66, 0x66, 0x66, 0x00, 0x00, 0x10, 0xCA, 0xA2, 0xAA, 0x00,
    0x66, 0x66, 0x3C, 0x0C, 0x0E, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x66, 0x00, 0x06, 0x06, 0x66, 0x0C,
    0xC6, 0x36, 0x76, 0x3E, 0x06, 0x06, 0xF6, 0x66, 0x18, 0x06, 0x36, 0x76, 0x3E, 0x3C, 0x10, 0x99,
    0x63, 0x7E, 0x7E, 0xFE, 0x30, 0x30, 0x7E, 0x66, 0x66, 0x63, 0x33, 0x3E, 0x3F, 0x0C, 0x33, 0x33,
    0x33, 0x7E, 0x0E, 0x70, 0x18, 0x18, 0x00, 0x7C, 0x00, 0x30, 0x18, 0x10, 0x36, 0x7C, 0x3C, 0x00,
    0x00, 0x81, 0xE7, 0x83, 0xC1, 0xC6, 0xF8, 0x38, 0x06, 0x91, 0x3C, 0x08, 0x00, 0x00, 0x1D, 0xB8,
    0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x06, 0x00, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x18, 0x66, 0x66, 0x3E, 0x18, 0x70, 0x18, 0x18, 0x18, 0xFF, 0x7E, 0x00, 0x7E, 0x00, 0x18,
    0x6E, 0x18, 0x0C, 0x18, 0x3C, 0x7E, 0x7C, 0x0C, 0x3C, 0x3E, 0x18, 0x18, 0xE0, 0x00, 0x0E, 0x0C,
    0xD6, 0x66, 0x7C, 0x60, 0x66, 0x7C, 0x7C, 0x6E, 0x7E, 0x18, 0x06, 0xF0, 0x60, 0xD6, 0x7E, 0x66,
    0x66, 0x66, 0xFC, 0x38, 0x18, 0x66, 0x66, 0xD6, 0x18, 0x3C, 0x18, 0x18, 0x18, 0x18, 0xC6, 0x00,
    0x00, 0x06, 0x66, 0x60, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x18, 0x0C, 0xF8, 0x18, 0xFE, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x66, 0xD6, 0x3C, 0x66, 0x0C, 0xF0, 0x18, 0x1E, 0xBE, 0x3C,
    0x66, 0x7E, 0x60, 0x66, 0x7C, 0x18, 0x7E, 0x7E, 0x18, 0x78, 0x66, 0x6B, 0x7E, 0x3C, 0x66, 0x66,
    0x66, 0x0C, 0x18, 0x3C, 0x6B, 0x18, 0x7F, 0x66, 0x66, 0x7C, 0x3C, 0x3C, 0x60, 0x60, 0x66, 0x3E,
    0x30, 0x6C, 0x3E, 0x66, 0x66, 0x30, 0x66, 0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x6B, 0x66, 0x63,
    0x06, 0x66, 0x6E, 0x66, 0xDB, 0xDE, 0x66, 0x66, 0x66, 0x00, 0x00, 0x10, 0xCA, 0xA2, 0xB2, 0x00,
    0x66, 0x66, 0x3C, 0x0C, 0x1E, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x66, 0x00, 0x06, 0x0E, 0x66, 0x0C,
    0xC6, 0x36, 0x76, 0x18, 0x36, 0x06, 0xF6, 0x66, 0x18, 0x06, 0x36, 0x76, 0x0E, 0x66, 0x38, 0x99,
    0x6B, 0x66, 0x60, 0x66, 0x30, 0x30, 0x66, 0x66, 0x66, 0x63, 0x33, 0x3E, 0x3F, 0x0C, 0x33, 0x1E,
    0x33, 0x7E, 0x1C, 0x38, 0x18, 0x18, 0x7E, 0x40, 0x00, 0x30, 0x18, 0xD0, 0x36, 0x00, 0x3C, 0x00,
    0x00, 0xE7, 0x81, 0xE6, 0x67, 0xD6, 0xFA, 0xBA, 0x8C, 0x9D, 0x3C, 0x78, 0x1E, 0x1C, 0x39, 0x9C,
    0x82, 0x02, 0xB8, 0x3A, 0x3A, 0x3A, 0xBA, 0x02, 0xBA, 0x3A, 0x06, 0x0E, 0x07, 0xF0, 0x00, 0x00,
    0x00, 0x18, 0x00, 0xFF, 0x06, 0x30, 0xDE, 0x00, 0x18, 0x18, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x76, 0x18, 0x18, 0x0C, 0x6C, 0x06, 0x7E, 0x18, 0x66, 0x06, 0x00, 0x00, 0x70, 0x7E, 0x1C, 0x18,
    0xD6, 0x7E, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x06, 0xD8, 0x60, 0xD6, 0x7E, 0x66,
    0x7E, 0x66, 0xF8, 0x1C, 0x18, 0x66, 0x66, 0xD6, 0x18, 0x18, 0x30, 0x18, 0x18, 0x18, 0xC6, 0x00,
    0x00, 0x3E, 0x66, 0x60, 0x66, 0x66, 0x18, 0x66, 0x66, 0x18, 0x0C, 0xF0, 0x18, 0xD6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x70, 0x18, 0x66, 0x66, 0xD6, 0x3C, 0x66, 0x18, 0xF0, 0x18, 0x1E, 0x9C, 0x24,
    0x7E, 0x66, 0x60, 0x66, 0x60, 0x30, 0x66, 0x7E, 0x18, 0x6C, 0x66, 0x6B, 0x7E, 0x3C, 0x66, 0x66,
    0x7E, 0x0C, 0x18, 0x18, 0x6B, 0x18, 0x3E, 0x66, 0x66, 0x7C, 0x3C, 0x66, 0x7C, 0x60, 0x66, 0x5E,
    0x30, 0x78, 0x7E, 0x66, 0x66, 0x1C, 0x66, 0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x6B, 0x3C, 0x6B,
    0x3E, 0x66, 0x76, 0x6E, 0xDB, 0xD8, 0x7E, 0x7E, 0x66, 0x00, 0x00, 0x00, 0x7A, 0xA2, 0xBA, 0x00,
    0x66, 0x66, 0x6E, 0x0C, 0x36, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x66, 0x00, 0x06, 0x1C, 0x66, 0x0C,
    0xC6, 0x36, 0x06, 0x1C, 0x36, 0x06, 0xC6, 0x66, 0x18, 0x06, 0x36, 0x06, 0x06, 0x66, 0x38, 0xEF,
    0x6B, 0x66, 0x7C, 0x66, 0x30, 0x30, 0x66, 0x66, 0x66, 0x6B, 0x3F, 0x30, 0x33, 0x0C, 0x33, 0x1E,
    0x3F, 0x18, 0x38, 0x1C, 0x18, 0x18, 0x7E, 0x00, 0x00, 0xFE, 0x00, 0xD0, 0x00, 0x00, 0x3C, 0x00,
    0x00, 0x24, 0xC3, 0x2C, 0x34, 0x92, 0xF2, 0x92, 0x8C, 0x81, 0x3C, 0xF8, 0x10, 0x12, 0x79, 0x9E,
    0xC6, 0x06, 0xC0, 0x06, 0x06, 0x06, 0xC6, 0x06, 0xC6, 0x06, 0x7E, 0x10, 0x0F, 0xF8, 0x00, 0x00,
    0x00, 0x18, 0x00, 0xFF, 0x06, 0x36, 0xDE, 0x00, 0x18, 0x18, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x30,
    0x66, 0x18, 0x18, 0x0C, 0x6C, 0x06, 0x66, 0x18, 0x66, 0x06, 0x00, 0x00, 0x38, 0x7E, 0x38, 0x18,
    0xDC, 0x7E, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x06, 0xD8, 0x60, 0xC6, 0x6E, 0x66,
    0x7C, 0x66, 0xD8, 0x0E, 0x18, 0x66, 0x66, 0xFE, 0x3C, 0x18, 0x30, 0x18, 0x0C, 0x18, 0x00, 0x00,
    0x00, 0x7E, 0x66, 0x60, 0x66, 0x7E, 0x18, 0x66, 0x66, 0x18, 0x0C, 0xF8, 0x18, 0xD6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x3C, 0x18, 0x66, 0x66, 0xFE, 0x18, 0x66, 0x18, 0x38, 0x18, 0x38, 0x00, 0x66,
    0x7E, 0x66, 0x60, 0x66, 0x60, 0x30, 0x66, 0x66, 0x18, 0x6C, 0x66, 0x63, 0x6E, 0x00, 0x66, 0x66,
    0x7C, 0x18, 0x18, 0x18, 0x6B, 0x3C, 0x1C, 0x7E, 0x66, 0x66, 0x18, 0x66, 0x7C, 0x30, 0x66, 0x66,
    0x30, 0x78, 0x66, 0x66, 0x66, 0x1C, 0x66, 0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x6B, 0x3C, 0x6B,
    0x7E, 0x66, 0x76, 0x7E, 0xDF, 0xD8, 0x7E, 0x7E, 0x66, 0x00, 0x00, 0x00, 0x0A, 0xBA, 0xAA, 0x00,
    0x66, 0x66, 0x6E, 0x0C, 0x36, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x66, 0x00, 0x06, 0x30, 0x6E, 0x0C,
    0xC6, 0x36, 0x7E, 0x0E, 0x36, 0x06, 0xC6, 0x66, 0x18, 0x06, 0x36, 0x06, 0x06, 0x3C, 0x6C, 0x66,
    0x6B, 0x66, 0x7C, 0x66, 0x30, 0x30, 0x66, 0x66, 0x66, 0x6B, 0x3F, 0x30, 0x33, 0x0C, 0x33, 0x0C,
    0x1E, 0x18, 0x70, 0x0E, 0x18, 0x18, 0x00, 0x02, 0x00, 0x30, 0x00, 0x50, 0x00, 0x00, 0x3C, 0x00,
    0x00, 0x24, 0x66, 0x38, 0x1C, 0xBA, 0xF6, 0xD6, 0xD8, 0xC3, 0x7E, 0x70, 0x1C, 0x1C, 0x71, 0x8E,
    0xC6, 0x06, 0xC0, 0x06, 0x06, 0x06, 0xC6, 0x06, 0xC6, 0x06, 0x66, 0x0C, 0x1F, 0xEC, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x66, 0x7E, 0x66, 0xCC, 0x00, 0x18, 0x18, 0x66, 0x18, 0x18, 0x00, 0x18, 0x30,
    0x66, 0x18, 0x30, 0x66, 0x7E, 0x06, 0x66, 0x30, 0x66, 0x06, 0x18, 0x18, 0x1C, 0x00, 0x70, 0x18,
    0xC0, 0x66, 0x66, 0x66, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0xCC, 0x60, 0xC6, 0x6E, 0x66,
    0x60, 0x66, 0xCC, 0x06, 0x18, 0x66, 0x3C, 0xFE, 0x3C, 0x18, 0x60, 0x18, 0x0C, 0x18, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x60, 0x66, 0x60, 0x18, 0x66, 0x66, 0x18, 0x0C, 0xD8, 0x18, 0xD6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x0E, 0x18, 0x66, 0x3C, 0xFE, 0x3C, 0x66, 0x30, 0x18, 0x18, 0x30, 0x00, 0x42,
    0x66, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0x66, 0x63, 0x6E, 0x00, 0x66, 0x66,
    0x60, 0x30, 0x18, 0x18, 0x7F, 0x3C, 0x08, 0x3C, 0x66, 0x66, 0x3C, 0x66, 0x60, 0x18, 0x66, 0x66,
    0x30, 0x6C, 0x66, 0x66, 0x3C, 0x30, 0x66, 0x66, 0x66, 0x66, 0x60, 0x18, 0x66, 0x6B, 0x18, 0x6B,
    0x66, 0x66, 0x66, 0x76, 0xD8, 0xD8, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x0A, 0x82, 0x82, 0x00,
    0x66, 0x66, 0x66, 0x7E, 0x36, 0x0C, 0x66, 0x18, 0x0C, 0x66, 0x7E, 0x00, 0x3E, 0x30, 0x6E, 0x7C,
    0xFE, 0x7E, 0x7E, 0x7E, 0x36, 0x06, 0xFE, 0xE6, 0x18, 0x06, 0x3E, 0x06, 0x06, 0x18, 0x6C, 0x00,
    0x6B, 0x66, 0x60, 0x66, 0x30, 0x30, 0x66, 0x66, 0x66, 0x6B, 0x33, 0x30, 0x33, 0x0C, 0x33, 0x0C,
    0x00, 0x18, 0x60, 0x06, 0x18, 0xD8, 0x18, 0x3E, 0x00, 0x30, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x24, 0x3C, 0x30, 0x0C, 0x38, 0xE6, 0xC6, 0x58, 0x66, 0xFF, 0x00, 0x10, 0x14, 0x71, 0x8E,
    0xC6, 0x06, 0xC0, 0x06, 0x06, 0x06, 0xC6, 0x06, 0xC6, 0x06, 0x66, 0x02, 0x18, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x66, 0x7C, 0x66, 0xCC, 0x00, 0x1C, 0x38, 0x66, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x66, 0x18, 0x30, 0x66, 0x7E, 0x66, 0x66, 0x30, 0x66, 0x0E, 0x18, 0x18, 0x0E, 0x00, 0xE0, 0x00,
    0xE2, 0x66, 0x66, 0x66, 0x6E, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0xCC, 0x60, 0xC6, 0x66, 0x66,
    0x60, 0x6A, 0xCC, 0x06, 0x18, 0x66, 0x3C, 0xEE, 0x66, 0x18, 0x60, 0x18, 0x06, 0x18, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x60, 0x66, 0x60, 0x18, 0x7E, 0x66, 0x18, 0x0C, 0xCC, 0x18, 0xC6, 0x66, 0x66,
    0x66, 0x66, 0x60, 0x06, 0x18, 0x66, 0x3C, 0xEE, 0x3C, 0x7E, 0x30, 0x18, 0x18, 0x30, 0x00, 0xC3,
    0x66, 0x66, 0x60, 0x66, 0x60, 0x60, 0x66, 0x66, 0x18, 0x66, 0x66, 0x63, 0x66, 0x00, 0x66, 0x66,
    0x60, 0x60, 0x18, 0x18, 0x3E, 0x66, 0x08, 0x00, 0x66, 0x66, 0x66, 0x66, 0x60, 0x0C, 0x66, 0x66,
    0x32, 0x6C, 0x66, 0x66, 0x3C, 0x30, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x1A, 0x66, 0x6B, 0x3C, 0x6B,
    0x66, 0x66, 0x66, 0x66, 0xD8, 0xD8, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x0A, 0xC6, 0xC6, 0x00,
    0x66, 0xF6, 0x62, 0x7E, 0x36, 0x0C, 0x66, 0x18, 0x04, 0x66, 0x7E, 0x00, 0x3C, 0x30, 0x6E, 0x7C,
    0x7C, 0x7E, 0x7E, 0x7E, 0x36, 0x06, 0xFE, 0xE6, 0x18, 0x06, 0x3E, 0x06, 0x06, 0x4C, 0xC6, 0x00,
    0x6B, 0x66, 0x60, 0x66, 0x32, 0x32, 0x66, 0x66, 0x66, 0x6B, 0x33, 0x30, 0x33, 0x0C, 0x33, 0x0C,
    0x00, 0x00, 0x00, 0x00, 0x18, 0xD8, 0x18, 0x7C, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3C, 0x18, 0x00, 0x00, 0x7C, 0xEE, 0xEE, 0x70, 0x3C, 0x10, 0x00, 0x10, 0x12, 0x61, 0x86,
    0xBA, 0x02, 0xB8, 0x3A, 0x02, 0x3A, 0xBA, 0x02, 0xBA, 0x3A, 0x7E, 0x1C, 0x18, 0x04, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0xFE, 0x00, 0x0C, 0x30, 0x00, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x7E, 0x7E, 0x7E, 0x7E, 0x0C, 0x7E, 0x7E, 0x30, 0x7E, 0x3C, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x7E, 0x66, 0x7E, 0x7E, 0x7C, 0x7E, 0x60, 0x7E, 0x66, 0x7E, 0x7E, 0xC6, 0x7E, 0xC6, 0x66, 0x7E,
    0x60, 0x7C, 0xC6, 0x7E, 0x18, 0x7E, 0x18, 0xC6, 0x66, 0x18, 0x7E, 0x1E, 0x06, 0x78, 0x00, 0xFE,
    0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x18, 0x3E, 0x66, 0x3C, 0x0C, 0xCE, 0x3C, 0xC6, 0x66, 0x7E,
    0x7E, 0x7E, 0x60, 0x7E, 0x1E, 0x7E, 0x18, 0xC6, 0x66, 0x3E, 0x7E, 0x18, 0x18, 0x30, 0x00, 0xFF,
    0x66, 0x7E, 0x60, 0x7E, 0x7E, 0x7E, 0x66, 0x7E, 0x7E, 0x63, 0x66, 0x63, 0x66, 0x7E, 0x7E, 0x66,
    0x60, 0x7E, 0x18, 0x18, 0x08, 0x66, 0x08, 0x7E, 0x7F, 0x7E, 0x66, 0x7E, 0x7E, 0x06, 0x66, 0x7E,
    0x3E, 0x66, 0x66, 0x7E, 0x18, 0x1C, 0x7E, 0x66, 0x7E, 0x7E, 0x3E, 0x1E, 0x7E, 0x7F, 0x3C, 0x3E,
    0x7E, 0x7E, 0x7E, 0x7E, 0xFF, 0xFE, 0x66, 0x66, 0x7E, 0x00, 0x00, 0x00, 0x0A, 0x7C, 0x7C, 0x00,
    0xF6, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x06, 0x06, 0x6C, 0xC6, 0x00,
    0x7F, 0x7F, 0x7E, 0x66, 0x3E, 0x3E, 0x7E, 0x7E, 0x7E, 0x7F, 0x33, 0x3F, 0x33, 0x3F, 0x3F, 0x0C,
    0x3F, 0x3E, 0x7E, 0x7E, 0x18, 0x98, 0x00, 0x40, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x38, 0x00, 0x00, 0x00, 0x41, 0x82,
    0x7C, 0x00, 0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x3C, 0x00, 0x10, 0x04, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x76, 0x00, 0x06, 0x60, 0x00, 0x00, 0x18, 0x00, 0x18, 0x60,
    0x3C, 0x7E, 0x7E, 0x3C, 0x0C, 0x3C, 0x3C, 0x30, 0x3C, 0x38, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x3C, 0x66, 0x7C, 0x3C, 0x78, 0x7E, 0x60, 0x3C, 0x66, 0x7E, 0x3C, 0xC6, 0x7E, 0xC6, 0x66, 0x3C,
    0x60, 0x36, 0xC6, 0x7C, 0x18, 0x3C, 0x18, 0x82, 0x66, 0x18, 0x7E, 0x1E, 0x06, 0x78, 0x00, 0xFE,
    0x00, 0x3E, 0x7C, 0x3E, 0x3E, 0x3E, 0x18, 0x06, 0x66, 0x3C, 0x0C, 0xC6, 0x3C, 0xC6, 0x66, 0x3C,
    0x7C, 0x3E, 0x60, 0x7C, 0x0E, 0x3E, 0x18, 0x82, 0x66, 0x06, 0x7E, 0x18, 0x18, 0x30, 0x00, 0x00,
    0x66, 0x7C, 0x60, 0x7E, 0x7E, 0x7E, 0x66, 0x3C, 0x7E, 0x63, 0x66, 0x63, 0x66, 0x7E, 0x3C, 0x66,
    0x60, 0x7E, 0x18, 0x18, 0x08, 0x66, 0x08, 0x7E, 0x3F, 0x7C, 0x66, 0x3C, 0x3E, 0x06, 0x66, 0x3C,
    0x1C, 0x66, 0x66, 0x7F, 0x18, 0x1E, 0x3C, 0x66, 0x7C, 0x3C, 0x06, 0x0C, 0x3C, 0x3E, 0x66, 0x1C,
    0x3E, 0x3C, 0xBC, 0xBC, 0x7F, 0x7E, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x06, 0x06, 0x38, 0x00, 0x00,
    0x3E, 0x3F, 0x3E, 0x66, 0x1C, 0x1C, 0x3C, 0x3C, 0x3C, 0x3E, 0x33, 0x3F, 0x33, 0x3F, 0x1E, 0x0C,
    0x3F, 0x3E, 0x7E, 0x7E, 0x18, 0x70, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x0E, 0x18, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7E, 0x00, 0x00, 0x3E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x60, 0x00, 0x06, 0x00, 0x00, 0x60, 0x00, 0x1E, 0x00, 0x00, 0x08, 0x66, 0x08,
    0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x54, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0x00, 0x06, 0x00, 0x00, 0x60, 0x00, 0x1C, 0x00, 0x00, 0x08, 0x66, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x38, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const Fonthead fnt_gr_8x16 = {
    1,  /* font_id */
    10,  /* point */
    "8x16 system font",  /*   BYTE name[32]     */
    0,  /* first_ade */
    255,  /* last_ade */
    13,  /* top */
    11,  /* ascent */
    8,  /* half */
    2,  /* descent */
    2,  /* bottom */
    7,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    7,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555, /* lighten */
    0x5555, /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_8x16_table,     /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    256,  /* form_width */
    16,  /* form_height */
    0    /* Fonthead * next_font */
};
