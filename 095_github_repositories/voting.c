#include<stdio.h>
int main()
{
    int vote,count_yes=0,count_no=0;
    printf("please enter your vote:\n");
    printf("1for BJP\n2 for INC\n");
    scanf("%d",&vote);
    if(vote==1)
    {
        count_yes++;
        printf("your vote is recorded as BJP.\n");
    }
    else if(vote==2)
    {
      count_no++;
      printf("your vote is recorded as INC.\n");  
    }
    else
    {
        printf("invalid vote.\n");
    }
    printf("\t\t\tvoting results:\t\t\t");
    printf("\n\t\t\tBJP:%d\n\t\t\tINC:%d\t\t\t\n",count_yes,count_no);
    return 0;
}