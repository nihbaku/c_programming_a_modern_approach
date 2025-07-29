/*Exercise for practicing logical operators. Again the calculated result worked out in hand is printed before.*/
#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 10; j = 5;
  printf("Result should be: 1\n");
  printf("Result is: %d\n", !i < j);

  i = 2; j = 1;
  printf("\n\nResult should be: 1\n");
  printf("Result is: %d\n", !!i + !j); //!i is 0 and !0 is 1, not 10 again!

  i = 5; j = 0; k = -5;
  printf("\n\nResult should be: 1\n");
  printf("Result is: %d\n", i && j || k); //evaluates to 1 || -5 and only 0 is false.

  i = 1; j = 2; k = 3;
  printf("\n\nResult should be: 1\n");
  printf("Result is: %d\n", i < j || k);
  
}
