#include <stdio.h>

union student{
char name[50];
int rollno;
char department[20];
float marks[3];
};

int main() {
union student s;

printf("Enter Student Name: ");
scanf("%[^\n]", s.name);

printf("Enter Roll Number: ");
scanf("%d", &s.rollno);

printf("Enter Department: ");
scanf(" %[^\n]", s.department);

printf("Enter Marks in 3 Subjects: ");
scanf("%f %f %f", &s.marks[0], &s.marks[1], &s.marks[2]);

printf("\nStudent Details:\n");
printf("Name: %s\n", s.name);
printf("Roll Number: %d\n", s.rollno);
printf("Department: %s\n", s.department);
printf("Marks: %.2f %.2f %.2f\n", s.marks[0], s.marks[1], s.marks[2]);

return 0;
}