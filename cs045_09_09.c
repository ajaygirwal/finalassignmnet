#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[50], search[50];
    int found = 0, count = 0;

    printf("Enter word to search: ");
    scanf("%s", search);

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while (fscanf(fp, "%49s", word) == 1) {
        if (strcmp(word, search) == 0) {
            found = 1;
            count++;
        }
    }

    fclose(fp);

    if (found)
        printf("Word found %d time(s)\n", count);
    else
        printf("Word not found\n");

    return 0;
}