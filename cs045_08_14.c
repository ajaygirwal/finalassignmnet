#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[200] = "";
    char current[200] = "";
    int i = 0, j = 0;
    int max_len = 0, current_len = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t') {
            current[j++] = sentence[i];
            current_len++;
        } else {
            if (current_len > 0) {
                current[j] = '\0';
                if (current_len > max_len) {
                    max_len = current_len;
                    strcpy(longest, current);
                }
                current_len = 0;
                j = 0;
            }
        }
        i++;
    }

    if (current_len > max_len) {
        current[j] = '\0';
        strcpy(longest, current);
    }

    if (strlen(longest) > 0) {
        printf("The longest word is: %s\n", longest);
    } else {
        printf("No words found.\n");
    }

    return 0;
}
