#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char sub[100];

    printf("Enter main string: ");
    scanf("%99s", str);

    printf("Enter substring: ");
    scanf("%99s", sub);

    if (strstr(str, sub) != NULL) {
        printf("Exists\n");
    } else {
        printf("Does not exist\n");
    }

    return 0;
}
