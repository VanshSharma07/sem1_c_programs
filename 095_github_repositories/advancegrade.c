//header files
#include<stdio.h>
#include<string.h>
//main opening
int main()
{
    //variable declaration
    char n[20],s[10],d[10],f[20],a[30];
    char username[20];
    char password[20];
    char correctUsername[] = "bitsandbytes";
    char correctPassword[] = "0707";
    int r,cprog,engphy,engmath,hsmc,compprog,ch;
    long int ph; 
    float p,tm,atd;
    VANSH:
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if(strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) 
    {
        printf("LOGIN SUCCESSFUL\n\n");
         goto START;
    } 
  else 
  {
    goto END;
  }
    //printf and scanf input and output statements
    START:
    printf("ENTER STUDENT NAME:");
    scanf("%s",&n);
    printf("ENTER FATHERS NAME:");
    scanf("%s",&f);
    printf("ENTER ADDRESS:");
    scanf("%s",&a);
    printf("ENTER YOUR SECTION:");
    scanf("%s",&s);
    printf("ENTER DEPARTMENT NAME:");
    scanf("%s",&d);
    printf("ENTER YOUR MOBILE NUMBER:");
    scanf("%ld",&ph);
    printf("ENTER ATTENDENCE OF STUDENT:");
    scanf("%f",&atd);
    printf("ENTER ROLL NUMBER:");
    scanf("%d",&r);
    printf("ENTER MARKS OF 5 SUBJECTS:\n1:C PROGRAMMING:\n2:ENGINEERING PHYSICS:\n3:ENGINEERING MATHEMATICS:\n4:HSMC:\n5:COMPETITIVE PROGRAMMING:\n");
    scanf("%d%d%d%d%d",&cprog,&engphy,&engmath,&hsmc,&compprog);
    //sum statement
    tm=cprog+engphy+engmath+hsmc+compprog;
    //percentage
    p=(tm*100)/500;
    OPEN:
    printf("\t\t\tENTER CHOICE:\t\t\t\n\t\t\t1:STUDENT RESULT:\t\t\t\n\t\t\t2:SUBJECT WISE PERFORMANCE:\t\t\t\n\t\t\t3:STUDENT ATTENDENCE:");
    scanf("%d",&ch);
    printf("\n\n");
    switch (ch)
    {
        case 1:
    printf("_________________________________________________________________\n\n");
    printf("\t\t\tWELCOME TO MIET\t\t\t");
    printf("\n\n\n");
    printf("\t\tNAME:\t\t%s\n",n);
    printf("\t\tFATHER NAME:\t%s\n",f);
    printf("\t\tADDRESS:\t%s\n",a);
    printf("\t\tSECTION:\t%s\n",s);
    printf("\t\tDEPARTMENT NAME:%s\n",d);
    printf("\t\tROLL NO.:\t%d\n",r);
    printf("\n\n");
    printf("\t\t\t   RESULT  \t\t\t");
    printf("\n\n\n");
    printf("\t\tTOTAL MARKS:\t%f\n",tm);
    printf("\t\tPERCENTAGE:\t%f\n",p);
    if(p>90)
    {
        printf("\t\tGrade:\t\tA+\n\t\tExcelent");
    }
    else if (p>80&&p<=90)
    {
        printf("\t\tGrade:\t\tA\n\t\tVery Good");
    }
    else if(p>70&&p<=80)
    {
        printf("\t\tGrade:\t\tB\n\t\tGood");
    }
    else if(p>60&&p<=70)
    {
        printf("\t\tGrade:\t\tc\n\t\tAverage");
    }
    else if (p<60)
    {
        printf("\t\tFAIL:\t\tCOMPARTMENT");
    }   
    printf("\n\n");
    printf("\t\t\tTHANKS FOR VISITING\n");
    printf("\t\t\t\tMIET\t\t\t\t");
    printf("\n\n");
    printf("_________________________________________________________________\n\n");
    printf("\n");
    printf("\t\t\t  BITS'N'BYTES");
    break;
    case 2:
    printf("_________________________________________________________________________________\n\n");
    printf("\n\t\t\tSUBJECT WISE PERFORMANCE : \n\n");
    printf("\n");
    printf("\t\t\tSUBJECT NAME :\t\t  MARKS OBTAINED\n\n");
    printf("\t\t\t1:C PROGRAMMING:\t\t%d\n\n",cprog);
    printf("\t\t\t2:ENGINEERING PHYSICS:\t\t%d\n\n",engphy);
    printf("\t\t\t3:ENGINEERING MATHEMATHICS:\t%d\n\n",engmath);
    printf("\t\t\t4:HSMC:\t\t\t\t%d\n\n",hsmc);
    printf("\t\t\t5:COMPETITIVE PROGRAMMING:\t%d\n\n",compprog);
    printf("_________________________________________________________________________________\n\n");
    printf("\t\t\t  BITS'N'BYTES");
        break;
    case 3:
    printf("\t\t\t OVERALL ATTENDENCE:\n\t\t\t\t%2f\n",atd);
    if(atd<75)
    {
        printf("\n\t\t\tYOUR ATTENDENCE IS BELOW 75%\n\t\t\tPLEASE ATTEND CLASSES REGULARLY \n\n");
        printf("\t\t\t  BITS'N'BYTES");
    }
    else
    {
        break;
    }
    break;
    default: printf("wrong choise");
    }
    printf("\n\n");
    int cho;
printf("\t\tDO YOU WANT TO ENTER CHOICE AGAIN ?\n\t\t1. yes\n\t\t2. no\n");
scanf("%d",&cho);
switch (cho)
{
case 1:
goto OPEN;
    break;
default:
goto CLOSE;
}
END:
printf("login failed\n");
printf("Invalid User Name or Password\n");
printf("Enter User Name And Password Again\n");
goto VANSH;
printf("\n");
CLOSE:
printf("\t\t\tHAVE A NICE DAY\n\n");
return 0;
}
