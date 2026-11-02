#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Element 1: %d\n", *ptr);

    ptr++;
    printf("Element 2: %d\n", *ptr);

    ptr = ptr + 2;
    printf("Element 4: %d\n", *ptr);

    ptr--;
    printf("Element 3: %d\n", *ptr);

    int *start = &arr[0];
    int *end = &arr[4];
    printf("Distance: %ld elements\n", end - start);

    if (end > start) {
        printf("End pointer is at a higher address than start pointer.\n");
    }

    return 0;
}
