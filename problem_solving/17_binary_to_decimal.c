#include<stdio.h>

int bainary_to_decimal(int binary_number) {

    int number = binary_number;
    int decimal_number = 0;

    int base = 1;
    int temp = number;

    while(temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        decimal_number += last_digit * base;
        base = base * 2;
    }
    return decimal_number;
}

int main () {
    printf("Enter the binary number: ");
    int binary_number;
    scanf("%d", &binary_number);
    printf("Decimal number: %d\n", bainary_to_decimal(binary_number));
}