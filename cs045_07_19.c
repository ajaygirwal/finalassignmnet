#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} Element;

typedef struct {
    int max_rows;
    int max_cols;
    int num_non_zero;
    Element *data;
} SparseMatrix;

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) {
        return 1;
    }

    int **matrix = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int *)malloc(c * sizeof(int));
    }

    int count = 0;
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }

    SparseMatrix sparse;
    sparse.max_rows = r;
    sparse.max_cols = c;
    sparse.num_non_zero = count;
    sparse.data = (Element *)malloc(count * sizeof(Element));

    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != 0) {
                sparse.data[k].row = i;
                sparse.data[k].col = j;
                sparse.data[k].value = matrix[i][j];
                k++;
            }
        }
    }

    printf("\nRow\tColumn\tValue\n");
    for (int i = 0; i < sparse.num_non_zero; i++) {
        printf("%d\t%d\t%d\n", sparse.data[i].row, sparse.data[i].col, sparse.data[i].value);
    }

    free(sparse.data);
    for (int i = 0; i < r; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
