/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */
/* { dg-options "-O2 -Wall" } */

struct S { int i, j; };

int foo (int l)
{
  struct S s;
  s.j = l - 22;
  return s.i + s.j;   /* { dg-warning ".s\.i. is used uninitialized" } */
}
