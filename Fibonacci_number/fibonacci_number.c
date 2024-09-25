#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        printf("%d is not a prime number\n", n);
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number\n", n);
            return 0;
        }
    }
    printf("%d is a prime number\n", n);
    return 1;
}

int isEvenOrOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is an even number\n", n);
        return 1;
    } else {
        printf("%d is an odd number\n", n);
        return 0;
    }
}

void checkFibonacciProperties(int n) {
    int initial = 0, next = 1, temp;

    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", initial);
        isEvenOrOdd(initial);
        isPrime(initial);

        temp = next;
        next = initial + next;
        initial = temp;
    }
    printf("\n");
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number < 1) {
        printf("Please enter a number greater than 0.\n");
    } else {
        checkFibonacciProperties(number);
    }

    return 0;
}
