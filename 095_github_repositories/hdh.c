#include<stdio.h>
void main()
{
    int no_of_calls;
    float amount;
    printf("enter the number of calls made:");
    scanf("%d",&no_of_calls);
    if(no_of_calls<=200)
    {
        amount=0;
    }
    else if(no_of_calls>200 && no_of_calls<=500)
    {
        amount=(no_of_calls-200)*1;
    }
    else
    {
        amount=(200*0)+(300*1)+(no_of_calls-500)*2;
    }
    printf("The amount payable is %2f\n",amount);
}