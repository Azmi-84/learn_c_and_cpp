#include<stdio.h>

// Function to check if the last digit is even or odd
void checkEvenOdd(char array[]) {
    if (array[8] % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

// Function to print the batch
void printBatch(char array[]) {
    printf("Batch is %c%c\n", array[0], array[1]);
}

// Function to print the department based on array[4] and array[5]
void printDepartment(char array[]) {
    if (array[4] == '1' && array[5] == '1') {
        printf("ME !!!\n");
    } else if (array[4] == '1' && array[5] == '2') {
        printf("IPE !!! EW EW EW !!!\n");
    } else if (array[4] == '1' && array[5] == '3') {
        printf("EEE !!! EW EW EW !!!\n");
    } else if (array[4] == '1' && array[5] == '4') {
        printf("CIVIL !!! EW EW EW !!!\n");
    } else if (array[4] == '1' && array[5] == '5') {
        printf("CSE !!! EW EW EW !!!\n");
    } else {
        printf("Unknown Department\n");
    }
}

// Function to print the section based on array[6]
void printSection(char array[]) {
    // converting the last two digits into integer
    int last_two_digits = (array[7] - '0') * 10 + (array[8] - '0');

    if(array[6] == '1' && last_two_digits % 2 == 1) {
        printf("Section :- A1\n");
    } else if(array[6] == '1' && last_two_digits % 2 == 0) {
        printf("Section :- A2\n");
    } else if(array[6] == '2' && last_two_digits % 2 == 1) {
        printf("Section :- B1\n");
    } else if(array[6] == '2' && last_two_digits % 2 == 0) {
        printf("Section :- B2\n");
    } else {
        printf("Invlaid ID\n");
    }

    return;
}
int main() {
    char array[9];

    printf("Enter the ID :- ");
    scanf("%s", &array);

    checkEvenOdd(array);      // Check if ID is even or odd
    printBatch(array);        // Print batch
    printDepartment(array);   // Print department
    printSection(array);      // Print section

    return 0;
}
