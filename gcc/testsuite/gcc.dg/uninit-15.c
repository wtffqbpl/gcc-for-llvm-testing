/* PR tree-optimization/17506
   We issue an uninitialized variable warning at a wrong location at
   line 11, which is very confusing.  Make sure we print out a note to
   make it less confusing.  (not xfailed alternative)
   But it is of course ok if we warn in bar about uninitialized use
   of j.  (xfailed alternative)  */
/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-O1 -Wuninitialized" } */

inline int
foo (int i)
{
  if (i) /* { dg-warning "used uninitialized in this function" } */
    return 1;
  return 0;
}

void baz (void);

void
bar (void)
{
  int j; /* { dg-message "note: 'j' was declared here" } */
  for (; foo (j); ++j)  /* { dg-warning "'j' is used uninitialized" "" { xfail *-*-* } } */
    baz ();
}
