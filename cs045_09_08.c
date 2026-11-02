#include <stdio.h>

int main() {
    FILE *src, *dest;
    int ch;

    src = fopen("sample.txt", "r");
    if (src == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }

    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Cannot create destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully\n");
    return 0;
}