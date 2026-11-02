#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
