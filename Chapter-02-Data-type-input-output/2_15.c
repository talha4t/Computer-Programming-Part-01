#include <stdio.h>

int main() {
    double num1 = 10, num2 = 0;
    char sign;
    double addition = num1 + num2;
    double subtraction = num1 - num2;
    double multiplication = num1 * num2;
    double division = num1 / num2;

    sign = '+';
    printf("%lf %c %lf = %.0lf\n",num1, sign, num2, addition);
    sign = '-';
    printf("%lf %c %lf = %.0lf\n",num1, sign, num2, subtraction);
    sign = '*';
    printf("%lf %c %lf = %.0lf\n",num1,sign, num2, multiplication);
    sign = '/';
    printf("%lf %c %lf = %.0lf\n",num1, sign, num2, division);

    return 0;
}