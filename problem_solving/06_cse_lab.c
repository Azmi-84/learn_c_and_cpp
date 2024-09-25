#include<stdio.h>

float getMeter(float Cm) {
    float result;

    result = Cm / 100;

    return result;
}
float getKm(float Cm) {
    float result;

    result = Cm / 100000;

    return result;
}

int main() {
    int operation;

    printf("select the operaion :- ");
    scanf("%d", &operation);


    int number;

    printf("Enter the num :- ");
    scanf("%d", &number);

    switch(operation) {
        case 0:
            printf("In meter :- %.2f", getMeter(number));
            break;
        case 1:
            printf("In km :- %.5f", getKm(number));
            break;
    }

}