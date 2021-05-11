/* { dg-do compile } */
/* { dg-require-effective-target offload_gcn } */

int qs;

void
ms (int g1)
{
  int cy;
  int *fr = &cy;

  for (;;)
    {
      *fr = 1;
      fr = &g1;

      while (qs != 0)
        {
          if (qs | cy)
            qs = g1 / 0; /* { dg-warning "division" } */
          ++qs;
        }

      cy = 1;
      while (cy != 0)
        cy = 2;
    }
}
