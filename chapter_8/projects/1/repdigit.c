/* Checks numbers for repeated digits */

#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }
  
  n = 0; //we reuse n here as a checker for repeated digits to save memory
  for (int i = 0; i < 10; i++) {
    if (digit_seen[i] > 1) {
      if (n == 0) printf("Repeated digit(s):");
      printf(" %d", i);
      n++;
    }
  }

  if (n == 0) printf("No repeated digit\n");
  else printf("\n"); //prints the new line after all digits have been printed.

  return 0;
}
