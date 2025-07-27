#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 7; j = 8;
  i *= j + 1;
  printf("Should be 64 8\n");
  printf("%d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  printf("\n\nShould be 3 2 1\n");
  printf("%d %d %d\n", i, j, k);

  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("\n\nShould be 2 -1 3\n");
  printf("%d %d %d\n", i, j, k);

  i = 2; j = 1; k = 0;
  i *= j *= k;
  printf("\n\nShould be 0 0 0\n");
  printf("%d %d %d\n", i, j, k);

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
