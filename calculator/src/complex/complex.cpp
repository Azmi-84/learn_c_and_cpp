#include <iostream>
#include <complex>
#include "complex_operations.h"

void complex_operations() {
    std::complex<double> z1(4.0, 3.0), z2(2.0, -1.0);

    std::complex<double> sum = z1 + z2;
    std::complex<double> product = z1 * z2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
}
