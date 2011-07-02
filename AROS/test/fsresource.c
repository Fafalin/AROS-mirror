/*
    Copyright � 1995-2010, The AROS Development Team. All rights reserved.
    $Id: fsresource.c $
*/

#include <proto/exec.h>
#include <stdio.h>

#include <resources/filesysres.h>

static void checkpatch(struct FileSysEntry *fse, UBYTE patchid)
{
    printf ("%c ", (fse->fse_PatchFlags & (1 << patchid)) ? '*' : ' ');
}

int main(int argc, char **argv)
{
    struct FileSysResource *fsr;
    
    fsr = OpenResource(FSRNAME);
    if (fsr) {
    	struct FileSysEntry *fse;
    	WORD cnt;

    	printf("FileSysResource at %p\n", fsr);
    	printf("Creator: '%s'\n", fsr->fsr_Creator);
    	printf("\n");
    	cnt = 0;
    	ForeachNode(&fsr->fsr_FileSysEntries, fse) {
    	    char dostype[5];
    	    WORD i;
    	    printf("FileSysEntry %d at %p\n", cnt++, fse);
	    for (i = 0; i < 4; i++) {
	    	dostype[i] = (fse->fse_DosType >> ((3 - i) * 8)) & 0xff;
		if (dostype[i] < 9)
		    dostype[i] += '0';
		else if (dostype[i] < 32)
		    dostype[i] = '.';
	    }
	    dostype[4] = 0;
    	    printf("DOSType: %08lx (%s)\n", fse->fse_DosType, dostype);
    	    printf("Version: %08lx (%d.%d)\n", fse->fse_Version, fse->fse_Version >> 16, fse->fse_Version & 0xffff);
    	    printf("PatchFlags: %08lx\n", fse->fse_PatchFlags);
    	    checkpatch(fse, FSEB_TYPE);
   	    printf("Type: %08lx\n", fse->fse_Type);
    	    checkpatch(fse, FSEB_TASK);
   	    printf("Task: %08lx\n", fse->fse_Task);
    	    checkpatch(fse, FSEB_LOCK);
   	    printf("Lock: %08lx\n", fse->fse_Lock);
    	    checkpatch(fse, FSEB_HANDLER);
   	    printf("Handler: %08lx\n", fse->fse_Handler);
    	    checkpatch(fse, FSEB_STACKSIZE);
   	    printf("StackSize: %08lx\n", fse->fse_StackSize);
    	    checkpatch(fse, FSEB_PRIORITY);
   	    printf("Priority: %08lx\n", fse->fse_Priority);
    	    checkpatch(fse, FSEB_STARTUP);
   	    printf("Startup: %08lx\n", fse->fse_Startup);
    	    checkpatch(fse, FSEB_SEGLIST);
   	    printf("SegList: %08lx\n", fse->fse_SegList);
    	    checkpatch(fse, FSEB_GLOBALVEC);
   	    printf("GlobalVec: %08lx\n", fse->fse_GlobalVec);
	    printf("\n");
   	}
    } else {
    	printf("FileSystem.resource failed to open!\n");
    }
    return 0;
}
