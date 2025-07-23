#include <stdio.h>

int i = 10;
int j = 20;
float x = 3.14156;
float y = 1.616;

int main(void)
{
  printf("Float with int format: %d\n Int with float format: %f\n %d\n %d, %d\n", x, i, y, j, j);
}
//It seems gcc will alocate the values correct if there are only an int and a float. In the above case the last variable is just something
//else that gets printed
