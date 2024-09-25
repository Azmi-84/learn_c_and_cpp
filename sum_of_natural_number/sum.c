#include<stdio.h>

int add(int n) {
    int sum = 0;

    for(int i = 0; i <= n; i++) {
        sum += i;
        printf("%d ", sum);
    }
}

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    add(number);

    return 0;
}