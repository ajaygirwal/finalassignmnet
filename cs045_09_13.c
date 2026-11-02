#include <stdio.h>

int main() {
    FILE *fp, *temp;
    int roll, r, found = 0;
    char name[50], newName[50];
    float marks, newMarks;

    printf("Enter roll no to update: ");
    scanf("%d", &roll);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Cannot create temp file\n");
        fclose(fp);
        return 1;
    }

    while (fscanf(fp, "%d %s %f", &r, name, &marks) == 3) {
        if (r == roll) {
            found = 1;
            printf("Enter new name: ");
            scanf("%s", newName);
            printf("Enter new marks: ");
            scanf("%f", &newMarks);
            fprintf(temp, "%d %s %.2f\n", r, newName, newMarks);
        } else {
            fprintf(temp, "%d %s %.2f\n", r, name, marks);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        printf("Record updated successfully\n");
    else
        printf("Record not found\n");

    return 0;
}