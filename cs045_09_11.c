#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *temp;
    char word[100], oldWord[50], newWord[50];

    printf("Enter word to replace: ");
    scanf("%s", oldWord);
    printf("Enter new word: ");
    scanf("%s", newWord);

    fp = fopen("sample.txt", "r");
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

    while (fscanf(fp, "%99s", word) == 1) {
        if (strcmp(word, oldWord) == 0)
            fprintf(temp, "%s ", newWord);
        else
            fprintf(temp, "%s ", word);
    }

    fclose(fp);
    fclose(temp);

    remove("sample.txt");
    rename("temp.txt", "sample.txt");

    printf("Word replaced successfully\n");
    return 0;
}