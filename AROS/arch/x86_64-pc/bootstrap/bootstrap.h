#ifndef _BOOTSTRAP_H
#define _BOOTSTRAP_H

/*
    Copyright (C) 2006 The AROS Development Team. All rights reserved.
    $Id$
*/

#define NULL ((void*)0)
/*
 
struct KernelMessage {
    struct { void *low,*high; } GRUBData;
    
    struct { void *low,*high; } kernelBase;
    struct { void *low,*high; } kernelLowest;
    struct { void *low,*high; } kernelHighest;  
    struct { void *low,*high; } kernelBSS;     
    struct { void *low,*high; } GDT;
    struct { void *low,*high; } IDT;
    struct { void *low,*high; } PL4;  
    
    struct { void *low,*high; } vbeModeInfo;
    struct { void *low,*high; } vbeControllerInfo;
    
};
*/

#ifdef DEBUG
#define D(x)    x
#else
#define D(x)    /* eps */
#endif


struct module {
    const char *name;
    void *address;
};

//extern void *_binary_aros_o_start;
extern void *_binary_vesa_start;
extern unsigned long _binary_vesa_size;

#if defined(__i386__) || defined(__x86_64__)
    #define LONG2BE(v)  ({ unsigned int __v32; asm volatile("bswap %0":"=a"(__v32):"0"((v))); __v32; })
#else
    #define LONG2BE(v)  (v)
#endif

#endif // _BOOTSTRAP_H

