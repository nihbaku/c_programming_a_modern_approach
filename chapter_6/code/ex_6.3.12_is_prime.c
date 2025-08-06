/* The is prime loop can be more efficient because we only have to check a divisor up to \sqrt(n). Now we modify the loop for that case. */
#include <stdio.h>

int main(void)
{
  int d, n;

  printf("Enter a number to be checked for being prime: ");
  scanf("%d", &n);

  /* for (d = 2; d < n; d++)
   *   if (n % d == 0)
   *     break;
   */

  for (d = 2; d * d <= n; d++)
      if (n % d == 0)
        break;

  if (d * d <= n) printf("%d is not prime!\n", n);
  else printf("%d is prime!\n", n);
}
