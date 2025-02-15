/* PR rtl-optimization/53589 */
/* { dg-do compile } */
/* { dg-require-effective-target asm_goto } */

extern void foo (void) __attribute__ ((__noreturn__));

void
bar (int x)
{
  if (x < 0)
    foo ();
  if (x == 0)
    return;
  __asm goto ("# %l[lab]" : : : : lab);
lab:;
}
