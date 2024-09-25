#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

void check_prime_number(int num) {
    if(num < 2) {
        printf("%d is not a prime number.\n", num);
    } else {
        bool is_prime = true;

        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
}

int main() {
    int num;
    clock_t start, end;  // Variables to hold start and end times

    // Allocate memory dynamically for demonstration
    int *arr = (int *)malloc(100 * sizeof(int));  // Array of 100 integers

    printf("Please enter a number: ");
    scanf("%d", &num);

    // Measure memory usage with sizeof()
    size_t num_memory = sizeof(num);
    size_t arr_memory = 100 * sizeof(int);

    printf("\nMemory Usage:\n");
    printf("Memory used by 'num': %zu bytes\n", num_memory);
    printf("Memory used by dynamically allocated array 'arr[100]': %zu bytes\n", arr_memory);

    // Start measuring time
    start = clock();

    // Run the prime number check function
    check_prime_number(num);

    // Stop measuring time
    end = clock();

    // Calculate the time taken in seconds
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken to execute the function: %f seconds\n", time_taken);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
