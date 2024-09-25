#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int rock_paper_scissor_game(const char* human, char* computer) {
    if(strcmp(human, computer) == 0) {
        return -1;
    }
    if((strcmp(human, "rock") == 0 && strcmp(computer, "scissor") == 0) ||
    (strcmp(human, "scissor") == 0 && strcmp(computer, "paper") == 0) ||
    (strcmp(human, "paper") == 0 && strcmp(computer, "rock") == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int random_number;

    char human[10], computer[10];

    srand(time(NULL));

    printf("Enter your choice (rock, paper or scissor): ");
    scanf("%s\n", human);

    random_number = rand() % 100;

    if(random_number < 33) {
        strcpy(computer, "rock");
    } else if(random_number > 33 && random_number < 66) {
        strcpy(computer, "paper");
    } else {
        strcpy(computer, "scissor");
    }


    printf("Computer chose: %s\n", computer);

    int result = rock_paper_scissor_game(human, computer);

    if(result == -1) {
        printf("It's a draw!\n");
    } else if(result == 1) {
        printf("You win!!\n");
    } else {
        printf("You lost!!");
    }

    return 0;
}