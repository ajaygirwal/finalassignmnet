#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s = {101, "Amit Sharma", 85.5};
    struct Student *ptr = &s;

    printf("Roll No: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.1f\n", ptr->marks);

    return 0;
}
