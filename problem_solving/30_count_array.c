#include<stdio.h>
#include<stdlib.h>

int main() {
  int size;

  printf("Please enter the size of the array:- ");
  scanf("%d", &size);

  int *array = (int *)malloc(size * sizeof(int));

  if (array == NULL) {
    printf("Memory allocation failed!!!\n");
    return 1;
  }

  printf("Enter the elements of the array:- \n");
  for (int i = 0; i < size; i++) {
    printf("Element no[%d]:- ", i);
    scanf("%d", &array[i]);
  }
  
  printf("Array's elements are:-");
  for (int i = 0; i < size; i++) {
    printf(" %d", array[i]);
  }
  printf("\n");
  free(array);
  return 0;
}
