/*
    (C) 1995-98 AROS - The Amiga Research OS
    $Id$

    Desc: Graphics function AddVSprite()
    Lang: english
*/
#include <graphics/gels.h>
#include <graphics/rastport.h>
#include "graphics_intern.h"
#include <proto/exec.h>

/*****************************************************************************

    NAME */

	AROS_LH1(void, RemVSprite,

/*  SYNOPSIS */
	AROS_LHA(struct VSprite *, vs, A0),

/*  LOCATION */
	struct GfxBase *, GfxBase, 23, Graphics)

/*  FUNCTION
	The VSprite is unlinked from the gel list.

    INPUTS
	vs = pointer to VSprite to be removed from the gel list

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	InitGels() RemIBob() graphics/gels.h

    INTERNALS
	I don't know whether it is correct to take the VSprite out of the
	ClearPath and DrawPath, but it is implemented that way.

    HISTORY

*****************************************************************************/
{
  AROS_LIBFUNC_INIT
  AROS_LIBBASE_EXT_DECL(struct GfxBase *,GfxBase)

  struct VSprite * Head;
  struct VSprite * Current;

  /* unlink this VSprite */
  vs -> NextVSprite -> PrevVSprite = vs -> PrevVSprite;
  vs -> PrevVSprite -> NextVSprite = vs -> NextVSprite;

  /* look for the head of this list of gels*/
  Head = vs;
  while (NULL != Head -> PrevVSprite )
    Head = Head -> PrevVSprite;

  /* take this VSprite out of the DrawPath and ClearPath */
  Current = Head;
  while (Current != NULL)
  {
    if (Current -> DrawPath == vs)
    {
      Current -> DrawPath = Current -> DrawPath -> DrawPath;
      break;
    }
    else
      Current = Current -> DrawPath;
  }

  Current = Head;
  while (Current != NULL)
  {
    if (Current -> ClearPath == vs)
    {
      Current -> ClearPath = Current -> ClearPath -> ClearPath;
      break;
    }
    else
      Current = Current -> ClearPath;
  }

  AROS_LIBFUNC_EXIT
} /* RemVSprite */
