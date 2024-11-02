#include<stdio.h>
#include<stdlib.h>

int main() {
    int size_01, size_02, size_03, index_01 = 0, index_02 = 0, index_03 = 0;
    int* ptr_01;
    int* ptr_02;

    printf("Enter the size of the first array: ");
    scanf("%d", &size_01);
    ptr_01 = (int*)malloc(size_01 * sizeof(int));

    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < size_01; ++i) {
        printf("Element[%d]: ", i+1);
        scanf("%d", &ptr_01[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size_02);
    ptr_02 = (int*)malloc(size_02 * sizeof(int));

    if (ptr_01 == NULL || ptr_02 == NULL) {
        printf("Memory allocation failed!!!\n");
    } else {
        printf("Memory allocated successfully!!!\n");
    }

    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < size_02; ++i) {
        printf("Element[%d]: ", i+1);
        scanf("%d", &ptr_02[i]);
    }

    size_03 = size_01 + size_02;
    int* ptr_03 = (int*)malloc(size_03 * sizeof(int));

    while (index_01 < size_01 && index_02 < size_02) {
        if (ptr_01[index_01] < ptr_02[index_02]) {
            ptr_03[index_03++] = ptr_01[index_01++];
        } else {
            ptr_03[index_03++] = ptr_02[index_02++];
        }
    }

    if(index_01 == size_01) {
        while (index_02 < size_02) {
            ptr_03[index_03++] = ptr_02[index_02++];
        }
    } else {
        while (index_01 < size_01) {
            ptr_03[index_03++] = ptr_01[index_01++];
        }
    }

    printf("The elements of the merged array are: \n");
    for (int j = 0; j < size_03; ++j) {
        printf("%d ", ptr_03[j]);
    }

    return 0;
}