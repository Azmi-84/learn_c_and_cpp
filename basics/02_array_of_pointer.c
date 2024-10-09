#include <stdio.h>

void calculate_electric_bill(int unit, int month) {
  if (unit <= 0 || month <= 0) {
    printf("Wrong input !!! Please provide a value greater than 0.\n");
  } else {
    if ((month % 2 == 1 || month == 1) && unit > 0 && unit <= 15) {
      int bill_01 = 12 * unit;
      printf("Your electricity bill is:- %d\n", bill_01);
    } else if (month % 2 == 0 && unit > 0 || unit <= 15) {
      int bill_02 = 10 * unit;
      printf("Your electricity bill is:- %d\n", bill_02);
    }
  }
  return;
}

int main() {
  // pointer_type *array_name[array_size];
  int var_01 = 10;
  int var_02 = 20;
  int var_03 = 30;

  int *pointer_array[3] = {&var_01, &var_02, &var_03};

  for(int i = 0; i < 3; i++) {
    printf("Value of variable:-%d is:- %d and address is:- %p\n", i+1, *pointer_array[i], pointer_array[i]);
  }

  char *name_of_code_editor[] = {"neovim", "vim", "vscodium", "jetbrain"};

  for (int k = 0; k < 4; k++) {
    printf("Text of the string is:- %s and address of the name_of_code_editor[%d] text is:- %p\n", name_of_code_editor[k], k+1, (void*)name_of_code_editor[k]);
  }

  int unit, month;

  printf("Please provide the total used unit:- ");
  scanf("%d", &unit);
  printf("Please provide the month (integer value):- ");
  scanf("%d", &month);

  void (*func_calculate_electric_bill[1])(int, int) = {&calculate_electric_bill};
  for (int m = 0; m < 1; m++) {
    func_calculate_electric_bill[m](unit, month);
  }
  return 0;
}
