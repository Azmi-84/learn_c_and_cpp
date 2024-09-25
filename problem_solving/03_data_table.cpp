#include<iostream>
#include<limits>
using namespace std;

double smallest_number(double table[3][4]) {
    double minVal = numeric_limits<double>::max( );

    for (int i = 0; i < 4; i++) {
        if (table[0][i] < minVal) {
            minVal = table[0][i];
        }
    }

    return minVal;
}

double largest_number(double table[3][4]) {
    double maxVal = numeric_limits<double>::min( );

    for (int i = 0; i < 4; i++) {
        if (table[2][i] > maxVal) {
            maxVal = table[2][i];
        }
    }

    return maxVal;
}

double multiplication(double table[3][4]) {
    double mul = 1;
    for (int i = 0; i < 4; i++) {
        mul *= table[1][i];
    }
    return mul;
}

int main() {
    double table[3][4];

    cout << "Enter input for 3x4 table: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> table[i][j];
        }
    }
    cout << "Smallest number: " << smallest_number(table) << endl;
    cout << "Largest number: " << largest_number(table) << endl;
    cout << "Multiplication: " << multiplication(table) << endl;

    return 0;
}