/* This program prints uninitialized float and int variables */

#include <stdio.h>

int main(void)
{
  int ivar1, ivar2, ivar3, ivar4, ivar5;
  float fvar1, fvar2, fvar3, fvar4, fvar5;

  printf("The values of the unitialized ints are:\n");
  printf("var1: %d\n", ivar1);
  printf("var2: %d\n", ivar2);
  printf("var3: %d\n", ivar3);
  printf("var4: %d\n", ivar4);
  printf("var5: %d\n", ivar5);

  printf("\n\n");

  printf("The values of the unitialized floats are:\n");
  printf("var1: %.16f\n", fvar1);
  printf("var2: %.16f\n", fvar2);
  printf("var3: %.16f\n", fvar3);
  printf("var4: %.16f\n", fvar4);
  printf("var5: %.16f\n", fvar5);
}

/*Funnily enough running this programm under my local machine for multiple times leads to all of the variables having 0 all the time. But this behaviour is not predictable usually. The initialization will give the variable a space in memory and the bits are just all 0 by coincidence. I can't find any reason this has changed since 2007, when the book was published.*/
