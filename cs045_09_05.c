#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    int ch;
    int count = 0;

    if (fp == NULL) {
        printf("File not opened\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);
    printf("Total characters: %d\n", count);
    return 0;
}