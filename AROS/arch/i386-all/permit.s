#    (C) 1995-96 AROS - The Amiga Replacement OS
#    $Id$
#    $Log$
#    Revision 1.3  1996/08/13 14:03:19  digulla
#    Added standard headers
#
#    Revision 1.2  1996/08/01 17:41:25	digulla
#    Added standard header for all files
#
#    Desc:
#    Lang:

#*****************************************************************************
#
#   NAME
#	__AROS_LH0(void, Permit,
#
#   LOCATION
#	struct ExecBase *, SysBase, 23, Exec)
#
#   FUNCTION
#
#   INPUTS
#
#   RESULT
#
#   NOTES
#
#   EXAMPLE
#
#   BUGS
#
#   SEE ALSO
#
#   INTERNALS
#
#   HISTORY
#
#******************************************************************************
	IDNestCnt   =	302
	AttnResched =	306
	TDNestCnt   =	303
	Switch	    =	-30

	.text
	.align	16
	.globl	Exec_Permit
	.type	Exec_Permit,@function
Exec_Permit:
	/* Preserve all registers */
	pushl	%edx
	pushl	%eax

	/* Get SysBase */
	movl	12(%esp),%edx

	/* Decrement and test TDNestCnt */
	decb	TDNestCnt(%edx)
	jge	noswch

	/* Is there a delayed switch pending and are taskswitches allowed? */
	cmpb	$0,AttnResched(%edx)
	jge	noswch
	cmpb	$0,IDNestCnt(%edx)
	jge	noswch

	/* Clear delayed switch bit and do the delayed switch */
	andb	$127,AttnResched(%edx)
	leal	Switch(%edx),%eax
	pushl	%edx
	call	*%eax
	addl	$4,%esp

	/* Restore registers and return */
noswch: popl	%eax
	popl	%edx
	ret
