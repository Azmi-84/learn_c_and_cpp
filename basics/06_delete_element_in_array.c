#include <stdio.h>

int main() {
  int n, pos, i, j;
  
  printf("Enter the length of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("Enter the position from which the element has to be deleted: ");
  scanf("%d", &pos);

  for (j = pos; j < n-1; j++) {
    arr[j] = arr[j+1];
  }
  n--;

  printf("The array after deletion: \n");
  for (i = 0; i < n; i++) {
    printf("\n arr[%d] %d", i+1, arr[i]);
  }

  return 0;
}
