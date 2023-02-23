#include <stdio.h>
struct Student {
  char name[50];
  int rollNo;
  char department[20];
  float marks[3];
};

int main() {
  struct Student s;

  // Input student details
  printf("Enter student name: ");
  scanf("%[^\n]s", s.name);

  printf("Enter roll number: ");
  scanf("%d", &s.rollNo);

  printf("Enter department: ");
  scanf("%s", s.department);

  printf("Enter marks of three subjects: ");
  scanf("%f %f %f", &s.marks[0], &s.marks[1], &s.marks[2]);

  // Output student details
  printf("\nStudent details:\n");
  printf("Name: %s\n", s.name);
  printf("Roll Number: %d\n", s.rollNo);
  printf("Department: %s\n", s.department);
  printf("Marks in three subjects: %.2f, %.2f, %.2f\n", s.marks[0], s.marks[1], s.marks[2]);

  return 0;
}
