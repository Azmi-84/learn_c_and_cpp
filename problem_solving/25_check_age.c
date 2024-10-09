#include <stdio.h>

void check_input(int num) {
  int baby_age = 0;
  int school_age = 0;
  int adult_age = 0;
  int age = 0;

  for (int i = 1; i <= num; i++) {
    printf("Enter age of person %d: ", i);
    scanf("%d", &age);

    if (age >= 0 && age <= 5) {
      baby_age++;
    } else if (age > 5 && age <= 17) {
      school_age++;
    } else {
      adult_age++;
    }
  }

  printf("Number of babies: %d\n", baby_age);
  printf("Number of school-aged individuals: %d\n", school_age);
  printf("Number of adults: %d\n", adult_age);
}

int main() {
  int num;
  printf("Please enter how many people you want to check: ");
  scanf("%d", &num);

  check_input(num);
  return 0;
}
