/* A loop exercise which prints numbers descending from 5 to 0 but stops at 2 because another counter which also has to be bigger than 0 is always smaller than the number counter printed.*/
#include <stdio.h>

int main(void)
{
  int i,j;
  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
       printf("%d ", i);

  printf("\n");
}
