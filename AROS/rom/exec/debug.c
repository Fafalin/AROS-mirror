/*
    (C) 1995 AROS - The Amiga Replacement OS
    $Id$

    Desc: Start the internal debugger.
    Lang: english
*/
#include "exec_intern.h"
#include <proto/exec.h>

/*****************************************************************************

    NAME */

	AROS_LH1(void, Debug,

/*  SYNOPSIS */
	AROS_LHA(unsigned long, flags, D0),

/*  LOCATION */
	struct ExecBase *, SysBase, 19, Exec)

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
			    exec_lib.fd and clib/exec_protos.h

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct ExecBase *,SysBase)

    aros_print_not_implemented ("Debug");

    AROS_LIBFUNC_EXIT
} /* Debug */
