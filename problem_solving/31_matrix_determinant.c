#include <stdio.h>
#include <stdlib.h>

int main() {
  int row, col;

  printf("Enter the row of the matrix:- ");
  scanf("%d", &row);

  printf("Enter the colum of the matrix:- ");
  scanf("%d", &col);

  int **matrix = (int **)malloc(sizeof(row * sizeof(int)));

  if (matrix == NULL) {
    printf("Memory allocation failed !!!\n");
  }

  for (int i = 0; i < row; i++) {
    matrix[i] = (int *)malloc(sizeof(col * sizeof(int)));

    if (matrix[i] == NULL) {
      printf("Memory allocation failed for rows !!!\n");
    }
  }

  if (row == col) {
    printf("Enter the elements of the matrix:- \n");
    for (int k = 0; k < row; k++) {
      for (int m = 0; m < col; m++) {
        printf("Element[%d][%d]:- ", k, m);
        scanf("%d", &matrix[k][m]);
      }
    }
  } else {
    printf("This is not a square matrix !!!\n");
  }
  printf("\nInput matrix is:- \n");

  for (int k = 0; k < row; k++) {
    for (int m = 0; m < col; m++) {
      printf("%d\t", matrix[k][m]);
    }
    printf("\n");
  }

  int two_dimension_matrix_determinant = 0;

  if (row == col && row == 2) {
    for (int k = 0; k < row; k++) {
      for (int m = 0; m < col; m++) {
        two_dimension_matrix_determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
      }
    }
    printf("The determinat of 2D matrix is:- %d\n", two_dimension_matrix_determinant);
  }

  // Determinant of nxn matrix using Gaussian Elimation


  for(int k = 0; k < row; k++) {
    free(matrix[k]);
  }
  free(matrix);
}
