#include <stdio.h>

int main() 
{
  int i, j, sum;
  printf("Perfect numbers between 1 and 1000 are: \n");
  for (i = 1; i <= 1000; i++) 
  {
    sum = 0;
    for (j = 1; j < i; j++) {
      if (i % j == 0) 
      {
        sum += j;
      }
    }
    if (sum == i) {
      printf("%d ", i);
    }
  }
  return 0;
}
