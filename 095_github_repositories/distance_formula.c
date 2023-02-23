#include<stdio.h>
void main()
{
     int u,a,t,s;
    printf("enter value of u,a,t");
    scanf("%d%d%d",&u,&a,&t);
    s=u*t+((1/2)*a)*t*t;
    printf("solution is %d",s);
}