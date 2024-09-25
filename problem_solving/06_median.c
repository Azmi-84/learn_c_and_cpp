#include<stdio.h>

// function to sort the array.

void sort_the_array(int arr[], int n) {

    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// function to find the median

void find_median(int arr[], int n) {

    double median;

    if(n % 2 == 1) {
        median = arr[n / 2];
    } else {
        median = (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
    
    printf("The median is: %.3f\n", median);
}

int main() {
    
    int n, i;

    printf("Enter the size of the list: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in list: \n", arr);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort_the_array(arr, n);

    find_median(arr, n);

    return 0;
}