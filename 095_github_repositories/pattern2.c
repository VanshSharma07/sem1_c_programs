#include<stdio.h>
void main()
{
  int i,j;
  for(i=4;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}