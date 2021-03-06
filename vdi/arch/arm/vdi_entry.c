/*
 * entry.S - Front end of the screen driver and mouse stuff
 *
 * Copyright 1999 Caldera, Inc. and Authors:
 * Copyright 2004-2017 The EmuTOS development team
 * Copyright      Steve Cavender
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */



#include "config.h"
#include "portab.h"
#include "intmath.h"
#include "vdi_defs.h"
#include "../bios/lineavars.h"
#include "string.h"
#include "kprint.h"

extern void screen(void);


#define ptsin_size 512          // max. # of elements allowed for PTSIN array
#define ptsin_max  ptsin_size/2 // max. # of coordinate pairs for PTSIN array
#define W_1        2            // byte offset to first element of an array
#define W_3        6            // byte offset to third element of an array



// We copy the param block from the user into a global linea variable
static WORD lcl_ptsin[ptsin_size];

/* Standard callig conventions on ARM pass params in registers, so we don't
 * have to code GSX_ENTRY in assembler. */

int GSX_ENTRY(int op, VDIPB* paramblock)
{
    int i;
    /* Make a local copy of the array pointers in the user's parameter block. */
    linea_vars.local_pb.contrl = paramblock->contrl;
    linea_vars.local_pb.intin = paramblock->intin;
    linea_vars.local_pb.intout = paramblock->intout;
    linea_vars.local_pb.ptsout = paramblock->ptsout;
    linea_vars.local_pb.ptsin = lcl_ptsin;

    WORD save_ptsin_count = paramblock->contrl->nptsin;
    WORD save_intin_count = paramblock->contrl->nintin;

    if (paramblock->contrl->nptsin <= 0)
    {
        paramblock->contrl->nptsin = 0;
    }
    else
    {
        if(paramblock->contrl->nptsin > ptsin_max)
        {
            paramblock->contrl->nptsin = ptsin_max;
        }
        for (i = 0; i < paramblock->contrl->nptsin*2; i++)
        {
            lcl_ptsin[i] = paramblock->ptsin[i];
        }
    }
    if (paramblock->contrl->nintin <= 0)
    {
        paramblock->contrl->nintin = 0;
    }

    /* Call screen which contains all the C routines for the SCREEN DRIVER. */
    screen();

    // Restore ptsin and intin counts to the unsanitized sizes
    paramblock->contrl->nptsin = save_ptsin_count;
    paramblock->contrl->nintin = save_intin_count;

    return flip_y;
}

typedef struct {
    int x; int y;
} IntPoint;

static void inline scrn_clip(IntPoint* point)
{
    point->x = point->x < 0 ? 0 : point->x > xres ? xres : point->x ;
    point->y = point->y < 0 ? 0 : point->y > yres ? yres : point->y ;
}


/*
 * _mouse_int - Mouse interrupt routine
 * buf: address of mouse buffer from aciavecs.S
 */
void mouse_int(UBYTE *buf)
{
    WORD pressed, previous;
    BYTE delta_x, delta_y;
    IntPoint point;
    void (*user_but)(WORD) = linea_vars.user_but;
    void (*user_mot)(ULONG) = (void (*)(LONG))linea_vars.user_mot;
    void (*user_cur)(WORD,WORD) = linea_vars.user_cur;

    if(linea_vars.mouse_flag) // If we are in a show/hide operation
    {
        return;              // just exit.
    }
    if ((buf[0] & 0xf8) == 0xf8) // relative mouse packet header?
    {
        pressed = (buf[0] & 2) >> 1 | (buf[0] & 1) << 1;
        previous = linea_vars.cur_ms_stat & 3;
        if (pressed != previous)
        {
            pressed |= (linea_vars.MOUSE_BT & ~3); // keep additional mouse button states
            linea_vars.MOUSE_BT = pressed;
            user_but(pressed);
            pressed |= ((previous ^ pressed) << 6); // compute which buttons have changed and put deltas in bits 6 & 7
            linea_vars.cur_ms_stat = pressed;
        }

        delta_x = buf[1];
        delta_y = buf[2];
        if (delta_x || delta_y)
        {
            linea_vars.cur_ms_stat |= ~(1<<5);  // Set motion status
            point.x = linea_vars.GCURX + delta_x;
            point.y = linea_vars.GCURY + delta_y;
            scrn_clip(&point);
            user_mot(MAKE_ULONG(point.x,point.y));                   // call user to modify x,y
            scrn_clip(&point);
            linea_vars.GCURX = point.x;
            linea_vars.GCURY = point.y;
            user_cur(point.x, point.y);         // call user to draw cursor
        }
        else
        {
            linea_vars.cur_ms_stat &= ~(1<<5); // Clear motion status
        }
    }
}

/*
 * _wheel_int - Mouse wheel interrupt routine
 * buf: address of IKBD status packet buffer from aciavecs.S
 * TODO
 */
void wheel_int(UBYTE *buf)
{
}
