#include<stdio.h>
int main()
{
    int bs,da,hra,gs;
    printf("enter basic salary");
    scanf("%d",&bs);
    if(bs<10000)
    {
        da=(10*bs)/100;
        hra=(2*bs)/100;
        printf("da is:%d\n",da);
        printf("hra is:%d\n",hra);
    }
    else if(bs>=10000&&bs<=20000)
    {
        da=(15*bs)/100;
        hra=(5*bs)/100;
        printf("da is:%d\n",da);
        printf("hra is:%d\n",hra);
    }
    else if(bs>20000&&bs<=50000)
    {
        da=(20*bs)/100;
        hra=(10*bs)/100;
        printf("da is:%d\n",da);
        printf("hra is:%d\n",hra);
    }
    else(bs>50000)
    {
        da=(30*bs)/100;
        hra=(15*bs)/100;
        printf("da is:%d\n",da);
        printf("hra is:%d\n",hra);
    }
    gs=bs+da+hra;
    printf("gross salary:%d\n",gs);
    return 0;
}