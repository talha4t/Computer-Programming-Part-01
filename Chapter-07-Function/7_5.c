#include <stdio.h>

double add(double x, double y);    // prototype

int main() {
    double a = 2.8, b = 2.7, c;

    c = add(a, b);   // function call 
    printf("%lf\n", c);

    return 0;
}

double add(double n1, double n2) {
    double sum = n1 + n2;

    return sum;
}
