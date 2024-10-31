#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    printf("Enter the length of the number: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int number = 0;
    for(i = 0; i < n; i++) {
        number = number + arr[i] * pow(10, n - i - 1);
    }

    printf("The number is: %d\n", number);
    return 0;
}
