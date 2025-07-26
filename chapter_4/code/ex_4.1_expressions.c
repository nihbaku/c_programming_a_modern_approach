/* Evaluated expressions in my head and checked if the output matches the expected value. Turns out, everything is ture :)*/
#include <stdio.h>

int main(void)
{
  int i = 5, j = 3, k;
  printf("Should be 1 and 2\n");
  printf("%d %d\n", i / j, i % j);

  i = 2;
  j = 3;
  printf("\n\nShould be 0\n");
  printf("%d\n", (i + 10) % j);

  i = 7;
  j = 8;
  k = 9;
  printf("\n\nShould be 1\n");
  printf("%d\n", (i + 10) % k / j);

  i = 1;
  j = 2;
  k = 3;
  printf("\n\nShould be 0\n");
  printf("%d\n", (i + 5) % (j + 2) / k);

}
