//c program to convert numbers to alphabets
#include<stdio.h>
void main()
{
    int n,r,rev=0;
    printf("enter any three digit number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("reverse of number is %d",rev);
}