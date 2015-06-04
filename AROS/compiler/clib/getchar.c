/*
    Copyright � 1995-2012, The AROS Development Team. All rights reserved.
    $Id$

    C99 function getchar().
*/

#include <dos/dos.h>
#include <dos/dosextens.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include "__fdesc.h"

#define _STDIO_H_NOMACRO
#include <stdio.h>

/*****************************************************************************

    NAME */
#include <stdio.h>

	int getchar (void)

/*  SYNOPSIS */

/*  FUNCTION
	Read one character from the standard input stream. If there
        is no character available or an error occurred, the function
        returns EOF.

    INPUTS

    RESULT
	The character read or EOF on end of file or error.

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	fgetc(), getc(), fputc(), putc()

    INTERNALS

******************************************************************************/
{
    return fgetc(stdin);
} /* getc */
