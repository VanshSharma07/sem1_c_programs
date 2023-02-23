//header files
#include<stdio.h>
struct stu
{
    //variable declaration
    char n[20],s[10],d[10],f[20],a[30];
    int r,cprog,engphy,engmath,hsmc,compprog,ch,choice;
    float p,tm,atd;
}x;
//main opening
int main()
{
     FILE *fp;
    fp = fopen("reports.txt","a");
    //fprintf and scanf input and output statements
    printf("\n");
    printf("ENTER STUDENT NAME:");
    gets(x.n);
    printf("ENTER FATHERS NAME:");
    gets(x.f);
    printf("ENTER ADDRESS:");
    gets(x.a);
    printf("ENTER YOUR SECTION:");
    scanf("%s",&x.s);
    printf("ENTER DEPARTMENT NAME:");
    scanf("%s",&x.d);
    printf("ENTER ATTENDENCE OF STUDENT:");
    scanf("%f",&x.atd);
    printf("ENTER ROLL NUMBER:");
    scanf("%d",&x.r);
    printf("ENTER MARKS OF 5 SUBJECTS:\n1:C PROGRAMMING:\n2:ENGINEERING PHYSICS:\n3:ENGINEERING MATHEMATICS:\n4:HSMC:\n5:COMPETITIVE PROGRAMMING:\n");
    scanf("%d%d%d%d%d",&x.cprog,&x.engphy,&x.engmath,&x.hsmc,&x.compprog);
    //sum statement
    x.tm=x.cprog+x.engphy+x.engmath+x.hsmc+x.compprog;
    //percentage
    x.p=(x.tm*100)/500;
    OPEN:
    printf("\t\t\tENTER CHOICE:\t\t\t\n\t\t\t1:STUDENT RESULT:\t\t\t\n\t\t\t2:SUBJECT WISE PERFORMANCE:\t\t\t\n\t\t\t3:STUDENT ATTENDENCE:");
    scanf("%d",&x.ch);
    printf("\n\n");
    switch (x.ch)
    {
        case 1:
    fprintf(fp,"_________________________________________________________________\n\n");
    fprintf(fp,"\t\t\t   WELCOME TO MIET\t\t\t");
    fprintf(fp,"\n\n\n");
    fprintf(fp,"\t\tNAME:\t\t\t%s\n",x.n);
    fprintf(fp,"\t\tFATHER NAME:\t%s\n",x.f);
    fprintf(fp,"\t\tADDRESS:\t\t%s\n",x.a);
    fprintf(fp,"\t\tSECTION:\t\t%s\n",x.s);
    fprintf(fp,"\t\tDEPARTMENT NAME:%s\n",x.d);
    fprintf(fp,"\t\tROLL NO.:\t\t%d\n",x.r);
    fprintf(fp,"\n\n");
    fprintf(fp,"\t\t\t   RESULT  \t\t\t");
    fprintf(fp,"\n\n\n");
    fprintf(fp,"\t\tTOTAL MARKS:\t%f\n",x.tm);
    fprintf(fp,"\t\tPERCENTAGE:\t\t%f\n",x.p);
    if(x.p>90)
    {
        fprintf(fp,"\t\tGrade:\t\t\tA+");
    }
    else if (x.p>80&&x.p<=90)
    {
        fprintf(fp,"\t\tGrade:\t\t\tA");
    }
    else if(x.p>70&&x.p<=80)
    {
        fprintf(fp,"\t\tGrade:\t\t\tB");
    }
    else if(x.p>60&&x.p<=40)
    {
        fprintf(fp,"\t\tGrade:\t\t\tc");
    }
    else if (x.p<40)
    {
        fprintf(fp,"\t\tFAIL");
    }   
    fprintf(fp,"\n\n");
    fprintf(fp,"\t\t\tTHANKS FOR VISITING\n");
    fprintf(fp,"\t\t\t\t  MIET\t\t\t\t");
    fprintf(fp,"\n\n");
    fprintf(fp,"_________________________________________________________________\n\n");
    fprintf(fp,"\n");
    fprintf(fp,"\t\t\t  BITS'N'BYTES");
    break;
    case 2:
    fprintf(fp,"_________________________________________________________________________________\n\n");
    fprintf(fp,"\n\t\t\tSUBJECT WISE PERFORMANCE : \n\n");
    fprintf(fp,"\n");
    fprintf(fp,"\t\t\tSUBJECT NAME :\t\t  MARKS OBTAINED\n\n");
    fprintf(fp,"\t\t\t1:C PROGRAMMING:\t\t\t%d\n\n",x.cprog);
    fprintf(fp,"\t\t\t2:ENGINEERING PHYSICS:\t\t%d\n\n",x.engphy);
    fprintf(fp,"\t\t\t3:ENGINEERING MATHEMATHICS:\t%d\n\n",x.engmath);
    fprintf(fp,"\t\t\t4:HSMC:\t\t\t\t\t\t%d\n\n",x.hsmc);
    fprintf(fp,"\t\t\t5:COMPETITIVE PROGRAMMING:\t%d\n\n",x.compprog);
    fprintf(fp,"_________________________________________________________________________________\n\n");
    fprintf(fp,"\t\t\t  BITS'N'BYTES");
        break;
    case 3:
    fprintf(fp,"\t\t\t OVERALL ATTENDENCE:\n\t\t\t\t%2f\n",x.atd);
    if(x.atd<75)
    {
        fprintf(fp,"\n\t\t\tYOUR ATTENDENCE IS BELOW 75%\n\t\t\tPLEASE ATTEND CLASSES REGULARLY \n\n");
        fprintf(fp,"\t\t\t  BITS'N'BYTES");
    }
    else
    {
        fprintf(fp,"\n\t\t\tGREAT!!! \n\t\t\t YOUR ATTENDENCE IS ABOVE 75%  ");
        break;
    }
    break;
    default: fprintf(fp,"wrong choice");
    }
    fprintf(fp,"\n\n");
    int cho;
printf("\t\tDO YOU WANT TO ENTER CHOICE AGAIN ?\n\t\t1. yes\n\t\t2. no\n");
scanf("%d",&cho);
switch (cho)
{
case 1:
goto OPEN;
    break;
default:
fprintf(fp,"\t\t\tHAVE A NICE DAY\n\n");
fclose(fp);
return 0;
}
}
