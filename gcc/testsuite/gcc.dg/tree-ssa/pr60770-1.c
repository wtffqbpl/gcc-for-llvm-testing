/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */
/* { dg-options "-O -Wall" } */

int f(int n){
  int*p;
  {
    int yyy=n;
    p=&yyy;
  }
  return *p; /* { dg-warning "yyy" } */
}
