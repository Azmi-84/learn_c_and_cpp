#include<stdio.h>
#include<stdlib.h>

void read_array(int num[], int n);
void display_array(int num[], int n);
void interchanging_lar_sml(int num[], int n);
int find_largest(int num[], int n);
int find_smallest(int num[], int n);

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* num = (int*)malloc(n * sizeof(int));

    read_array(num, n);
    display_array(num, n);
    interchanging_lar_sml(num, n);
    printf("The array after interchanging is: ");
    display_array(num, n);
    return 0;
}

void read_array(int num[], int n) {
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; ++i) {
        printf("Element[%d]: ", i+1);
        scanf("%d", &num[i]);
    }
}

void display_array(int num[], int n) {
    for (int j = 0; j < n; ++j) {
        printf("%d ", num[j]);
    }
    printf("\n");
}

void interchanging_lar_sml(int num[], int n) {
    int temp, big_pos, small_pos;
    big_pos = find_largest(num, n);
    small_pos = find_smallest(num, n);
    temp = num[big_pos];
    num[big_pos] = num[small_pos];
    num[small_pos] = temp;
}

int find_largest(int num[], int n) {
    int largest = 0;
    for (int i = 0; i < n; ++i) {
        if (num[i] > num[largest]) {
            largest = i;
        }
    }
    return largest;
}

int find_smallest(int num[], int n) {
    int smallest = 0;
    for (int i = 0; i < n; ++i) {
        if (num[i] < num[smallest]) {
            smallest = i;
        }
    }
    return smallest;
}