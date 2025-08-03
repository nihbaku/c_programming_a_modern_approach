/* Exercise for evaluating the following expression for i = 17 and i = -17: i >= 0 ? i : -i*/
#include <stdio.h>

int main(void)
{
  int i = 17;
  printf("If i = 17 the expression should print 17:\n");
  printf("%d\n", i >= 0 ? i : -i);

  i = -17;
  printf("\n\nIf i = -17 the expression should print 17 aswell:\n");
  printf("%d\n", i >= 0 ? i : -i);
}
