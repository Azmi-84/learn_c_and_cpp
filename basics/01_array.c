#include<stdio.h>

int main() {
  int shafik_marapah[5];

  printf("Enter the values:- ");

  for(int i = 0; i < 5; i++) {
    scanf("%d", &shafik_marapah[i]);
  }

  for(int i = 0; i < 5; i++) {
    printf("The output is:- %d\n", shafik_marapah[i]);
    printf("The memory address is:- %p\n", shafik_marapah[i]);
  }
}