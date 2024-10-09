#include <stdio.h>

void get_input(int num[], int n) {

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
}

int main() {
  int n;
  printf("Enter the size of the array:- ");
  scanf("%d", &n);

  int num[n];

  printf("Please provide the input:\n");
  for (int k = 0; k < n; k++) {
    printf("Input no %d:- ", k + 1);
    scanf("%d", &num[k]);
  }

  get_input(num, n);
  largest_element(num, n);
  smallest_element(num, n);
  checking_duplication(num, n);
  return 0;
}
