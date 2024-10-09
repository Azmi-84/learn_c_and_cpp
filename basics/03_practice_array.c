#include <stdio.h>

void take_input(int num[10]) {
  for (int i = 0; i < 10; i++) {
    printf("element:- %d :- ", i+1);
    scanf("%d", &num[i]);
  }

  printf("Elements in the array are:- ");
  for (int k = 0; k < 10; k++) {
    printf("%d ", num[k]);
  }
  printf("\n");
}

int main() {
  int num[10];

  take_input(num);
}
