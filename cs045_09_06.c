#include <stdio.h>

int main() {
    FILE *fp;
    int ch, inWord = 0, count = 0;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    fclose(fp);
    printf("Total words = %d\n", count);
    return 0;
}