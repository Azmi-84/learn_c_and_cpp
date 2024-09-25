// int, obj, double, char, void, signed, const, struct, unsigned, float, floating point, short.

#include <iostream>

// variable initialization: 6 ways

int a; // no initializer (default initialization)
int b = 5; // initial value after sign (copy initialization)
int c(6); // initial value in parenthesis (direct initialization)

int d {4}; // initial value in braces (direct list initialization)
int e = {9}; // initial value in braces after equals sign (copy list initialization)
int f = {}; // intializer is empty braces (value initialization)

int main() {
    std::cout<<b<<'\n';

    b = 7;
    std::cout<<b<<'\n';

// An integer can only hold non-fractional values
    // int w1 { 4.5 }; // compile error: list init does not allow narrowing conversion of 4.5 to 4

    int w2 = 4.5;   // compiles: copy init initializes width with 4
    int w3(4.5);    // compiles: direct init initializes width with 4

    std::cout<<w2<<'\n';
    std::cout<<w3<<'\n';

    int width {}; // value initialization / zero initialization to value 0

    int x { 0 };    // explicit initialization to value 0
    std::cout << x<<'\n'; // we're using that zero value

    int y {};      // value initialization
    std::cin >> y; // we're immediately replacing that value

    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}
