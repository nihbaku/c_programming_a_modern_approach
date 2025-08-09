/* Reads and prints an array of 5 by 5 */

#include <stdio.h>
#define N 5

int main(void)
{
  int grades[N][N], i, j, student_score[N] = {0}, low_score, high_score;
  float quiz_average[N] = {0.0f}, student_average = 0.0f;

  for (i = 0; i < N; i++) {
    printf("Enter Quiz scores of student %d: ", i+1);
    for (j = 0; j < N; j++) {
      scanf("%d", &grades[i][j]);
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

  low_score = 100;
  high_score = 0;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (grades[i][j] >= high_score) high_score = grades[i][j];
      if (grades[i][j] <= low_score) low_score = grades[i][j];
      student_score[i] += grades[i][j];
      quiz_average[i] += grades[j][i];
    }
  }


  printf("\nStudent Scores:");
  for (i = 0; i < N; i++)
  printf(" %d", student_score[i]);

  printf("\nStudent average scores: ");
  for (i = 0; i < N; i++)
  printf(" %f", (float) student_score[i]/N);
  

  printf("\nQuiz averages: ");
  for (i = 0; i < N; i++)
  printf(" %f", quiz_average[i]/N);
  printf("\nLowest score: %d", low_score);
  printf("\nHighest score: %d", high_score);
  
  printf("\n");

  return 0;
}
