#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);
}

int main() {
  int* ptr;
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  ptr = (int*)malloc(size * sizeof(int));

  if (ptr == NULL) {
    printf("Memory allocation failed!!!\n");
  } else {
    printf("Memory allocated successfully!!!\n");
  }

  for (int i = 0; i < size; ++i) {
    printf("Element[%d]: ", i+1);
    scanf("%d", &ptr[i]);
  }

  qsort(ptr, size, sizeof(int), compare);

  printf("The elements of the array after sorting are: \n");
  for (int j = 0; j < size; ++j) {
    printf("%d ", ptr[j]);
  }

  return 0;
}
