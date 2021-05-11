/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */
/* { dg-options "-march=rv32gc -mabi=ilp32d" } */
struct s1 { int : 0; float f; float g; int : 0; };

void dummy(float, float);

void f(struct s1 s) { /* { dg-warning "flattened struct" } */
  dummy(s.f + 1.0, s.g + 2.0);
}
