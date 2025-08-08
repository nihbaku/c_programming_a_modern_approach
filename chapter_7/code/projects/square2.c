/* Prints a table of squares using a for statement */

/* We check for overflow using different int types */
/* When using regular int overflow happens at  46340, 2147395600 */
/* When using short int overflow happens at   181, 32761 */
/* With long int i can not reproduce overflow in meaningful time, might be because of 64bit system */

#include <stdio.h>

int main(void)
{
  short int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hd", &n);

  for (i = 1; i <= n; i++)
    printf("%20hd%20hd\n", i, i * i);

  return 0;
}
