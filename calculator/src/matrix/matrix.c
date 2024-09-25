#include <stdio.h>
#include "matrix.h"

void matrix_operations() {
    int rows1, cols1, rows2, cols2;

    printf("Enter dimensions of first matrix (rows and cols): ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter dimensions of second matrix (rows and cols): ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    double mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    // Collect inputs and compute the result (similar to the earlier example)
}
