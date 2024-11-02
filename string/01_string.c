#include <stdio.h>
#include <string.h>

void str_cmp(char *str1, char *str2) {
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else if (strcmp(str1, str2) < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }
}

void str_cat(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Concatenated string is %s\n", str1);
}

void str_cpy(char *str1, char *str2) {
    strcpy(str1, str2);
    printf("Copied string is %s\n", str1);
}

void str_len(char *str1, char *str2) {
    printf("Length of string is %d\n", strlen(str1));
    printf("Length of string is %d\n", strlen(str2));
}


int main() {
    char str1[] = "apple";
    char str2[] = "orange";

    str_cmp(str1, str2);
    str_cat(str1, str2);
    str_cpy(str1, str2);
    str_len(str1, str2);

    return 0;
}
