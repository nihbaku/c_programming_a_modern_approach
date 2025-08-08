/* Computes approximation of square root with newtons method */

#define ACCURACY 1E-5

#include <stdio.h>
#include <math.h>

int main(void)
{
  double input;
  double guess = 1.0f; 
  double old_guess;
  unsigned short int counter = 0;

  printf("Input a positive floating point number to calculate the square from: ");
  scanf("%lf", &input);

  if (input < 0.0) {
    printf("Number must be positive!\n");
    return 0;
  }
  do {
    ++counter;
    old_guess = guess;
    guess = (guess + input/guess)/2.0;
    printf("Step: %u Calculated square root: %.12lf\n", counter, guess);
  } while ((fabs(guess-old_guess) > guess*ACCURACY) && counter <= 100);
  printf("The calculated square root of %lf is: %.12lf\n", input, guess);

  printf("Accuracy variable is: %f\n", ACCURACY);
  return 0;
}
