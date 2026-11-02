#include <stdio.h>

int main() {
    FILE *fp;
    int ch, count = 0;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n')
            count++;
    }

    fclose(fp);
    printf("Total lines = %d\n", count);
    return 0;
}