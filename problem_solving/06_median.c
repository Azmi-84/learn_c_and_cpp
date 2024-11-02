#include <stdio.h>

void printPattern(int rows) {
    int start = 1;  // Starting number for the first row
    int increment = 1;  // Initial increment for the first row

    for (int i = 1; i <= rows; i++) {
        int num = start;
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
            num += increment + j;  // Increment changes within the row
        }
        printf("\n");
        start += increment + (i - 1);  // Update start for the next row
        increment += 1;  // Increment increases by 2 for each new row
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printPattern(rows);
    return 0;
}