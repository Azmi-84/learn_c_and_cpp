#include<stdio.h>

float check_result(float total_answers, float wrong_answers) {
    float result;

    result = total_answers - (wrong_answers + (wrong_answers * 0.25));

    return result;
}

int main() {
    int total_answers, wrong_answers;

    printf("Total answer :- ");
    scanf("%d", &total_answers);
    printf("Wrong answer :- ");
    scanf("%d", &wrong_answers);

    printf("Final Score :- %.2f\n", check_result(total_answers, wrong_answers));

    int result = check_result(total_answers, wrong_answers);

    if (result >= 95) {
        printf("Admission Status :- OIC FULL SCHOLARSHIP\n");
    } else if(result < 95 && result >= 70) {
        printf("Admission Status :- OIC PARTIAL SCHOLARSHIP\n");
    } else if(result < 70 && result > 40) {
        printf("Admission Status :- SELF FINANCED\n");
    } else {
        printf("Admission Status :- NOT ELIGIBLE\n");
    }
}