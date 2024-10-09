#include<stdio.h>

int main() {
  int array[5] = {1, 3, 5, 7, 9};
  int *pointer = array;

  for(int i = 0; i < 5; i++) {
    printf("Value of the array is:- %d and memory address is:- %p\n", array[i], &array[i]);
  }
  for(int i = 0; i < 5; i++) {
    printf("Value of the array using pointer:- %d\n", *(pointer+i));
  }
  return 0;
}
