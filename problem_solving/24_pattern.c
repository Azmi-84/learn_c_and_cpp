#include <stdio.h>

// Function to print a right half pyramid from the top
void right_half_pyramid_from_top(int n) {
    for (int i = 1; i <= n; i++) {        // Loop through rows
        for (int j = 1; j <= i; j++) {    // Loop through columns
            printf("*");                  // Print a star
        }
        printf("\n");                     // Move to the next line
    }
}

// Function to print a right half pyramid from the bottom
void right_half_pyramid_from_bottom(int n) {
    for (int i = 1; i <= n; i++) {                // Loop through rows
        for (int j = 1; j <= n - i + 1; j++) {    // Print stars decrementally
            printf("*");
        }
        printf("\n");                             // Move to the next line
    }
}

// Function to print a left half pyramid from the top
void left_half_pyramid_from_top(int n) {
    for (int i = 1; i <= n; i++) {                        // Loop through rows
        for (int j = 1; j <= n - i; j++) {                // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {                    // Print stars incrementally
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
}

// Function to print a left half pyramid from the bottom
void left_half_pyramid_from_bottom(int n) {
    for (int i = 1; i <= n; i++) {                        // Loop through rows
        for (int j = 1; j < i; j++) {                     // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= n - i + 1; j++) {            // Print stars decrementally
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
}

// Function to print a full pyramid
void full_pyramid(int n) {
    for (int i = 1; i <= n; i++) {                        // Loop through rows
        for (int j = 1; j <= n - i; j++) {                // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {            // Print stars to form a pyramid
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
}

// Function to print a rhombus
void rhombus(int n) {
    for (int i = 1; i <= n; i++) {                        // Loop through rows
        for (int j = 1; j <= n - i; j++) {                // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= n; j++) {                    // Print n stars on each row
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
}

// Function to print a diamond shape
void diamond(int n) {
    full_pyramid(n);                                      // Upper part (Full pyramid)
    for (int i = n - 1; i >= 1; i--) {                    // Lower part (Inverted full pyramid)
        for (int j = 1; j <= n - i; j++) {                // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {            // Print stars
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
}

// Function to print an hourglass shape
void hourglass(int n) {
    for (int i = n; i >= 1; i--) {                        // Upper part (Inverted full pyramid)
        for (int j = 1; j <= n - i; j++) {                // Print leading spaces
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {            // Print stars
            printf("*");
        }
        printf("\n");                                     // Move to the next line
    }
    for (int i = 2; i <= n; i++) {                        // Lower part (Full pyramid)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print a hollow square
void hollow_square(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {   // Print stars only at boundaries
                printf("*");
            } else {
                printf(" ");                              // Print space inside the square
            }
        }
        printf("\n");
    }
}

// Function to print Pascal's Triangle
void pascal_triangle(int n) {
    int coef = 1;
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;                                 // First element is always 1
            } else {
                coef = coef * (i - j + 1) / j;            // Calculate Pascal's coefficient
            }
            printf("%d ", coef);                          // Print the coefficient
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nRight Half Pyramid from Top:\n");
    right_half_pyramid_from_top(n);

    printf("\nLeft Half Pyramid from Top:\n");
    left_half_pyramid_from_top(n);

    printf("\nRight Half Pyramid from Bottom:\n");
    right_half_pyramid_from_bottom(n);

    printf("\nLeft Half Pyramid from Bottom:\n");
    left_half_pyramid_from_bottom(n);

    printf("\nFull Pyramid:\n");
    full_pyramid(n);

    printf("\nRhombus:\n");
    rhombus(n);

    printf("\nDiamond:\n");
    diamond(n);

    printf("\nHourglass:\n");
    hourglass(n);

    printf("\nHollow Square:\n");
    hollow_square(n);

    printf("\nPascal's Triangle:\n");
    pascal_triangle(n);

    return 0;
}
