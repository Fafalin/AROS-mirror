/*
    Copyright (C) 1995-1997 AROS - The Amiga Research OS
    $Id$

    Desc: ReadBattClock() function.
    Lang: english
*/
#include "battclock_intern.h"

/*****************************************************************************

    NAME */
#include <proto/battclock.h>

	AROS_LH0I(ULONG, ReadBattClock,

/*  SYNOPSIS */
	/* void */

/*  LOCATION */
	APTR, BattClockBase, 2, Battclock)

/*  FUNCTION
	Return the value stored in the battery back up clock. This value
	is the number of seconds that have elapsed since midnight on the
	1st of January 1978 (00:00:00 1.1.1978).

	If the value of the battery clock is invalid, then the clock will
	be reset.

    INPUTS

    RESULT
	The number of seconds since 1.1.1978 00:00:00

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	WriteBattClock, ResetBattClock

    INTERNALS

    HISTORY
	27-11-96    digulla automatically created from
			    battclock_lib.fd and clib/battclock_protos.h

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

#warning battclock.resource functionality not added
    return 0;

    AROS_LIBFUNC_EXIT
} /* ReadBattClock */
