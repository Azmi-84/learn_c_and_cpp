#include<stdio.h>

void finding_gcd(int num1, int num2) {
    int gcd =1;

    for(int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
}

int main() {
    int num1, num2;

    printf("Enter the first num :- ");
    scanf("%d", &num1);

    printf("Enter the second num :- ");
    scanf("%d", &num2);

    finding_gcd(num1, num2);

    return 0;
}