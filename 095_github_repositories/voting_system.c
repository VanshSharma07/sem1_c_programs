#include<stdio.h>

int main()
{
     FILE *fp;
    fp = fopen("voting_reports.txt","w");
int option1, option2, option3, vote;
int count1=0, count2=0, count3=0;
printf("Welcome to the Mini Voting System!\n\n");
printf("1. Option 1\n");
printf("2. Option 2\n");
printf("3. Option 3\n\n");

printf("Enter 0 to end the voting process.\n\n");

while(1)
{
    printf("Enter your vote (1, 2, or 3): ");
    scanf("%d", &vote);

    if(vote==0)
    {
        break;
    }
    else if(vote==1)
    {
        count1++;
    }
    else if(vote==2)
    {
        count2++;
    }
    else if(vote==3)
    {
        count3++;
    }
    else
    {
        printf("Invalid option selected.\n");
    }
}

fprintf(fp,"\nVoting Results:\n");
fprintf(fp,"Option 1: %d\n", count1);
fprintf(fp,"Option 2: %d\n", count2);
fprintf(fp,"Option 3: %d\n", count3);

if(count1>count2 && count1>count3)
{
    fprintf(fp,"\nOption 1 is the winner!\n");
}
else if(count2>count1 && count2>count3)
{
    fprintf(fp,"\nOption 2 is the winner!\n");
}
else if(count3>count1 && count3>count2)
{
    fprintf(fp,"\nOption 3 is the winner!\n");
}
else
{
    fprintf(fp,"\nIt's a tie!\n");
}

return 0;
}