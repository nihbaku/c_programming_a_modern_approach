#include <stdio.h>

int main(void)
{
  int i, j;

  printf("Input 2 integers separated with whitespace:");
  scanf("%d%d", i, &j);    //forgetting the "&" here will lead to a seg fault! gcc need at least -W opt to catch this, beware!
}
