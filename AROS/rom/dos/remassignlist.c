/*
    Copyright (C) 1995-1998 AROS - The Amiga Replacement OS
    $Id$

    Desc: RemAssignList() - Remove an entry from a multi-dir assign.
    Lang: english
*/
#include "dos_intern.h"

/*****************************************************************************

    NAME */
#include <proto/dos.h>

	AROS_LH2(LONG, RemAssignList,

/*  SYNOPSIS */
	AROS_LHA(STRPTR, name, D1),
	AROS_LHA(BPTR  , lock, D2),

/*  LOCATION */
	struct DosLibrary *, DOSBase, 106, Dos)

/*  FUNCTION
	Remove an entry from a multi-dir assign. The entry removed will be
	the first one that the SameLock() function called on the 'lock'
	parameter returns that they belong to the same object.

	The entry for this lock will be remove from the lock, and the
	lock for the entry in the list will be unlocked.

    INPUTS
	name    -   Name of the device to remove lock from. This should
		    not contain the trailing ':'.
	lock    -   Lock on the object to remove from the list.

    RESULT
	success -   Have we actually succeeded

    NOTES

    EXAMPLE

    BUGS
	If this is the first lock in a list, this will not set
	dol_Device/dol_Unit correctly. This will be fixed shortly.

    SEE ALSO

    INTERNALS

    HISTORY
	27-11-96    digulla automatically created from
			    dos_lib.fd and clib/dos_protos.h

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct DosLibrary *,DOSBase)

    struct DosList *dl = NULL;
    BPTR lck2;
    BOOL res = DOSFALSE;

    dl = LockDosList(LDF_ASSIGNS|LDF_WRITE);
    while(dl = FindDosEntry(dl, name, LDF_ASSIGNS))
    {
	struct AssignList *al, *lastal;

	al = dl->dol_misc.dol_assign.dol_List;

	/*
	    We have a matching element, lets find the correct
	    member to remove. Initially check the inline lock.
	*/

	if(SameLock(dl->dol_Lock, lock) == LOCK_SAME)
	{
	    /*
		This is a bit tricky, me move the first element
		in the list to the header
	    */
	    dol->dol_misc.dol_assign.dol_List = al->al_Next;
	    UnLock(dol->dol_Lock);
	    dol->dol_Lock = al->al_Lock;
	    FreeVec(al);
	    res = DOSTRUE;
	}
	else
	{
	    while(al)
	    {
		if(SameLock(al->al_Lock, lock) == LOCK_SAME)
		{
		    /* Remove this element. Singly linked list */
		    remal->al_Next = al->al_Next;
		    UnLock(al->al_Lock);
		    FreeVec(al);
		    al = NULL;
		    res = DOSTRUE;
		}
		else
		{
		    lastal = al;
		    al = al->al_Next);
		}
	    }
	} /* in the assignlist */

    } /* the assign exists */
    UnLockDosList(LDF_ASSIGNS|LDF_WRITE);

    return res;

    AROS_LIBFUNC_EXIT
} /* RemAssignList */
