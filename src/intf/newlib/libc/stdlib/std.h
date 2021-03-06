#include "newlib/libc/stdlib/stdlib.h"
#include "newlib/libc/stdlib/stdio.h"
#include "newlib/libc/stdlib/errno.h"
#include "newlib/libc/stdlib/limits.h"
#include "newlib/libc/stdlib/math.h"
#ifndef CYGNUS_NEC
#include "newlib/libc/stdlib/ctype.h"
#endif

#define Ise(c)		((c == 'e') || (c == 'E') || (c == 'd') || (c == 'D'))
#define Isdigit(c)	((c <= '9') && (c >= '0'))
#define Isspace(c)	((c == ' ') || (c == '\t') || (c=='\n') || (c=='\v') \
                         || (c == '\r') || (c == '\f'))
#define Issign(c)	((c == '-') || (c == '+'))
#define Val(c)		((c - '0'))

#define MAXE  308
#define MINE  (-308)

/* flags */
#define SIGN	0x01
#define ESIGN	0x02
#define DECP	0x04

int    		__ten_mul(double *acc, int digit);
double		__adjust(struct _reent *ptr, double *acc, int dexp, int sign);
double		__exp10(unsigned x);
