#include <stdio.h>

int main() {
    int n = 10;
    int rem, i;
    int ara[10];
    for(i =  0; n > 0; i++) {
        rem = n % 2;
        n = n / 2;
        ara[i] = rem;
    }

    for( = i - 1; j >= 0; j--) {
        printf("%d", ara[j]);
    }
    return 0;
}