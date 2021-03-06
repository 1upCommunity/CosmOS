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
#ifndef _CEILF_H_
#define _CEILF_H_	1

#include "newlib/libm/machine/spu/headers/spu_intrinsics.h"
#include "newlib/libm/machine/spu/headers/headers/vec_literal.h"

/*
 * FUNCTION
 *	float _ceilf(float value)
 *
 * DESCRIPTION
 *	The _ceilf routine round the input value "value" upwards to the
 *	nearest integer returning the result as a float. Two forms of the
 *	ceiling function are provided - full range and limited (integer)
 *	range.
 *
 *	The full range form (default) provides ceiling computation on
 *	all IEEE floating point values. The ceiling of NANs remain NANs.
 *	The ceiling of denorms results in zero.
 *
 *	The limited range form (selected by defining CEIL_INTEGER_RANGE)
 *	compute ths ceiling of all floating-point values in the 32-bit
 *	signed integer range. Values outside this range get clamped.
 */

static __inline float _ceilf(float value)
{
#ifdef CEIL_INTEGER_RANGE
  /* 32-BIT INTEGER DYNAMIC RANGE
   */
  union {
    float f;
    signed int i;
    unsigned int ui;
  } bias;

  bias.f = value;

  /* If positive, bias the input value to truncate towards
   * positive infinity, instead of zero.
   */
  bias.ui = ~(unsigned int)(bias.i >> 31) & 0x3F7FFFFF;
  value += bias.f;

  /* Remove fraction bits by casting to an integer and back
   * to a floating-point value.
   */
  return ((float)((int)value));

#else /* !CEIL_INTEGER_RANGE */
  /* FULL FLOATING-POINT RANGE
   */
  vec_int4 exp, shift;
  vec_uint4 mask, frac_mask, addend, insert, pos;
  vec_float4 in, out;
  vec_float4 one = VEC_SPLAT_F32(1.0f);

  in = spu_promote(value, 0);

  /* This function generates the following component
   * based upon the inputs.
   *
   *   mask = bits of the input that need to be replaced.
   *   insert = value of the bits that need to be replaced
   *   addend = value to be added to perform function.
   *
   * These are applied as follows:.
   *
   *   out = ((in & mask) | insert) + addend
   */
  pos = spu_cmpgt((vec_int4)in, -1);
  exp = spu_and(spu_rlmask((vec_int4)in, -23), 0xFF);

  shift = spu_sub(127, exp);

  frac_mask = spu_and(spu_rlmask(VEC_SPLAT_U32(0x7FFFFF), shift),
                      spu_cmpgt((vec_int4)shift, -31));

  mask = spu_orc(frac_mask, spu_cmpgt(exp, 126));

  addend = spu_andc(spu_and(spu_add(mask, 1), pos), spu_cmpeq(spu_and((vec_uint4)in, mask), 0));

  insert = spu_andc(spu_and(pos, (vec_uint4)one),
                    spu_cmpgt((vec_uint4)spu_add(exp, -1), 126));

  out = (vec_float4)spu_add(spu_sel((vec_uint4)in, insert, mask), addend);

  return (spu_extract(out, 0));
#endif /* CEIL_INTEGER_RANGE */
}
#endif /* _CEILF_H_ */
