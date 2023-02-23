#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// define student structure
typedef struct {
    char name[30];
    int rollno;
    int marks[3];
} Student;

// function prototypes
void addStudent(Student students[], int *count);
void displayStudent(Student student);

int main() {
    int choice, count = 0;
    Student students[MAX_STUDENTS];

    do {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    displayStudent(students[i]);
                }
                break;
            case 3:
                printf("Quitting Program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    } while (choice != 3);

    return 0;
}

// function to add a student to the students array
void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter roll no: ");
    scanf("%d", &student.rollno);

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &student.marks[0], &student.marks[1], &student.marks[2]);

    students[*count] = student;
    (*count)++;

    printf("Student added successfully.\n");
}

// function to display a student's information and marks
void displayStudent(Student student) {
    printf("\nName: %s\n", student.name);
    printf("Roll No: %d\n", student.rollno);
    printf("Marks: %d %d %d\n", student.marks[0], student.marks[1], student.marks[2]);
}
