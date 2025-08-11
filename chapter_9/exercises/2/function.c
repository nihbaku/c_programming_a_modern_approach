/* Test function which returns 1 when a value x and y falls between 0 and n-1 inclusive and 0 otherwise. */

#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
  printf("Check value for 4, 9, 10, is %d\n", check(4, 9, 10));
  printf("Check value for -4, 9, 10, is %d\n", check(-4, 9, 10));
  printf("Check value for 4, 9, 4, is %d\n", check(4, 9, 4));
  printf("Check value for 4, -9, 10, is %d\n", check(4, -9, 10));

  return 0;
}

int check(int x, int y, int n) {
  
  if (x < 0) return 0;

  if (y < 0) return 0;

  if ((0 <= x + y) && (x + y <= 2*n-2)) return 1;
  else return 0;
}
