/*
    (C) 1995-97 AROS - The Amiga Research OS
    $Id$

    Desc: 
    Lang: english
*/

#include <exec/memory.h>
#include <exec/tasks.h>
#include <exec/execbase.h>
#include <proto/exec.h>
#include <dos/dosextens.h>
#include <proto/dos.h>
#include <aros/machine.h>

static const char version[] = "$VER: tasklist 41.1 (14.3.1997)\n";

struct task
{
    STRPTR name;
    APTR address;
    WORD type;
    WORD state;
    IPTR stacksize;
    IPTR stackused;
};

static int addtask(struct Task *task, struct task **t, STRPTR *e)
{
    STRPTR s1,s2;
    (*t)->address=task;
    (*t)->type=task->tc_Node.ln_Type;
    (*t)->state=task->tc_State;
    (*t)->stacksize=(STRPTR)task->tc_SPUpper-(STRPTR)task->tc_SPLower;
#if AROS_STACK_GROWS_DOWNWARDS
    (*t)->stackused=(STRPTR)task->tc_SPUpper-SP_OFFSET-(STRPTR)task->tc_SPReg;
#else
    (*t)->stackused=(STRPTR)task->tc_SPReg-SP_OFFSET-(STRPTR)task->tc_SPLower;
#endif
    if(task->tc_State==TS_RUN)
        /* The tc_SPReg for the actual process is invalid
           if it had no context switch yet */
        (*t)->stackused=0;
    s1=task->tc_Node.ln_Name;
    if(task->tc_Node.ln_Type==NT_PROCESS&&((struct Process *)task)->pr_CLI)
    {
#warning TODO: Use cli_CommandName field for the name
        (*t)->type=-1;
    }
    if(s1!=NULL)
    {
        s2=s1;
        while(*s2++)
            ;
        while(s2>s1)
        {
            if(*e<=(STRPTR)t)
                return 0;
            *--(*e)=*--s2;
        }
    }
    if((STRPTR)(*t+1)>*e)
        return 0;
    (*t)->name=*e;
    ++*t;
    return 1;
}

static int fillbuffer(struct task **buffer, IPTR size)
{
    STRPTR end=(STRPTR)*buffer+size;
    struct Task *task;
    Disable();
    if(!addtask(SysBase->ThisTask,buffer,&end))
    {
        Enable();
        return 0;
    }
    for(task=(struct Task *)SysBase->TaskReady.lh_Head;
        task->tc_Node.ln_Succ!=NULL;
        task=(struct Task *)task->tc_Node.ln_Succ)
        if(!addtask(task,buffer,&end))
        {
            Enable();
            return 0;
        }
    for(task=(struct Task *)SysBase->TaskWait.lh_Head;
        task->tc_Node.ln_Succ!=NULL;
        task=(struct Task *)task->tc_Node.ln_Succ)
        if(!addtask(task,buffer,&end))
        {
            Enable();
            return 0;
        }
    Enable();
    return 1;
}

int main(int argc, char *argv[])
{
    IPTR size;
    struct task *buffer,*tasks,*tasks2;
    for(size=2048;;size+=2048)
    {
        buffer=AllocVec(size,MEMF_ANY);
        if(buffer==NULL)
        {
            FPuts(Output(),"Not Enough memory for task buffer\n");
            return 20;
        }
        tasks=buffer;
        if(fillbuffer(&tasks,size))
        {
            FPuts(Output(),"address\t\ttype\tstate\tstack\tused\tname\n");
            for(tasks2=buffer;tasks2<tasks;tasks2++)
            {
                IPTR args[6];
                args[0]=(IPTR)tasks2->address;
                args[1]=(IPTR)(tasks2->type==NT_TASK?"task":
                	       tasks2->type==NT_PROCESS?"process":"CLI");
                args[2]=(IPTR)(tasks2->state==TS_RUN?"running":
                	       tasks2->state==TS_READY?"ready":"waiting");
                args[3]=tasks2->stacksize;
                args[4]=tasks2->stackused;
                args[5]=tasks2->name!=NULL?(IPTR)tasks2->name:0;
                VPrintf("0x%08.lx\t%s\t%s\t%ld\t%ld\t%s\n",args);
            }
            FreeVec(buffer);
            return 0; 
        }
        FreeVec(buffer);
    }
}