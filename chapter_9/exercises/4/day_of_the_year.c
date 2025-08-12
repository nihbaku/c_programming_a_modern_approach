/* Create function which takes month, day and year to print the day of the year as integer between 1 and 366. */

#include <stdio.h>

int day_of_the_year(int month, int day, int year);

int main(void) {
  printf("The 12. August 2024 is day number: %d\n", day_of_the_year(8, 12, 2024));
  printf("The 12. August 2025 is day number: %d\n", day_of_the_year(8, 12, 2025));
  printf("The 31. December 2024 is day number: %d\n", day_of_the_year(12, 31, 2024));
  printf("The 31. December 2025 is day number: %d\n", day_of_the_year(12, 31, 2025));

  return 0;
}

int day_of_the_year(int month, int day, int year) {
  //THIS IS A STUPID IMPLEMENTATION (for readability) but i wanted to check if it works anyway :D
  //I guess it is a fast one though ^^

  int sum = 0;
  
  switch (month) {       //This works by assuming if we are in month x we sum all the days of month x-1 up
                         //with a fall through. So we do not add something in Jan. since the result is the day of the month.
  case 12: sum+= 30;
  case 11: sum+= 31;
  case 10: sum+= 30;
  case  9: sum+= 31;
  case  8: sum+= 31;
  case  7: sum+= 30;
  case  6: sum+= 31;
  case  5: sum+= 30;
  case  4: sum+= 31;
  case  3: sum+= 28;
  case  2: sum+= 31;
  case  1: break;
}

  sum += day;          //Here we add the day of the incomplete month 

  if ((year % 4 == 0) && (month > 2)) {
    sum += 1;          //leap year
  }
  return sum;
}
