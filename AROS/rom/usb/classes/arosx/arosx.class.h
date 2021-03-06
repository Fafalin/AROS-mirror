#ifndef AROSX_CLASS_H
#define AROSX_CLASS_H

#include "common.h"

#include <devices/keyboard.h>
#include <libraries/gadtools.h>

#include <devices/usb_audio.h>

#include <string.h>
#include <stddef.h>
#include <stdio.h>

#include "arosx.h"

static const STRPTR libname = MOD_NAME_STRING;

struct NepClassHid * usbAttemptInterfaceBinding(struct NepHidBase *nh, struct PsdInterface *pif);
void usbReleaseInterfaceBinding(struct NepHidBase *nh, struct NepClassHid *nch);

void nParseMsg(struct NepClassHid *nch, UBYTE *buf, ULONG len);

struct NepClassHid * nAllocHid(void);
void nFreeHid(struct NepClassHid *nch);

LONG nOpenCfgWindow(struct NepClassHid *nch);

void nGUITaskCleanup(struct NepClassHid *nch);

AROS_UFP0(void, nHidTask);
AROS_UFP0(void, nGUITask);

void nDebugMem(struct Library *ps, UBYTE *rptr, ULONG rptlen);

#endif /* AROSX_CLASS_H */
