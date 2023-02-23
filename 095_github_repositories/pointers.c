#include<stdio.h>
void main()
{
    int i=100;
    int*ptr;
    ptr=&i;
    printf("%u\n",i);
    printf("%u\n",ptr);
    printf("%u\n",&i);
    printf("%u\n",&ptr);
    printf("%u\n",*ptr);
    printf("%u\n",*(&i));
}