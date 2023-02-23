#include<stdio.h>
void main()
{
    int i,n,t1=0,t2=1,nextTerm;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

printf("%d",nextTerm);
    }
}