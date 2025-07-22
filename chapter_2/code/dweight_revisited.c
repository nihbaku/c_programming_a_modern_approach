/* computes the dimensional weight of a box of 12 * 10 * 8 inches */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
  int weight, height, length, width, volume;

  printf("Please enter height of the box in inches: ");
  scanf("%d", &height);
  printf("Please enter lenght of the box in inches: ");
  scanf("%d", &length);
  printf("Please enter width of the box in inches: ");
  scanf("%d", &width);
  volume = height * width * length;
  weight = (volume + INCHES_PER_POUND-1) / INCHES_PER_POUND;        //this is truncation "magic", ints get rounded down in C. volume of 166 gives weight 1. 167 would yield 2!

  printf("Dimension: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
