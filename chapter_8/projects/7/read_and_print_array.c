/* Reads and prints an array of 5 by 5 */

#include <stdio.h>
#define N 2

int main(void)
{
  int arr[N][N], i, j, row_total[N] = {0}, column_total[N] = {0};

  for (i = 0; i < N; i++) {
    printf("Enter row: %d: ", i+1);
    for (j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  
  /*
  printf("Array read was:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf(" %d", arr[i][j]);
    }
    printf("\n");
  }
  */

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      row_total[i] += arr[i][j];
      column_total[i] += arr[j][i];
    }
  }


  printf("\nRow totals:");
  for (i = 0; i < N; i++)
  printf(" %d", row_total[i]);
  printf("\nColumn totals: ");
  for (i = 0; i < N; i++)
  printf(" %d", column_total[i]);
  
  printf("\n");

  return 0;
}
