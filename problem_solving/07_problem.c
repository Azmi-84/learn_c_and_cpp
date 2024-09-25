#include<stdio.h>

int main() {
    char array[9];

    printf("Enter the ID :- ");
    scanf("%s", array);

    if(array[8] % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    printf("Batch is %c%c\n", array[0], array[1]);

    // char dep = array[4]&array[5];
    // if(dep == 11) {
    //     printf("Mechanical\n", dep);
    // }

    if(array[6] == 1) {
        printf("Section :- A");
    } else if(array[6] == 2) {
        printf("Section :- B");
    } else if(array[6] == 3) {
        printf("Section :- C");
    } else {
        printf("Invalid ID and section dosen't exist !!!");
    }
}