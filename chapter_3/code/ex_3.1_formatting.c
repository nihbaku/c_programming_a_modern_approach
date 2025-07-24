#include <stdio.h>

int main(void)
{
  float x;
  printf("%6d,%4d\n", 86, 1040);
  printf("%12.5e\n", 30.253);
  printf("%.4f\n", 83.162);
  printf("%-6.2g\n", .00000009979);

  x = 1.5f;
  printf("%-8.1e|", x);
  x = 3.1415;
  printf("%10.6f|", x);
  printf("%-8.3f|", x);
  printf("%6.0f|\n", x);
}
