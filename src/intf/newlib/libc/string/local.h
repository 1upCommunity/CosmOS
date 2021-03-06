#include "newlib/libc/string/_ansi.h"
#include "newlib/libc/ctype/local.h"

/* internal function to compute width of wide char. */
int __wcwidth (wint_t);

/*
   Taken from glibc:
   Add the compiler optimization to inhibit loop transformation to library
   calls.  This is used to avoid recursive calls in memset and memmove
   default implementations.
*/
#ifdef _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL
# define __inhibit_loop_to_libcall \
  __attribute__ ((__optimize__ ("-fno-tree-loop-distribute-patterns")))
#else
# define __inhibit_loop_to_libcall
#endif


