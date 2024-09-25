#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    int initial = x;
    int reversed = 0;

    while(x>0) {
        int convert = x % 10;
        reversed = reversed * 10 + convert;
        x /= 10;
    }
    return initial == reversed;
}

int main() {
    int num = 12321;
    bool result = isPalindrome(num);
    printf("\nIs the document is authentic? %s\n", result ? "\n\nYes" : "\n\nNo");
    return 0;
}