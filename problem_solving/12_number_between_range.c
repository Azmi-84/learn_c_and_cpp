#include<stdio.h>

float checkRange(float num, float range1, float range2){
    float result;

    if(num >= range1 && num <= range2){
        return 0;
    } else {
        return 1;
    }
    return result;
}

int main() {
    float num, range1, range2;

    printf("Enter the number: ");
    scanf("%f", &num);

    printf("Enter first range: ");
    scanf("%f", &range1);

    printf("Enter second range: ");
    scanf("%f", &range2);

    float result = checkRange(num, range1, range2);

    if(result == 0) {
        printf("%.1f is in between %.1f and %.1f", num, range1, range2);
    } else {
        printf("%.1f isn't in between %.1f and %.1f", num, range1, range2);
    }
}