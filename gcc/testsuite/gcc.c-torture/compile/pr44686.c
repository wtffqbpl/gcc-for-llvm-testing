/* { dg-require-profiling "-fprofile-generate" } */
/* { dg-options "-fipa-pta -fprofile-generate" } */
/* { dg-require-effective-target gcc_internals } */
void *
memcpy (void *a, const void *b, __SIZE_TYPE__ len)
{
  if (a == b)
    __builtin_abort ();
}
