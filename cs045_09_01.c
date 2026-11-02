#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;

    file_ptr = fopen("message.txt", "w");

    if (file_ptr == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }

    fprintf(file_ptr, "Hello! This is a simple message written into a text file.\n");
    fprintf(file_ptr, "The C program successfully demonstrated basic file I/O operations.\n");

    fclose(file_ptr);

    printf("Success! 'message.txt' has been created.\n");

    return 0;
}
