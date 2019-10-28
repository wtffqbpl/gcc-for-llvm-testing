/* { dg-options "-fexceptions" } */
/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
/* { dg-skip-if "" { ! fexceptions } } */

void
af (void *a)
{
}
void
bf (void)
{
  int i = 1;
  char v[i];
  af (v);
}

