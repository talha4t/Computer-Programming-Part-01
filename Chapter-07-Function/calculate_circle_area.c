#include <stdio.h>

float circle_area(float pi, float r);

int main() {
    float pi = 3.1416;
    float r;
    float area = circle_area(pi, r);

    printf("%0.2f\n", area);

    return 0;
}

float circle_area(float pi, float r) {
    scanf("%f", &r);

    float circle_area = pi * r * r;

    return circle_area;
}