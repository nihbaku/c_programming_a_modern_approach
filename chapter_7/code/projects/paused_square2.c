/* Prints a table of squares using a for statement */

/* Overengineered the part where we have to press space to coninue because I wanted an abort aswell */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar(); // This getchar is needed, because the program will catch
             // the initial enter of the terminal otherwise and will continue in the first if

  for (i = 1; i <= n; i++) {
    if (i % 24 == 0) {

      char ch;
      
      printf("Please press Enter to continue or 0 to abort!");
      ch = getchar();
      if (ch == '\n') continue;
      else if (ch == '0') break;
      else {
        printf("\a Not a valid input! Please use enter to continue or 0 to abort!");
      }
    }
    printf("%20d%20d\n", i, i * i);
  }
  return 0;
}
