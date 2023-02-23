// write a program to print first 40 prime numbers in c programing language ? 
#include <stdio.h>
int main(void)
{
 for (int i=2; i<100; i++)
 {
  for (int j=2; j<=i; j++)   // Changed upper bound
  {
    if (i == j)  // Changed condition and reversed order of if:s
      printf("%d\t",i);
    else if (i%j == 0)
      break;
  }
 }
}


