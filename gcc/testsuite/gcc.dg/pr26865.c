/* { dg-do compile } */
/* { dg-options "-O2 -std=c99" } */
/* { dg-require-effective-target gcc_frontend } */

void
foo (void)
{
  char *e = alloca (100); /* { dg-warning "implicit declaration|initialization of 'char \\*' from 'int' makes" } */
}
