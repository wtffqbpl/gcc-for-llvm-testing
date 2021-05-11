/* { dg-require-effective-target offload_gcn } */
struct foo
{
  int *v;
};

int test (void)
{
  struct foo f = {};
  return *f.v; /* { dg-warning "dereference of NULL" } */
}
