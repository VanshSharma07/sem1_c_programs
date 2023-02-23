#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,p,q,r,area;
    printf("enter value of side a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    p=s-a;
    q=s-b;
    r=s-c;
    printf("s=%d\n",s);
    area=sqrt(s*p*q*r);
    printf("area=%d\n",area);
    return 0;
}