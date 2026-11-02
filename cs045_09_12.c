#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Cannot create file\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nStudent %d\n", i);
        printf("Roll no: ");
        scanf("%d", &roll);
        printf("Name: ");
        scanf("%s", name);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%d %s %.2f\n", roll, name, marks);
    }

    fclose(fp);
    printf("\nRecords saved in students.txt\n");
    return 0;
}