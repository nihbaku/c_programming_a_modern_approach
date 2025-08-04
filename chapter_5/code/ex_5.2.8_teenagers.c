/* Technically the solution for the assignment can be done via teenager = age >= 13 && age <= 19*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool teenager = false;
  int age = 12;
  
  if (age >= 13 && age <= 19) {
    teenager = true;
  }

  printf("Age is: %d teenage status is %d\n", age, teenager);


  teenager = false;
  age = 13;
  if (age >= 13 && age <= 19) {
    teenager = true;
  }
  printf("Age is: %d teenage status is %d\n", age, teenager);

  teenager = false;
  age = 15;
  if (age >= 13 && age <= 19) {
    teenager = true;
  }
  printf("Age is: %d teenage status is %d\n", age, teenager);


  teenager = false;
  age = 19;
  if (age >= 13 && age <= 19) {
    teenager = true;
  }
  printf("Age is: %d teenage status is %d\n", age, teenager);

  
  teenager = false;
  age = 20;
  if (age >= 13 && age <= 19) {
    teenager = true;
  }
  printf("Age is: %d teenage status is %d\n", age, teenager);
}
