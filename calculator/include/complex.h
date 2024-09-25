#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
public:
    double real;
    double imaginary;
    Complex();
    Complex(double real, double imaginary);
    Complex operator+(const Complex &other) const;
    Complex operator-(const Complex &other) const;
    Complex operator*(const Complex &other) const;
};


#endif

