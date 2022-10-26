#include <stdio.h>

int main() {
    int a, b, y, x, rem, gcd, lcm;

    scanf("%d %d", &a, &b);
        x = a;
        y = b;
        while (b != 0) {
            rem = x % y;
            x = y;
            y = rem;
        }
        gcd = x;
   
    lcm = (a * b) / gcd;

    printf("GCD is %d\n", lcm);

    return 0;
}