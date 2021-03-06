/*
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions. No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 */

/*
** Copyright (C) 2006-2008 Analog Devices Inc., All Rights Reserved.
**
************************************************************************************
**
** This include file contains a list of macro "defines" to enable the programmer
** to use symbolic names for the ADSP-BF512 peripherals.
**
************************************************************************************
** System MMR Register Map
************************************************************************************/

#ifndef _CDEF_BF512_H
#define _CDEF_BF512_H

/* include all Core registers and bit definitions */
#include "libgloss/bfin/include/defBF512.h"

/* include core specific register pointer definitions */
#include "libgloss/bfin/include/cdef_LPBlackfin.h"

/* SYSTEM & MMR ADDRESS DEFINITIONS FOR ADSP-BF512 */

/* include cdefBF51x_base.h for the set of #defines that are common to all ADSP-BF51x processors */
#include "libgloss/bfin/include/cdefBF51x_base.h"

#endif /* _CDEF_BF512_H */
