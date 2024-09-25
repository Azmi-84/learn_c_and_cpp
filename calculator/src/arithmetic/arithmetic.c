#include<stdio.h>
#include "arithmetic.h"

void basic_arithmetic() {
    double a, b;
    char op;
}

printf("Enter expression: (e.g. 2+3): ");
scanf("%lf %c %lf", &a, &op, &b);

switch (op) {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
        break;
    default:
        printf("Invalid operator\n");
        break;
}
