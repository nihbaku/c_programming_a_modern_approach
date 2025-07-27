#include <stdio.h>

int main(void)
{
  int i = 8, j = 10;
  
  printf("%d\n", i % j);
  printf("%d\n", i = 5 % j);
  printf("%d\n", i = 3 % j);
  printf("%d\n", i = 0 % j);
  printf("%d\n", i = 10 % j);
}
