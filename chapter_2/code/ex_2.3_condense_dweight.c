/* computes the dimensional weight of a box of 12 * 10 * 8 inches */

#include <stdio.h>

int main(void)
{
  int height = 8,
      length = 10,
      width = 12,
      volume;

  volume = height * width * length;

  printf("Dimension: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}
