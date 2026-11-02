#include <stdio.h>

int main() {
    char *books[] = {
        "Data Structures",
        "Computer Networks",
        "Operating Systems",
        "Database Management"
    };

    int n = sizeof(books) / sizeof(books[0]);

    printf("List of Books:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }

    return 0;
}
