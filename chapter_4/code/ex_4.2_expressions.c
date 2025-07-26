#include <stdio.h>

int main(void)
{
  int i, j;
  i = 6;
  j = i += i;
  printf("\n\nShould be 12 12\n");
  printf("%d %d\n", i, j);

  i = 5;
  j = (i -= 2) + 1;
  printf("\n\nShould be 3 4\n");
  printf("%d %d\n", i, j);

  i = 7;
  j = 6 + (i = 2.5);
  printf("\n\nShould be 2 8\n");
  printf("%d %d\n", i, j);

  i = 2; j = 8;
  j = (i = 6) + (j = 3);
  printf("\n\nShould be 6 9\n");
  printf("%d %d\n", i, j);
}
