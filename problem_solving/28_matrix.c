
#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];
     
    printf("Enter the elements of the matrix:\n");
    for (int k = 0; k < row; k++) {
        for (int m = 0; m < col; m++) {
            printf("Element [%d][%d]: ", k, m);
            scanf("%d", &matrix[k][m]);
        }
    }
    
    printf("\nThe matrix of %d x %d is:\n", row, col);
    for (int k = 0; k < row; k++) {
        for (int m = 0; m < col; m++) {
            printf("%d\t", matrix[k][m]);
        }
        printf("\n");
    }

    return 0;
}

