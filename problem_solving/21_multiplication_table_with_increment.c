#include <stdio.h>

void getInput(int number, int increment_factor) {
    int range = 5;
    int i = 1;

    printf("Multiplication table of %d incremented by %d:\n", number, increment_factor);

    for (int count = 0; count < range; count++) {
        printf("%d * %d = %d\n", number, i, number * i);
        i += increment_factor;  // Incrementing by the user-provided value
    }
}

int main() {
    int number, increment_factor;

    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("Please provide the increment factor: ");
    scanf("%d", &increment_factor);

    getInput(number, increment_factor);

    return 0;
}
