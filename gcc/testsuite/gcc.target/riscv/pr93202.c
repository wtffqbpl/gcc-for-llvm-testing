/* PR inline-asm/93202 */
/* { dg-do compile { target fpic } } */
/* { dg-require-effective-target offload_gcn } */
/* { dg-options "-fpic" } */

void
foo (void)
{
  asm volatile ("%h0" :: "i" (&foo));	/* { dg-error "invalid use of '%h'" } */
  asm volatile ("%R0" :: "i" (&foo));	/* { dg-error "invalid use of '%R'" } */
}
