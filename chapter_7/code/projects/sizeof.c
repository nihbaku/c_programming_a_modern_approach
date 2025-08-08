/* Program that determines size of certain variable types */

#include <stdio.h>

int main(void)
{
  int i;
  long li;
  short si;

  float f;
  double d;
  long double ld;

  printf("Sizeof short int:\n %10u\n", sizeof si);
  printf("Sizeof int:\n %10u\n", sizeof i);
  printf("Sizeof long int:\n %10u\n", sizeof li);
  printf("#########################\n");
  printf("Sizeof float:\n %10u\n", sizeof f);
  printf("Sizeof double:\n %10u\n", sizeof d);
  printf("Sizeof long double:\n %10u\n", sizeof ld);

  return 0;
}
