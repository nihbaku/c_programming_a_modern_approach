/* Write a single expression whose value is -1, 0 or 1 depending if i is less or equal or grater than j. The result expression we are searching for is ((i >= j) - (i <= j))*/
#include <stdio.h>

int main(void)
{
  int i, j;

  i = 1; j = 3;
  printf("i = 1, j = 3 result: %d\n",  (i >= j) - (i <= j));

  i = 3; j = 1;
  printf("\n\ni = 3, j = 1 result: %d\n",  (i >= j) - (i <= j));
    
  i = 3; j = 3;
  printf("\n\ni = 3, j = 3 result: %d\n",  (i >= j) - (i <= j));
}
