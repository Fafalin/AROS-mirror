/*
    (C) 1995-97 AROS - The Amiga Research OS
    $Id$
*/
#ifndef PROTO_NONVOLATILE_H
#define PROTO_NONVOLATILE_H

#ifndef AROS_SYSTEM_H
#include <aros/system.h>
#endif

#include <clib/nonvolatile_protos.h>

#if defined(_AMIGA) && defined(__GNUC__)
#include <inline/nonvolatile.h>
#else
#include <defines/nonvolatile.h>
#endif

#endif /* PROTO_NONVOLATILE_H */
