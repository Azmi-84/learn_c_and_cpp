#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_binary(int binary_number) {
    int check_number = binary_number;

    while (check_number) {
        if (check_number % 10 != 0 && check_number % 10 != 1) {
            return false;
        }
        check_number /= 10;
    }
    return true;
}

bool is_decimal(int decimal_number) {
    return decimal_number >= 0;
}

bool is_octal(int octal_number) {
    int check_number = octal_number;

    while (check_number) {
        if (check_number % 10 < 0 || check_number % 10 > 7) {
            return false;
        }
        check_number /= 10;
    }
    return true;
}

bool is_hexadecimal(char hex_number[]) {
    int i = 0;

    while (hex_number[i]) {
        char current = toupper(hex_number[i]);
        if (!isdigit(current) && (current < 'A' || current > 'F')) {
            return false;
        }
        i++;
    }
    return true;
}

int number_conversion(int number, int base) {
    int decimal_number = 0;
    int multiplier = 1;

    while (number) {
        int last_digit = number % 10;
        number /= 10;
        decimal_number += last_digit * multiplier;
        multiplier *= base;
    }
    return decimal_number;
}

int main() {
    int number;
    char hex_number[20];
    int choice;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (is_binary(number)) {
        printf("%d is a binary number\n", number);
    } else if (is_octal(number)) {
        printf("%d is an octal number\n", number);
    } else if (is_decimal(number)) {
        printf("%d is a decimal number\n", number);
    } else {
        printf("Enter the number in hexadecimal (up to 20 characters): ");
        scanf("%s", hex_number);

        if (is_hexadecimal(hex_number)) {
            printf("%s is a hexadecimal number\n", hex_number);
        } else {
            printf("Invalid number\n");
            return 1;
        }
    }

    printf("Choose the base to convert to: \n1. Binary\n2. Decimal\n3. Octal\n4. Hexadecimal\n");
    scanf("%d", &choice);

    int converted_number;

    switch (choice) {
        case 1:
            converted_number = number_conversion(number, 2);
            printf("%d in binary is %d\n", number, converted_number);
            break;
        case 2:
            converted_number = number_conversion(number, 10);
            printf("%d in decimal is %d\n", number, converted_number);
            break;
        case 3:
            converted_number = number_conversion(number, 8);
            printf("%d in octal is %d\n", number, converted_number);
            break;
        case 4:
            converted_number = number_conversion(number, 16);
            printf("%d in hexadecimal is %d\n", number, converted_number);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
