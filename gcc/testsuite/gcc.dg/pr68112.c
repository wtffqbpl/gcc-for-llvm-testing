/* { dg-do compile } */
/* { dg-options "-O2 -Waggressive-loop-optimizations" } */
/* { dg-require-effective-target int32plus } */
/* { dg-require-effective-target gcc_frontend } */

int *a;

void
foo ()
{
  for (int i = 0; i < 65536; i++)
    *a = i << 24;
}
