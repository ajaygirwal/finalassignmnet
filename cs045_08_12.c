#include <stdio.h>

void removeDuplicates(char *str) {
    int seen[256] = {0};
    int targetIndex = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (seen[ch] == 0) {
            seen[ch] = 1;
            str[targetIndex++] = str[i];
        }
    }
    str[targetIndex] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    removeDuplicates(str);
    
    printf("Result: %s\n", str);
    
    return 0;
}
