#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char text[] = "Hello World From C";
    
    removeSpaces(text);
    printf("%s\n", text);
    
    return 0;
}
