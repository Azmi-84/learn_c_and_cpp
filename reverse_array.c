#include<stdio.h>

void reverse_arr(int arr[], int n) {
    int check_auth[n];
    int flag = 0;

    // Reverse the array into check_auth
    for(int i = 0; i < n; i++) {
        check_auth[i] = arr[n - i - 1];
    }

    // Check if the reversed array matches the original
    for(int i = 0; i < n; i++) {
        if(check_auth[i] != arr[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("The document is authentic\n");
    } else {
        printf("The document is not authentic\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_arr(arr, n);
    return 0;
}
