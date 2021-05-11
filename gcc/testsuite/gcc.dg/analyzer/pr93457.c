/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */

void
p5 (const void *);

void
s5 (const void *cl)
{
  p5 (&cl[1]); /* { dg-warning "dereferencing 'void \\*' pointer" } */
}
