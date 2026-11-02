#include <stdio.h>

int main() {
    FILE *fp;
    int a[100], n = 0, i, j, temp;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while (n < 100 && fscanf(fp, "%d", &a[n]) == 1) {
        n++;
    }
    fclose(fp);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Cannot write to file\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%d\n", a[i]);
    }
    fclose(fp);

    printf("File sorted successfully\n");
    return 0;
}

