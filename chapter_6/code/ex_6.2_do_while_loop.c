/* code that prints a number and divides it by 10 afterwards. Thus it cut away digits from the back */
#include <stdio.h>

int main(void)
{
  int i = 9384;

  do {
  printf("%d ", i);
  i /= 10;
  } while (i > 0);

  printf("\n");
}
