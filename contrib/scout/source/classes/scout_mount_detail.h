/**
 * Scout - The Amiga System Monitor
 *
 *------------------------------------------------------------------
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *------------------------------------------------------------------
 *
 * @author Andreas Gelhausen
 * @author Richard K�rber <rkoerber@gmx.de>
 */


/* Prototypes for functions defined in
objects/scout_mount_detail.c
 */

#if defined(__AROS__)
    #define MountsDetailWindowObject  BOOPSIOBJMACRO_START(MountsDetailWinClass->mcc_Class)
#else
    #define MountsDetailWindowObject  NewObject(MountsDetailWinClass->mcc_Class, NULL
#endif

APTR MakeMountsDetailWinClass( void );

#ifdef __MORPHOS__
#define min(a,b) ((a < b) ? a : b)
#endif

