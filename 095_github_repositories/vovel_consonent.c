#include<stdio.h>
void main()
{
    char c;
    printf("enter any character");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("character is vovel");
    }
    else
    {
        printf("character is consonent");
    }
}