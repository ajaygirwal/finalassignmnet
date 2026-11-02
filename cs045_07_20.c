#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student;

void addStudent(Student **students, int *count, int *capacity);
void displayStudents(const Student *students, int count);
void searchStudent(const Student *students, int count);

int main() {
    int capacity = 2;
    int count = 0;
    
    Student *students = (Student *)malloc(capacity * sizeof(Student));
    if (students == NULL) {
        return 1;
    }

    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display All\n3. Search\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) {
            break;
        }

        switch (choice) {
            case 1:
                addStudent(&students, &count, &capacity);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                free(students);
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    free(students);
    return 0;
}

void addStudent(Student **students, int *count, int *capacity) {
    if (*count >= *capacity) {
        *capacity *= 2;
        Student *temp = (Student *)realloc(*students, (*capacity) * sizeof(Student));
        if (temp == NULL) {
            printf("Memory full!\n");
            return;
        }
        *students = temp;
    }

    Student *s = &((*students)[*count]);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);
    
    getchar(); 
    
    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    (*count)++;
    printf("Record added!\n");
}

void displayStudents(const Student *students, int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-20s %-10.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
}

void searchStudent(const Student *students, int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    int target;
    printf("Enter Roll Number: ");
    scanf("%d", &target);

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == target) {
            printf("\nFound:\nRoll: %d\nName: %s\nMarks: %.2f\n", students[i].roll_no, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Not found.\n");
}
