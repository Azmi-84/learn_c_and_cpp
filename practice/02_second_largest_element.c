#include <stdio.h>

int main() {
  int i, n, lar, sec_lar;

  printf("Enter the no of elements of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: \n");

  for (i = 0; i < n; i++) {
    printf("%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  lar = arr[0];
  sec_lar = arr[1];

  for (int i = 0; i < n; i++) {
    if (arr[i] > lar) {
      lar = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] != lar) {
      if (arr[i] > sec_lar) {
        sec_lar = arr[i];
      }
    }
  }

  printf("Largest: %d\n", lar);
  printf("Second Largest: %d\n", sec_lar);

  return 0;
}
