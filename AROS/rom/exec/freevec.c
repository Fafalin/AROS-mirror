/*
    (C) 1995-96 AROS - The Amiga Replacement OS
    $Id$

    Desc: Free memory allocated by AllocVec().
    Lang: english
*/
#include "exec_intern.h"
#include <aros/libcall.h>
#include <aros/machine.h>
#include "memory.h"
#include <proto/exec.h>

/*****************************************************************************

    NAME */

	AROS_LH1(void, FreeVec,

/*  SYNOPSIS */
	AROS_LHA(APTR, memoryBlock, A1),

/*  LOCATION */
	struct ExecBase *, SysBase, 115, Exec)

/*  FUNCTION
	Free some memory allocated with allocvec.

    INPUTS
	memoryBlock - The memory to be freed. It is safe to free a NULL pointer.

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	AllocVec()

    INTERNALS

    HISTORY
	15-10-95    created by m. fleischer

******************************************************************************/
{
    AROS_LIBFUNC_INIT

    /* If there's nothing to free do nothing. */
    if (memoryBlock != NULL)
    {
	*(UBYTE **)&memoryBlock -= AROS_ALIGN(sizeof(ULONG));
	FreeMem (memoryBlock, *((ULONG *)memoryBlock));
    }
    AROS_LIBFUNC_EXIT
} /* FreeVec */
