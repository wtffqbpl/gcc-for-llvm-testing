/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-std=gnu89" } */
/* { dg-require-effective-target offload_gcn } */

int
mandel(double _Complex C)
{
  int py;
  C = (__extension__ 1.0iF) * (double)py;
  return cabs(C);  /* { dg-warning "incompatible" } */
}

