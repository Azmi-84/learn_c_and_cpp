#include <stdio.h>

void reversed_order(int num[], int n) {

  for (int k = 0; k < n; k++) {
    printf("Stored values are:- %d\n", num[k]);
  }
  for (int k = n-1; k >= 0; k--) {
    printf("The values in reversed order are:- %d\n", num[k]);
  }
}

void largest_element(int num[], int n) {

  int max = num[0];
  for (int k = 0; k < n; k++) {
    if (num[k] > max) {
      max = num[k];
    }
  }
  printf("The largest element in the array is:- %d\n", max);
}

void smallest_element(int num[], int n) {
  int min = num[0];
  for (int k = 0; k < n; k++) {
    if (num[k] < min) {
      min = num[k];
    }
  }
  printf("The smallest element in the array is:- %d\n", min);
}

void checking_duplication(int num[], int n) {
  int count = 0;
  printf("The duplicates are:- ");
  for (int k = 0; k < n; k++) {
    for (int m = k+1; m < n; m++) {
      if (num[k] == num[m]) {
        count++;
        printf(" %d ", num[k]);
        break;
      }
    }
  }
}

void sorting_ascending_order(int num[], int n) {
  for (int k = 0; k < n-1; k++) {
    int smallest = k;
    for (int m = k+1; m < n; m++) {
      if (num[m] < num[smallest]) {
        smallest = num[m];
      }
    }
  }
  printf("The sorted array in ascending order is:- ");
  for (int k = 0; k < n; k++) {
    printf("%d ", num[k]);
  }
}

void sorting_descending_order_order(int num[], int n) {
  for (int k = 0; k < n-1; k++) {
    int largest = k;
    for (int m = 0; m < n; m++) {
      if (num[k] > num[largest]) {
        largest = num[m];
      }
    }
  }
  printf("The sorted array in descending order is:- ");
  for (int k = 0; k < n; k++) {
    printf("%d ", num[k]);
  }
}

void sorting_ascending_order_after_merging(int first_array[],second_array[], int n1, int n2) {
  printf("Please provide the size for merging array(first one):- \n");
  scanf("%d", &n1);
  printf("Please provide the size for merging array(second one):- \n");
  scanf("%d", &n2);
  
  int n3 = n1 + n2;
  int third_array[n3];

  for (int k = 0; k < n1; k++) {
    third_array[k] = first_array[k];
  }
  for (int k = 0; k < n2; k++) {
    third_array[k] = second_array[k];
  }
  for (int k = 0; k < n3-1; k++) {
    for (int m = k+1; m < n3; m++) {
      int smallest = k;
      if (third_array[m] < third_array[smallest]) {
        smallest = third_array[k];
      }
    }
  }
}

int main() {
  int n;
  printf("Enter the size of the array:- ");
  scanf("%d", &n);

  int num[n];
  int first_array[n1];
  int second_array[n2];

  printf("Please provide the input:\n");
  for (int k = 0; k < n; k++) {
    printf("Input no %d:- ", k + 1);
    scanf("%d", &num[k]);
  }

  reversed_order(num, n);
  largest_element(num, n);
  smallest_element(num, n);
  checking_duplication(num, n);
  sorting_ascending_order(num, n);
  sorting_descending_order_order(num, n);
  return 0;
}
