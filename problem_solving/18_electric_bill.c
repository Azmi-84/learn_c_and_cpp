#include<stdio.h>

void getInformation(char *name, char *id, float *units) {
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your id: ");
    scanf("%s", id);

    do {
        printf("Enter your units: ");
        scanf("%f", units);

        if (*units < 0) {
            printf("Invalid input. Please enter a positive number.\n");
        }
    } while (*units < 0);
    if(*units <= 50) {
        printf("Your bill is: %.2f\n", 0.50 * *units);
    } else if(*units <= 150) {
        printf("Your bill is: %.2f\n", 0.50 * 50 + 0.75 * (*units - 50));
    } else if(*units <= 250) {
        printf("Your bill is: %.2f\n", 0.50 * 50 + 0.75 * 100 + 1.20 * (*units - 150));
    } else {
        printf("Your bill is: %.2f\n", 0.50 * 50 + 0.75 * 100 + 1.20 * 100 + 1.50 * (*units - 250));
    }

    return;
}

int main() {
    char name[100], id[100];
    float units;
    getInformation(name, id, &units);
    return 0;
}
