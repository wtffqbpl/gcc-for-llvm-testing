/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-require-effective-target gcc_internals } */
/* { dg-options "-ffat-lto-objects" } */
/* { dg-require-effective-target offload_gcn } */

int
f (void)
{
  register unsigned int r asm ("no-such-register"); /* { dg-error "invalid register name" } */
  return r;
}
