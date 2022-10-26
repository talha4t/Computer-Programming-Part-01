#include <stdio.h>

int main() {
    double t, v, s;
    
    printf("enter the velocity: ");
    scanf("%lf", &v);

    printf("enter time: ");
    scanf("%lf", &t);

    s = 2 * v * t;

    printf("your distance is = %0.0lfm\n", s);

    return 0;
}