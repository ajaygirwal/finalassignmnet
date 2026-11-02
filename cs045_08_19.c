#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceWord(const char* sentence, const char* oldWord, const char* newWord) {
    char* result;
    int i, cnt = 0;
    int newWordLen = strlen(newWord);
    int oldWordLen = strlen(oldWord);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (strstr(&sentence[i], oldWord) == &sentence[i]) {
            cnt++;
            i += oldWordLen - 1;
        }
    }

    result = (char*)malloc(i + cnt * (newWordLen - oldWordLen) + 1);
    if (result == NULL) {
        return NULL;
    }

    i = 0;
    while (*sentence) {
        if (strstr(sentence, oldWord) == sentence) {
            strcpy(&result[i], newWord);
            i += newWordLen;
            sentence += oldWordLen;
        } else {
            result[i++] = *sentence++;
        }
    }

    result[i] = '\0';
    return result;
}

int main() {
    char sentence[256];
    char oldWord[50];
    char newWord[50];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter the word to replace: ");
    fgets(oldWord, sizeof(oldWord), stdin);
    oldWord[strcspn(oldWord, "\n")] = '\0';

    printf("Enter the new word: ");
    fgets(newWord, sizeof(newWord), stdin);
    newWord[strcspn(newWord, "\n")] = '\0';

    char* modifiedSentence = replaceWord(sentence, oldWord, newWord);

    if (modifiedSentence != NULL) {
        printf("Modified sentence: %s\n", modifiedSentence);
        free(modifiedSentence);
    }

    return 0;
}
