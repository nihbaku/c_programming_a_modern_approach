/*Compute temperature average for a specific daytime over a month.*/

#include <stdio.h>
#define N_ENTRIES ((int) (sizeof(temperature_readings)/sizeof(temperature_readings[0][0])))

int main(void)
{

  float temperature_readings[30][24] = {0.0}; //fills the first value with 0, compiler will set all other values to 0.
  float temp_mean = 0.0f;

  for (int i = 0; i < 30; i++) {
    temperature_readings[i][0] = 1.0;
    temperature_readings[i][1] = 2.0;
  }

  //Average
  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 24; j++) {
      temp_mean += temperature_readings[i][j];
    }
  }

  temp_mean = temp_mean/N_ENTRIES;
  printf("Average Temperature of the month: %f\n", temp_mean);
  printf("Check value: %f\n", (1.0*30+2.0*30)/720);

  return 0; 
}
