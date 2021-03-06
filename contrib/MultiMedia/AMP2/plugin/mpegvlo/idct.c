/*
 *
 * idct.c LORES
 *
 */

/**********************************************************/
/* inverse two dimensional DCT, Chen-Wang algorithm */
/* (cf. IEEE ASSP-32, pp. 803-816, Aug. 1984) */
/* 32-bit integer arithmetic (8 bit coefficients) */
/* 11 mults, 29 adds per DCT */
/* sE, 18.8.91 */
/**********************************************************/
/* coefficients extended to 12 bit for IEEE1180-1990 */
/* compliance sE, 2.1.94 */
/**********************************************************/

/* this code assumes >> to be a two's-complement arithmetic */
/* right shift: (-2)>>1 == -1 , (-3)>>1 == -2 */

#include <stdio.h>
#include <inttypes.h>

#include "mpeg2_internal.h"

#define W1 2841 /* 2048*sqrt (2)*cos (1*pi/16) */
#define W2 2676 /* 2048*sqrt (2)*cos (2*pi/16) */
#define W3 2408 /* 2048*sqrt (2)*cos (3*pi/16) */
#define W5 1609 /* 2048*sqrt (2)*cos (5*pi/16) */
#define W6 1108 /* 2048*sqrt (2)*cos (6*pi/16) */
#define W7 565  /* 2048*sqrt (2)*cos (7*pi/16) */

/* idct main entry point  */
static uint8_t clip_lut[1024] ATTR_ALIGN(32);
#define CLIP(i) ((clip_lut+384)[ (i)])

void idct_init (void)
{
    int i;

    for (i = -384; i < 640; i++)
        clip_lut[i+384] = (i < 0) ? 0 : ((i > 255) ? 255 : i);
}

/* row (horizontal) IDCT
 *
 * 7 pi 1
 * dst[k] = sum c[l] * src[l] * cos ( -- * ( k + - ) * l )
 * l=0 8 2
 *
 * where: c[0] = 128
 * c[1..7] = 128*sqrt (2)
 */

static void inline idct_row (int16_t * block)
{
    int x0, x1, x2, x3, x4, x5, x6, x7, x8;

    x1 = block[4] << 11;
    x2 = block[6];
    x3 = block[2];
    x4 = block[1];
    x5 = block[7];
    x6 = block[5];
    x7 = block[3];

    /* shortcut */
    if (! (x1 | x2 | x3 | x4 | x5 | x6 | x7 )) {
     block[0] = block[1] = block[2] = block[3] = block[4] =
         block[5] = block[6] = block[7] = block[0]<<3;
     return;
    }

    x0 = (block[0] << 11) + 128; /* for proper rounding in the fourth stage */

    /* first stage */
    x8 = W7 * (x4 + x5);
    x4 = x8 + (W1 - W7) * x4;
    x5 = x8 - (W1 + W7) * x5;
    x8 = W3 * (x6 + x7);
    x6 = x8 - (W3 - W5) * x6;
    x7 = x8 - (W3 + W5) * x7;
 
    /* second stage */
    x8 = x0 + x1;
    x0 -= x1;
    x1 = W6 * (x3 + x2);
    x2 = x1 - (W2 + W6) * x2;
    x3 = x1 + (W2 - W6) * x3;
    x1 = x4 + x6;
    x4 -= x6;
    x6 = x5 + x7;
    x5 -= x7;
 
    /* third stage */
    x7 = x8 + x3;
    x8 -= x3;
    x3 = x0 + x2;
    x0 -= x2;
    x2 = (181 * (x4 + x5) + 128) >> 8;
    x4 = (181 * (x4 - x5) + 128) >> 8;
 
    /* fourth stage */
    block[0] = (x7 + x1) >> 8;
    block[1] = (x3 + x2) >> 8;
    block[2] = (x0 + x4) >> 8;
    block[3] = (x8 + x6) >> 8;
    block[4] = (x8 - x6) >> 8;
    block[5] = (x0 - x4) >> 8;
    block[6] = (x3 - x2) >> 8;
    block[7] = (x7 - x1) >> 8;
}

/* column (vertical) IDCT
 *
 * 7 pi 1
 * dst[8*k] = sum c[l] * src[8*l] * cos ( -- * ( k + - ) * l )
 * l=0 8 2
 *
 * where: c[0] = 1/1024
 * c[1..7] = (1/1024)*sqrt (2)
 */

static void inline idct_col (int16_t *block)
{
    int x0, x1, x2, x3, x4, x5, x6, x7, x8;

    /* shortcut */
    x1 = block [8*4] << 8;
    x2 = block [8*6];
    x3 = block [8*2];
    x4 = block [8*1];
    x5 = block [8*7];
    x6 = block [8*5];
    x7 = block [8*3];

    /* shortcut */
    if (! (x1 | x2 | x3 | x4 | x5 | x6 | x7 )) {
     block[8*0] = block[8*1] = block[8*2] = block[8*3] = block[8*4] =
         block[8*5] = block[8*6] = block[8*7] = (block[8*0] + 32) >> 6;
     return;
    }

    x0 = (block[8*0] << 8) + 8192;

    /* first stage */
    x8 = W7 * (x4 + x5) + 4;
    x4 = (x8 + (W1 - W7) * x4) >> 3;
    x5 = (x8 - (W1 + W7) * x5) >> 3;
    x8 = W3 * (x6 + x7) + 4;
    x6 = (x8 - (W3 - W5) * x6) >> 3;
    x7 = (x8 - (W3 + W5) * x7) >> 3;
 
    /* second stage */
    x8 = x0 + x1;
    x0 -= x1;
    x1 = W6 * (x3 + x2) + 4;
    x2 = (x1 - (W2 + W6) * x2) >> 3;
    x3 = (x1 + (W2 - W6) * x3) >> 3;
    x1 = x4 + x6;
    x4 -= x6;
    x6 = x5 + x7;
    x5 -= x7;
 
    /* third stage */
    x7 = x8 + x3;
    x8 -= x3;
    x3 = x0 + x2;
    x0 -= x2;
    x2 = (181 * (x4 + x5) + 128) >> 8;
    x4 = (181 * (x4 - x5) + 128) >> 8;
 
    /* fourth stage */
    block[8*0] = (x7 + x1) >> 14;
    block[8*1] = (x3 + x2) >> 14;
    block[8*2] = (x0 + x4) >> 14;
    block[8*3] = (x8 + x6) >> 14;
    block[8*4] = (x8 - x6) >> 14;
    block[8*5] = (x0 - x4) >> 14;
    block[8*6] = (x3 - x2) >> 14;
    block[8*7] = (x7 - x1) >> 14;
}

void idct_block_copy (int16_t * block, uint8_t * dest, int stride, int full)
{
    int i;

    for (i = 0; i < 8; i++)
     idct_row (block + 8 * i);

    for (i = 0; i < 8; i+=2)
     idct_col (block + i);

    i = (4 << full);
    do {
     dest[0] = CLIP (block[0]);
     dest[1] = CLIP (block[2]);
     dest[2] = CLIP (block[4]);
     dest[3] = CLIP (block[6]);
     dest += stride;
     block += (16 >> full);
    } while (--i);
}

void idct_block_add (int16_t * block, uint8_t * dest, int stride, int full)
{
    int i;

    for (i = 0; i < 8; i++)
     idct_row (block + 8 * i);

    for (i = 0; i < 8; i+=2)
     idct_col (block + i);

    i = (4 << full);
    do {
     dest[0] = CLIP (block[0] + dest[0]);
     dest[1] = CLIP (block[2] + dest[1]);
     dest[2] = CLIP (block[4] + dest[2]);
     dest[3] = CLIP (block[6] + dest[3]);
     dest += stride;
     block += (16 >> full);
    } while (--i);
}
