#include<stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 == row2) {
        int matrix1[row1][col1], matrix2[row2][col2], matrix3[row1][col2];
        printf("Enter the elements of the first matrix: \n");
        for (int i = 0; i < row1; i++) {
            for(int j = 0; j < col1; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the elements of the second matrix: \n");
        for (int i = 0; i < row2; i++) {
            for(int j = 0; j < col2; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }
        for (int i = 0; i < row1; i++) {
            for(int j = 0; j < col2; j++) {
                int sum = 0;
                for (int k = 0; k < col1; k++) {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                matrix3[i][j] = sum;
            }
        }
        printf("The product of the two matrices is: \n");
        for (int i = 0; i < row1; i++) {
            for(int j = 0; j < col2; j++) {
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("The multiplication is not possible.\n");
            }
}