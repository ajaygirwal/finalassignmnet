#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "a");

    if (fp == NULL) {
        printf("File not opened\n");
        return 1;
    }

    fprintf(fp, "This line is appended.\n");
    fprintf(fp, "New data added.\n");

    fclose(fp);
    printf("Data appended successfully\n");
    return 0;
}