#include<stdio.h>
#include<stdlib.h>

int main() {
    int row_01, col_01, row_02, col_02;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row_01, &col_01);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row_02, &col_02);
    if (col_01 != row_02) {
        printf("Multiplication is not possible\n");
    } else {
        int mat_01[row_01][col_01], mat_02[row_02][col_02], mat_03[row_01][col_02];
        printf("Enter the elements of the first matrix: \n");
        for (int i = 0; i < row_01; i++) {
            for (int j = 0; j < col_01; j++) {
                printf("Element[%d][%d]: ", i+1, j+1);
                scanf("%d", &mat_01[i][j]);
            }
        }
        printf("Enter the elements of the second matrix: \n");
        for (int i = 0; i < row_02; i++) {
            for (int j = 0; j < col_02; j++) {
                printf("Element[%d][%d]: ", i+1, j+1);
                scanf("%d", &mat_02[i][j]);
            }
        }
        for (int i = 0; i < row_01; i++) {
            for (int j = 0; j < col_02; j++) {
                mat_03[i][j] = 0;
                for (int k = 0; k < col_01; k++) {
                    mat_03[i][j] += mat_01[i][k] * mat_02[k][j];
                }
            }
        }
        printf("The resultant matrix is: \n");
        for (int i = 0; i < row_01; i++) {
            for (int j = 0; j < col_02; j++) {
                printf("%d ", mat_03[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}