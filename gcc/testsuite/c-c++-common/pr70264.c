/* { dg-options "-fdiagnostics-show-caret" } */
/* { dg-require-effective-target gcc_frontend } */

#define X __LINE__ /* { dg-error "expected" } */
X

/* { dg-begin-multiline-output "" }
 #define X __LINE__
           ^~~~~~~~
   { dg-end-multiline-output "" } */
/* { dg-begin-multiline-output "" }
 X
 ^
   { dg-end-multiline-output "" } */
