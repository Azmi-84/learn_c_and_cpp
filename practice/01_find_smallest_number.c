#include <stdio.h>

int main() {
  int i, n, small, pos;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    printf("\n%d: ", i);
    scanf("%d", &arr[i]);
  }

  small = arr[0];
  pos = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < small) {
      small = arr[i];
      pos = i;
    }
  }

  printf("The smallest element of the array is: %d\n", small);
  printf("The position is: %d\n", pos);

  return 0;
}
