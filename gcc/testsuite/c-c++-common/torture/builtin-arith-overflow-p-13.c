/* Test __builtin_{add,sub,mul}_overflow_p.  */
/* { dg-do run } */
/* { dg-skip-if "" { ! run_expensive_tests }  { "*" } { "-O0" "-O2" } } */
/* { dg-require-effective-target noclone } */

#define OVFP
#include "builtin-arith-overflow-12.h"

TESTS (long, LONG_MIN, LONG_MAX)

#undef T
#define T(n, t1, t2, tr, v1, v2, vr, b, o) t##n##b ();

int
main ()
{
  TESTS (long, LONG_MIN, LONG_MAX)
  return 0;
}
