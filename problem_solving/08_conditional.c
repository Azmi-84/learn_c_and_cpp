#include<stdio.h>

int main() {
    int num;

    printf("Input :- ");
    scanf("%d", &num);

    int num_02 = num / 10;

    printf("First digit :- %d\n", num_02);

    int another_num = num % 10;

    printf("Seoond digit :- %d\n", another_num);

}