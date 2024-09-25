#include<stdio.h>
#include<string.h>

int isPalindrome(int x) {
    char str[20];
    sprintf(str, "%d", x);

    int left_starting_from_first_char = 0;
    int right_starting_from_last_char = strlen(str) - 1;

    while(left_starting_from_first_char < right_starting_from_last_char) {
        if(str[left_starting_from_first_char] != str[right_starting_from_last_char]) {
            return 0;
        }
        left_starting_from_first_char++;
        right_starting_from_last_char++;
    }
    return 1;
}

int main() {
    int num = 1221;

    if(isPalindrome(num)) {
        printf("Document is authentic!!!\n");
    } else {
        printf("Document is not authentic!!!\n");
    }
    return 0;
}