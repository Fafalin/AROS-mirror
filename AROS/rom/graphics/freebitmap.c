/*
    (C) 1995-96 AROS - The Amiga Replacement OS
    $Id$

    Desc: Free the memory occupied by a BitMap.
    Lang: english
*/
#include <exec/memory.h>
#include <proto/exec.h>
#include "graphics_intern.h"

/*****************************************************************************

    NAME */
#include <graphics/gfx.h>
#include <proto/graphics.h>

	AROS_LH1(void, FreeBitMap,

/*  SYNOPSIS */
	AROS_LHA(struct BitMap *, bm, A0),

/*  LOCATION */
	struct GfxBase *, GfxBase, 154, Graphics)

/*  FUNCTION
	Returns the memory occupied by the BitMap to the system.

    INPUTS
	bm - The result of AllocBitMap(). Must be non-NULL.

    RESULT
	None.

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	AllocBitMap(), AllocRaster(), FreeRaster()

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct GfxBase *,GfxBase)

    if (bm->Pad != 0)
    {
	driver_FreeBitMap (bm, GfxBase);
    }
    else
    {
	ULONG plane;
	ULONG width;

	width = bm->BytesPerRow * 8;

	for (plane=0; plane<bm->Depth; plane ++)
	    if (bm->Planes[plane])
		FreeRaster (bm->Planes[plane], width, bm->Rows);

	FreeMem (bm, sizeof (struct BitMap));
    }

    AROS_LIBFUNC_EXIT
} /* FreeBitMap */
