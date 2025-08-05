/* code produces the (binary) sequence a_n = (a_(n-1))*2 until 128 */
#include <stdio.h>

int main(void)
{
  int i = 1;
  while (i <= 128) {
    printf("%d ", i);
    i *= 2;
  }
  printf("\n");
  return 0;
}
