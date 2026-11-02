#include <stdio.h>
#include <string.h>

void displayString(char str[]) {
    printf("\nCurrent String: %s\n", str);
}

void insertString(char mainStr[], char subStr[], int pos) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    if (pos < 0 || pos > mainLen) {
        printf("Invalid position!\n");
        return;
    }

    char temp[200];
    strncpy(temp, mainStr, pos);
    temp[pos] = '\0';
    strcat(temp, subStr);
    strcat(temp, mainStr + pos);
    strcpy(mainStr, temp);
}

void deleteString(char str[], int pos, int nChars) {
    int len = strlen(str);

    if (pos < 0 || pos >= len) {
        printf("Invalid position!\n");
        return;
    }

    if (pos + nChars > len) {
        nChars = len - pos;
    }

    for (int i = pos; i <= len - nChars; i++) {
        str[i] = str[i + nChars];
    }
}

int main() {
    char str[100] = "";
    int choice, pos, nChars;
    char subStr[50];

    printf("Enter initial string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        getchar();

        if (choice == 1) {
            displayString(str);
        } else if (choice == 2) {
            printf("Substring: ");
            fgets(subStr, sizeof(subStr), stdin);
            subStr[strcspn(subStr, "\n")] = '\0';
            printf("Position: ");
            scanf("%d", &pos);
            insertString(str, subStr, pos);
        } else if (choice == 3) {
            printf("Position: ");
            scanf("%d", &pos);
            printf("Count: ");
            scanf("%d", &nChars);
            deleteString(str, pos, nChars);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
