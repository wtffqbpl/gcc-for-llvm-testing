/* { dg-do compile } */
/* { dg-options "-O2 -fno-delete-null-pointer-checks -fdump-tree-local-pure-const-details" } */
/* { dg-require-effective-target gcc_frontend } */

void *g(unsigned n)
{
  return n ? __builtin_malloc (n) : 0;
}

void *h()
{
  return 0;
}

/* { dg-final { scan-tree-dump-not "Function found to be malloc: g" "local-pure-const1" } } */
/* { dg-final { scan-tree-dump-not "Function found to be malloc: h" "local-pure-const1" } } */
