/*
    (C) 1995-96 AROS - The Amiga Replacement OS
    $Id$
    $Log$
    Revision 1.2  1996/08/01 17:27:03  digulla
    Added copyright notics and made headers conform

    Desc:
    Lang: english
*/
#include <exec/execbase.h>
#include <aros/libcall.h>
#include "machine.h"

static void KillCurrentTask(void);
void TrapHandler(void);

/*****************************************************************************

    NAME */
	#include <clib/exec_protos.h>

	__AROS_LH3(APTR, AddTask,

/*  SYNOPSIS */
	__AROS_LA(struct Task *,     task,      A1),
	__AROS_LA(APTR,              initialPC, A2),
	__AROS_LA(APTR,              finalPC,   A3),

/*  LOCATION */
	struct ExecBase *, SysBase, 47, Exec)

/*  FUNCTION
	Add a new task to the system. If the new task has the highest
	priority of all and task switches are allowed it will be started
	immediately.
	Certain task fields should be intitialized and a stack must be
	allocated before calling this function. tc_SPReg will be used as the
	starting location for the stack pointer, i.e. a part of the stack can
	be reserved to pass the task some initial arguments.
	Memory can be added to the tc_MemEntry list and will be freed when the
	task dies. The new task's registers are set to 0.

    INPUTS
	task	  - Pointer to task structure.
	initialPC - Entry point for the new task.
	finalPC   - Routine that is called if the initialPC() function returns.
		    A NULL pointer installs the default finalizer.

    RESULT
	The address of the new task or NULL if the operation failed (can only
	happen with TF_ETASK set - currenty not implemented).

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
	RemTask()

    INTERNALS

    HISTORY

******************************************************************************/
{
    __AROS_FUNC_INIT

    APTR sp;

    /* Set node type to NT_TASK if not set to something else. */
    if(!task->tc_Node.ln_Type)
	task->tc_Node.ln_Type=NT_TASK;

    /* Sigh - you should provide a name for your task. */
    if(task->tc_Node.ln_Name==NULL)
	task->tc_Node.ln_Name="unknown task";

    /* This is moved into SysBase at the tasks's startup */
    task->tc_IDNestCnt=-1;

    /* Signals default to all system signals allocated. */
    if(task->tc_SigAlloc==0)
	task->tc_SigAlloc=0xffff;

    /* Currently only used for segmentation violation */
    if(task->tc_TrapCode==NULL)
	task->tc_TrapCode=&TrapHandler;

    /* Get new stackpointer. */
    sp=task->tc_SPReg;
    if(task->tc_SPReg==NULL)
#if STACK_GROWS_DOWNWARDS
	sp=(UBYTE *)task->tc_SPUpper-SP_OFFSET;
#else
	sp=(UBYTE *)task->tc_SPLower-SP_OFFSET;
#endif

    /* Default finalizer? */
    if(finalPC==NULL)
	finalPC=&KillCurrentTask;

    /* Init new context. */
    sp=PrepareContext(sp,initialPC,finalPC);

    /* store sp */
    task->tc_SPReg=sp;

    /* Set the task flags for switch and launch. */
    if(task->tc_Switch)
	task->tc_Flags|=TF_SWITCH;

    if(task->tc_Launch)
	task->tc_Flags|=TF_LAUNCH;

    /* tc_MemEntry _must_ already be set. */

    /*
	Protect the task lists. This must be done with Disable() because
	of Signal() which is usable from interrupts and may change those
	lists.
     */
    Disable();

    /* Add the new task to the ready list. */
    task->tc_State=TS_READY;
    Enqueue(&SysBase->TaskReady,&task->tc_Node);

    /*
	Determine if a task switch is necessary. (If the new task has a
	higher priority than the current one and the current one
	is still active.) If the current task isn't of type TS_RUN it
	is already gone.
    */
    if(task->tc_Node.ln_Pri>SysBase->ThisTask->tc_Node.ln_Pri&&
       SysBase->ThisTask->tc_State==TS_RUN)
    {
	/* Are taskswitches allowed? (Don't count own Disable() here) */
	if(SysBase->TDNestCnt>=0||SysBase->IDNestCnt>0)
	    /* No. Store it for later. */
	    SysBase->AttnResched|=0x80;
	else
	{
	    /* Switches are allowed. Move the current task away. */
	    SysBase->ThisTask->tc_State=TS_READY;
	    Enqueue(&SysBase->TaskReady,&SysBase->ThisTask->tc_Node);

	    /* And force a rescedule. */
	    Switch();
	}
    }

    Enable();

    return task;
    __AROS_FUNC_EXIT
}

/* Default finalizer. */
static void KillCurrentTask(void)
{
    /* I need the global SysBase variable here - there's no local way to get it. */
    extern struct ExecBase *SysBase;

    /* Get rid of current task. */
    RemTask(SysBase->ThisTask);
}
