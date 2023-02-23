#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\nvalues of a and b are %d\t%d\n",a,b);
    }