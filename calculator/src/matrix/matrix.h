#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
public:
    Matrix();
    Matrix(int rows, int cols);
    ~Matrix();

    int getRows();
    int getCols();
    void setRows(int rows);
    void setCols(int cols);
    void setElement(int row, int col, double value);
    double getElement(int row, int col);

private:
    int rows;
    int cols;
    vector<vector<double>> elements;
};

#endif