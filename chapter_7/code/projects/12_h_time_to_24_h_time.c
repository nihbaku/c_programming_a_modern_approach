/* Program which computes 24 hour time from 12 hour time */

#include <stdio.h>

int main(void)
{
  int hours, minutes;
  char daytime_period_letter;

  printf("Enter a time in 12 h format in (H)H:MM A/PM: ");
  scanf("%d:%d %cM", &hours, &minutes, &daytime_period_letter);

  switch (daytime_period_letter) {
  
  case 'A': 

    if (hours == 12) printf("It is %d:%d\n", hours-12, minutes);
    else printf("It is %d:%d\n", hours, minutes);
    
    break;
  
  case 'P':

    if (hours == 12) printf("It is %d:%d\n", hours, minutes);
    else printf("It is %d:%d\n", hours+12, minutes);
    
    break;
  
  default: printf("Something went wrong while reading the daytime period!\n"); break;
  }

  return 0;
}
