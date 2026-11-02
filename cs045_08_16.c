#include <stdio.h>

void encryptString(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n') {
            str[i] = str[i] + 1;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        encryptString(str);
        printf("Encrypted: %s\n", str);
    }

    return 0;
}
