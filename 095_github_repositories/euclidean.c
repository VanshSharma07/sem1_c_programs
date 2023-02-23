#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,a,b,distance;
    printf("enter the value of x1 and x2 ");
    scanf("%f%f",&x1,&x2);
    printf("enter the value of y1 and y2 ");
    scanf("%f%f",&y1,&y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    distance=sqrt(a+b);
    printf("distance is %f",distance);
    return 0;
}