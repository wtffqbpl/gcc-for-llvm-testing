/* { dg-do compile } */
/* { dg-options "-O2" } */
/* { dg-final { scan-assembler "and" { target powerpc*-*-* spu-*-* } } } */
/* There should be no nand for this testcase (for either PPC or SPU). */
/* { dg-final { scan-assembler-not "nand" { target powerpc*-*-* spu-*-* } } } */
/* { dg-additional-options "-Wno-ignored-optimization-argument" } */

int f(int y)
{
  return y & ~(y & -y);
}
