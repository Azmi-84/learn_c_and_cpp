#include <stdio.h>

void sorted_descending(int array_01[], int array_02[], int size_01, int size_02) {
    // Sorting the first array in descending order
    for (int i = 0; i < size_01; i++) {
        int max_index = i;
        for (int k = i + 1; k < size_01; k++) {
            if (array_01[k] > array_01[max_index]) {  // For descending order
                max_index = k;
            }
        }
        // Swap
        int temp = array_01[max_index];
        array_01[max_index] = array_01[i];
        array_01[i] = temp;
    }

    // Sorting the second array in descending order
    for (int i = 0; i < size_02; i++) {
        int max_index = i;
        for (int k = i + 1; k < size_02; k++) {
            if (array_02[k] > array_02[max_index]) {  // For descending order
                max_index = k;
            }
        }
        // Swap
        int temp = array_02[max_index];
        array_02[max_index] = array_02[i];
        array_02[i] = temp;
    }

    // Printing the sorted arrays
    printf("Sorted first array in descending order: \n");
    for (int i = 0; i < size_01; i++) {
        printf("%d ", array_01[i]);
    }
    printf("\n");

    printf("Sorted second array in descending order: \n");
    for (int i = 0; i < size_02; i++) {
        printf("%d ", array_02[i]);
    }
    printf("\n");
}

void sorted_ascending(int array_01[], int array_02[], int size_01, int size_02) {
    // Sorting the first array in ascending order
    for (int i = 0; i < size_01; i++) {
        int min_index = i;
        for (int m = i + 1; m < size_01; m++) { // Fixed the loop condition here
            if (array_01[m] < array_01[min_index]) { // For ascending order
                min_index = m;
            }
        }
        // Swap
        int temp = array_01[min_index];
        array_01[min_index] = array_01[i];
        array_01[i] = temp;
    }

    // Sorting the second array in ascending order
    for (int i = 0; i < size_02; i++) {
        int min_index = i;
        for (int m = i + 1; m < size_02; m++) {
            if (array_02[m] < array_02[min_index]) { // For ascending order
                min_index = m;
            }
        }
        // Swap
        int temp = array_02[min_index];
        array_02[min_index] = array_02[i];
        array_02[i] = temp;
    }

    // Printing the sorted arrays
    printf("Sorted first array in ascending order: \n");
    for (int i = 0; i < size_01; i++) {
        printf("%d ", array_01[i]);
    }
    printf("\n");

    printf("Sorted second array in ascending order: \n");
    for (int i = 0; i < size_02; i++) {
        printf("%d ", array_02[i]);
    }
    printf("\n");
}

int main() {
    int size_01, size_02;

    printf("Enter the size of the first array: ");
    scanf("%d", &size_01);
    int array_01[size_01];  // Correctly declare the array after knowing the size

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size_01; i++) {
        scanf("%d", &array_01[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size_02);
    int array_02[size_02];  // Correctly declare the array after knowing the size

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size_02; i++) {
        scanf("%d", &array_02[i]);
    }

    sorted_descending(array_01, array_02, size_01, size_02);  // Sort in descending order
    sorted_ascending(array_01, array_02, size_01, size_02);   // Sort in ascending order

    return 0;
}
