/*
  (C) Copyright 2001,2006,
  International Business Machines Corporation,
  Sony Computer Entertainment, Incorporated,
  Toshiba Corporation,

  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.
    * Neither the names of the copyright holders nor the names of their
  contributors may be used to endorse or promote products derived from this
  software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
  TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
  PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
  OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef _LROUNDF_H_
#define _LROUNDF_H_	1

#include "newlib/libm/machine/spu/headers/spu_intrinsics.h"
#include "newlib/libm/machine/spu/headers/headers/vec_literal.h"

/* Round the input to the nearest integer value, rounding halfway cases
 * away from zero. No special handling is performed when values are
 * outside the 32-bit range.
 */
static __inline long int _lroundf(float x)
{
  vec_int4 out;
  vec_float4 in, addend;

  in = spu_promote(x, 0);

  /* Add signed 0.5 */
  addend = spu_sel(VEC_SPLAT_F32(0.5f), in, VEC_SPLAT_U32(0x80000000));
  out = spu_convts(spu_add(in, addend), 0);

  return ((long int)spu_extract(out, 0));
}
#endif /* _LROUNDF_H_ */
