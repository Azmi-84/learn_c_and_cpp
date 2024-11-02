#include <stdio.h>

void inserting_element_in_ascending_order(int arr[], int *n) {
  int element;
  printf("Enter the element that has to be inserted: ");
  scanf("%d", &element);

  int i;
  for (i = *n - 1; (i >= 0 && arr[i] > element); i--) {
    arr[i + 1] = arr[i]; // Shift elements to the right
  }
  arr[i + 1] = element; // Insert the element in the correct position
  *n = *n + 1; // Increment the size of the array

  printf("Array after inserting %d is:", element);
  for (int k = 0; k < *n; k++) {
    printf(" %d", arr[k]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Enter the length of the array: ");
  scanf("%d", &n);

  int arr[n + 1]; // Allocate space for one extra element

  printf("Enter the elements of the array in ascending order:\n");
  for (int i = 0; i < n; i++) {
    printf("%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  inserting_element_in_ascending_order(arr, &n);
}
