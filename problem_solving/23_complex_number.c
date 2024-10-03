#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* uinput() {
    char *string;
    size_t counter = 0;
    size_t allocated = 64;
    int c;
    string = malloc(allocated);

    do {
        c = getchar();
        if (c == EOF) {
            break;
        }
        string[counter++] = (char)c;
        if (counter >= allocated) {
            allocated *= 2;
            string = realloc(string, allocated);
        }
    } while (c != '\n');

    string[counter - 1] = '\0'; // Replace newline with null terminator
    return string;
}

void inverse_complex(double real, double imag, double* real_inv, double* imag_inv) {
    double denominator = real * real + imag * imag;
    *real_inv = real / denominator;
    *imag_inv = -imag / denominator;
}

int main() {
    while (1) {
        printf("Enter a complex number (real + imag*i) or 'exit' to quit: ");
        char *input = uinput();

        if (strcmp(input, "exit") == 0) {
            free(input);
            break;
        }

        double real, imag;
        // Parse input
        if (sscanf(input, "%lf + %lfi", &real, &imag) != 2 &&
            sscanf(input, "%lf - %lfi", &real, &imag) != 2) {
            printf("Invalid input format. Please enter in the format: a + bi or a - bi\n");
            free(input);
            continue;
        }

        double real_inv, imag_inv;
        inverse_complex(real, imag, &real_inv, &imag_inv);

        printf("Inverse: %.2f %+.2fi\n", real_inv, imag_inv);

        free(input);
    }

    return 0;
}
