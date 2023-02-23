#include<stdio.h>
void main()
{
    float salary,bonus;
    char sex;
    printf("enter salary of employee");
    scanf("%f",&salary);
    printf("enter gender of employee (m/f):");
    scanf("%s",&sex);
    if(sex=='m')
    {
        bonus=0.05*salary;
    }
    else
    {
        bonus=0.1*salary;
    }
    if(salary<10000)
    {
        bonus+=0.02*salary;
    }
    printf("the bonus given to the employee is RS %2f\n",bonus);
    printf("the salary that the employee will getis RS%2f\n",salary+bonus);
}