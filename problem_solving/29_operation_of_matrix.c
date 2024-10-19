#include <stdio.h>

int main() {
  int row_01, col_01;

  printf("Enter the number of rows: ");
  scanf("%d", &row_01);
  printf("Enter the number of column: ");
  scanf("%d", &col_01);

  int matrix_01[row_01][col_01];

  printf("Enter the element of first matrix:\n");
  for (int k = 0; k < row_01; k++) {
    for (int m = 0; m < col_01; m++) {
      printf("Element[%d][%d]:- \n");
      scanf("%d", &matrix_01[k][m]);
    }
  }
  return 0;
}
