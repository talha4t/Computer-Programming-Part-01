#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    scanf("%lf", fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("celsius = %0.2lf\n", celsius);
    
    return 0;
}