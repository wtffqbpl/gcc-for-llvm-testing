/* Verify proper errors are generated for conflicted interrupt type.  */
/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */
/* { dg-options "-O" } */
void __attribute__ ((interrupt ("user")))
foo(void);

void __attribute__ ((interrupt ("machine")))
foo (void)
{ /* { dg-error "function cannot have different interrupt type" } */
}
