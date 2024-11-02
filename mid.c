#include<stdio.h>

void printPattern(int rows) {
    int number = 1;
    int increment = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number+=increment;
            increment++;
        }
        printf("\n");
    }
    return;
}

void text_exchange(char text[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("%c ", text[i]);
    }
    int p1, p2;
    printf("\nEnter the first postion: ");
    scanf("%d", &p1);
    printf("Enter the second postion: ");
    scanf("%d", &p2);
    char temp = text[p1];
    text[p1] = text[p2];
    text[p2] = temp;
    for (int i = 0; i <= n; i++) {
        printf("%c ", text[i]);
}

    return;
}

void second_largest(int arr[], int n) {
    int largest = arr[0];
    int second_lar = arr[1];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if(second_largest != largest) {
            if (arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }
    }

    printf("The second largest number is: %d\n", second_largest);
    return;
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    int n;
    printf("Enter the number of text: ");
    scanf("%d", &n);
    char text[n];

    printf("Enter the text: ");
    for (int i = 0; i < n; i++) {
        scanf("%c", &text[i]);
    }
    text_exchange(text, n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    second_largest(arr, n);
    return 0;
}