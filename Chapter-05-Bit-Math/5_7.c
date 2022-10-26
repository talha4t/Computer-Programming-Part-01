#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = 1.8 * celsius + 32;

    printf("temperature in fahrenheit is: %.0lf\n", fahrenheit);

    return 0;
}