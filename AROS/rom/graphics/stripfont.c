/*
    (C) 1997 AROS - The Amiga Research OS
    $Id$

    Desc: Graphics function StripFont()
    Lang: english
*/
#include <proto/graphics.h>
#include <proto/exec.h>
#include <proto/utility.h>
#include "graphics_intern.h"

/*****************************************************************************

    NAME */
#include <clib/graphics_protos.h>

	AROS_LH1(void, StripFont,

/*  SYNOPSIS */
	AROS_LHA(struct TextFont *, font, A0),

/*  LOCATION */
	struct GfxBase *, GfxBase, 137, Graphics)

/*  FUNCTION
		Removes a TextFontExtension from a font.

    INPUTS
    	font	- font to remove extension from.

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
		ExtendFont(), ExtendFontTags()
    INTERNALS

    HISTORY
	27-11-96    digulla automatically created from
			    graphics_lib.fd and clib/graphics_protos.h

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct GfxBase *,GfxBase)

	struct TextFontExtension *tfe;
	
	/* Valid parameter ? */
	if (font == NULL)
		return;
		
	/* Forbid() this early in case someon else calls StripFont()
	   on the font. (We might risk to find an extension, but when
	   we are to free it, it's no longer there.
	*/
	  
	Forbid();

	/* Does the font have an extension ? */
	if (ExtendFont(font, NULL))
	{
		tfe = (struct TextFontExtension *)font->tf_Extension;
		font->tf_Extension = NULL;
		/* Font is not tagged anymore */
		font->tf_Style ^= FSF_TAGGED;
		
	
		
		FreeTagItems(tfe->tfe_Tags);
		FreeMem(tfe, sizeof (struct TextFontExtension));
		
	}

	Permit();

	return;	

    AROS_LIBFUNC_EXIT
} /* StripFont */
