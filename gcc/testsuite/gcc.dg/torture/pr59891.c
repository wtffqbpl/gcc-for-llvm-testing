/* PR c/59891 */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-require-effective-target offload_gcn } */

unsigned int a;

int
main ()
{
  return (0 ? a : 0) ? : 0 % 0; /* { dg-warning "division by zero" } */
}
