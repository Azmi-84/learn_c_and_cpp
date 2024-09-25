#include<stdio.h>

float getSalary(float hour, float amount) {
    float total_salary = hour * amount;
    return total_salary;
}

int main() {
    int ID;
    float hour, amount;

    printf("Employess ID :- ");
    scanf("%d", &ID);
    printf("Working hours :- ");
    scanf("%f", &hour);
    printf("Salary amount per hour :- ");
    scanf("%f", &amount);

    printf("Employess ID :- %d\n", ID);
    printf("Total salary :- %.3f\n", getSalary(hour, amount));
    return 0;
}