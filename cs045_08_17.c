#include <stdio.h>
#include <ctype.h>

void decrypt(char text[], int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (islower(ch)) {
            text[i] = (ch - 'a' - key + 26) % 26 + 'a';
        } else if (isupper(ch)) {
            text[i] = (ch - 'A' - key + 26) % 26 + 'A';
        }
    }
}

int main() {
    char ciphertext[256];
    int key;

    printf("Enter the encrypted message: ");
    fgets(ciphertext, sizeof(ciphertext), stdin);

    printf("Enter the shift key: ");
    scanf("%d", &key);

    decrypt(ciphertext, key);

    printf("Decrypted message: %s", ciphertext);

    return 0;
}
