#include<stdio.h>

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

	printf("Memory representation of the matrix:\n");
	for (int k = 0; k < row; k++) {
		for (int m = 0; m < col; m++) {
			printf("%p\t", matrix[k][m]);
		}
		printf("\n");
	}

	int row_sum = 0;
	int col_sum = 0;
	for (int k = 0; k < row; k++) {
		for (int m = 0; m < col; m++) {
			row_sum += matrix[k][m];
			col_sum += matrix[m][k];
		}
	}

	printf("The sum of rows is: %d\n", row_sum);
	printf("The sum of columns is: %d\n", col_sum);

	return 0;
}