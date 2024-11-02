#include<stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr, i;
    ptr = &arr[2];
    // *ptr = -1;
    // *(ptr + 1) = -2;
    // *(ptr + 2) = -3;
    // for (i = 0; i < 5; i++) {
    //     printf("%d ", arr[i]);
    // }

    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    int arr2[5] = {1, 2, 3, 4, 5};
    int *ptr2;
    ptr2 = arr2;
    for (i = 0; i < 5; i++) {
        printf("\n%d ", *(ptr2 + i));
    }
    return 0;
}