#include<stdio.h>
void main()
{
    float amount;
    int n;
    printf("enter the no. of calls made");
    scanf("%d",&n);
    if(n<=200)
    {
        amount=0;
    }
    else if(n>200&&n<=500)
    {
        amount=(n-200)*1;
    }
    else
    {
        amount=(200*0)+(300*1)+(n-500);
    }
    printf("the amount payable is %2f\n",amount);
}