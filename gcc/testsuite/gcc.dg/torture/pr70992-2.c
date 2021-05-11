/* PR middle-end/70992 */
/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */

unsigned int *od;
int
fn (void)
{
  return (0 % 0 + 1) * *od * 2; /* { dg-warning "division by zero" } */
}
