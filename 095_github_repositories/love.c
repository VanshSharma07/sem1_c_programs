#include<stdio.h>
#include<dos.h>
void main()
{
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i=1;i<=120;i++)
    {
        printf("  i love you \3 ");
        delay(200);
    }
}