#include <stdio.h>
#include "trigonometry.h"
#include <math.h>

void trigonometry() {
    double angle;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);

    double radians = angle * M_PI / 180.0;

    printf("sin(%lf) = %.2lf\n", angle, sin(radians));
    printf("cos(%lf) = %.2lf\n", angle, cos(radians));
    printf("tan(%lf) = %.2lf\n", angle, tan(radians));
}