/* Prints the first 40 fibonacci numbers */

#include <stdio.h>

#define N 40

int main(void)
{
  int a[N]={0, 1}; //fills only the first two elements
  
  for (int i = 2; i < N; i++) {
    a[i] = a[i-1] + a[i-2];
  }
  
  for (int i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}
