#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    int i;

    if (fp == NULL) {
        printf("File not opened\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "This is a C program.\n");

    for (i = 1; i <= 5; i++) {
        fprintf(fp, "Line %d\n", i);
    }

    fclose(fp);
    printf("Data written successfully\n");
    return 0;
}

