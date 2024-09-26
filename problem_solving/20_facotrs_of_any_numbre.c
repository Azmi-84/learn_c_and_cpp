#include<stdio.h>

void factors_of_any_number(int number) {
    printf("The factors of %d are: ", number);
    for(int i = 1; i <= number; i++) {
        if(number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return;
}

int main() {
    int number;
    printf("Please provide a number: ");
    scanf("%d", &number);

    factors_of_any_number(number);
    return 0;
}
