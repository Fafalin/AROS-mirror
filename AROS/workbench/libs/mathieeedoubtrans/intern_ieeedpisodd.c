/*
    (C) 1995-97 AROS - The Amiga Research OS
    $Id$

    Desc:
    Lang: english
*/

#include <aros/libcall.h>
#include <proto/mathieeedoubbas.h>
#include <proto/mathieeedoubtrans.h>
#include <proto/exec.h>
#include <exec/types.h>
#include "mathieeedoubtrans_intern.h"


LONG intern_IEEEDPisodd(QUAD fnum)
{
  LONG Exponent = ((Get_High32of64(fnum) & IEEEDPExponent_Mask_Hi) >> 20) - 0x3ff;
  QUAD Mask;
  Set_Value64C(Mask, 0x00100000, 0x0 );
  SHRU64(Mask, Mask, Exponent); /* Mask = Mask >> Exponent*/

  AND64Q(fnum, Mask);
  if (is_neqC(fnum, 0x0, 0x0))
    return TRUE;
  else
    return FALSE;
} /* intern_IEEEDPisodd  */
