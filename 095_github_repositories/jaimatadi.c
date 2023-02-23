#include<stdio.h>
void main()
{
    char fn[20],ln[20];
    long int dob,ph;
    printf("enter first name");
    scanf("%s",&fn);
    printf("enter last name");
    scanf("%s",&ln);
    printf("enter date of birth");
    scanf("%ld",&dob);
    printf("enter phone number");
    scanf("%ld",&ph);
    printf("first name:%s\nlast name:%s\n",fn,ln);
    printf("DOB:%ld\n",dob);
    printf("phone no.:%ld\n",ph);
}
