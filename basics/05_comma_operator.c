#include <stdio.h>

int main() {
  int a;
  printf("Enter the number: ");
  scanf("%d", &a);

  int b;
  printf("Enter the number: ");
  scanf("%d", &b);
  int x = 0;
  ++a;
  b+=a;
  a++;
  x = b;
  printf("Value of result is: %d\n", x);
  return 0;
}
