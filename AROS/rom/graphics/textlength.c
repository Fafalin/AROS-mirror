/*
    (C) 1995 AROS - The Amiga Research OS
    $Id$	 $Log

    Desc: Graphics function TextLength()
    Lang: english
*/
#include "graphics_intern.h"

/*****************************************************************************

    NAME */
#include <graphics/rastport.h>
#include <proto/graphics.h>

	AROS_LH3(WORD, TextLength,

/*  SYNOPSIS */
	AROS_LHA(struct RastPort *, rp, A1),
	AROS_LHA(STRPTR           , string, A0),
	AROS_LHA(ULONG            , count, D0),

/*  LOCATION */
	struct GfxBase *, GfxBase, 9, Graphics)

/*  FUNCTION

    INPUTS

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO

    INTERNALS

    HISTORY
	29-10-95    digulla automatically created from
			    graphics_lib.fd and clib/graphics_protos.h

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct GfxBase *,GfxBase)

    return driver_TextLength (rp, string, count, GfxBase);

    AROS_LIBFUNC_EXIT
} /* TextLength */
