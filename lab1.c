#include <stdio.h>
#include <math.h>

int main()
{
  float e1, e2, e3, Chast;
  printf ("Enter e1 ->");
  scanf ("%f", &e1);
  printf ("Enter e2 ->");
  scanf ("%f", &e2);
  printf ("Enter e3 ->");
  scanf ("%f", &e3);
  float min = e1;
  if (min >= e2)
  {
    min = e2;
  }
  if (min >= e3)
  {
    min = e3;
  }
  float Sum = e1 + e2 + e3;
  if(Sum > 0)
  {
    Chast = min / Sum;
    printf("Частное: %f; Сумма: %f\n", Chast, Sum);
  }
  else
  {
    Chast = Sum / min;
    printf("Частное: %f; Сумма: %f\n", Chast, Sum);
  }
}
