#include "newlib/libm/machine/spu/headers/headers/log10d2.h"
#include "newlib/libm/machine/spu/headers/headers/dom_chkd_less_than.h"

static __inline double _log10(double x)
{
  double res;
  vector double vx;
  vector double vc = { 0.0, 0.0 };

  vx = spu_promote(x, 0);
  res = spu_extract(_log10d2(vx), 0);
#ifndef _IEEE_LIBM
  dom_chkd_less_than(vx, vc);
#endif
  return res;
}
