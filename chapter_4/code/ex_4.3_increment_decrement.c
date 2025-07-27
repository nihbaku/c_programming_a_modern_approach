/*Evaluated expresion by hand again and check with numeric result!*/
#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 1;
  printf("Should be 0\n");
  printf("%d\n", i++ - 1);

  i = 10; j = 5;
  printf("\n\nShould be 4\n");
  printf("%d\n", i++ - ++j);
  printf("Should be 11 6\n");
  printf("%d %d\n", i, j);

  i = 7; j = 8;
  printf("\n\nShould be 0\n");
  printf("%d\n", i++ - --j);
  printf("Should be 8 7\n");
  printf("%d %d\n", i, j);

  i = 3; j = 4; k = 5;
  printf("\n\nShould be 3\n");
  printf("%d\n", i++ - j++ + --k);
  printf("Should be 4 5 4\n");
  printf("%d %d %d\n", i, j, k);
 }
