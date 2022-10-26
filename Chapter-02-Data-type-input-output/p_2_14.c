#include <stdio.h>

int main() {
    double num1 = 10, num2 = 0;
    char ch;
    double addition = num1 + num2;
    double subtraction = num1 - num2;
    double multiplication = num1 * num2;
    double division = num1 / num2;

    
    printf("%lf A %lf = %.0lf\n",num1, num2, addition);
    printf("%lf s %lf = %.0lf\n",num1, num2, subtraction);
    printf("%lf m %lf = %.0lf\n",num1, num2, multiplication);
    printf("%lf d %lf = %.0lf\n",num1, num2, division);

    return 0;
}