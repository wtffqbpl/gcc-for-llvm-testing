/* { dg-do compile } */
/* { dg-require-effective-target large_long_double } */
/* { dg-require-effective-target c99_runtime } */
/* { dg-options "-O2 -ffast-math -fdump-tree-forwprop-details" } */
/* { dg-require-effective-target gcc_frontend } */

#include <math.h>

long double f3 (long double x)
{
  long double t1 = fabsl (x);
  long double t2 = t1 / x; 
  return t2;
}

/* { dg-final { scan-tree-dump "__builtin_copysignl" "forwprop1" } } */
