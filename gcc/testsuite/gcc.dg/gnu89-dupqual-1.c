/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-std=gnu89 -Werror" } */

typedef const int CI;
const const int c1;		/* { dg-bogus "duplicate" } */
const CI c2;			/* { dg-bogus "duplicate" } */
const CI *c3;			/* { dg-bogus "duplicate" } */

typedef volatile int VI;
volatile volatile int v1;	/* { dg-bogus "duplicate" } */
volatile VI v2;			/* { dg-bogus "duplicate" } */
volatile VI *v3;		/* { dg-bogus "duplicate" } */
