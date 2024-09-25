#include <stdio.h>

void printNumberInWords(int number) {
    // Define arrays for tens and units

    const char *units[] = {
        "", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    const char *tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    const char *teens[] = {
        "ten", "eleven", "twelve", "thirteen",
        "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen"
    };

    // Check if the number is valid
    if (number < 10 || number > 99) {
        printf("Please enter a two-digit number.\n");
        return;
    }

    // Extract the tens and units digits
    int tensPlace = number / 10;
    int unitsPlace = number % 10;

    // Print the corresponding words
    if (tensPlace == 1) {
        // Handle numbers from 10 to 19
        printf("%s\n", teens[unitsPlace]);
    } else {

        printf("%s", tens[tensPlace]);

        if (unitsPlace > 0) {

            printf(" %s\n", units[unitsPlace]);
        } else {
            printf("\n");
        }
    }
}

int main() {
    int number;

    // Prompt user for a two-digit number
    printf("Enter the two-digit number: ");
    scanf("%d", &number);

    // Print the number in words
    printNumberInWords(number);

    return 0;
}
