#include <stdio.h>

int main() {
    int n = 10;
    int rem;
    int ara[10];
    int i = 0;

    while(n) {
        rem = n % 2;
        n = n / 2;
        ara[i] = rem;
        i++;
    }

    int j;
    for(j = i - 1; j >= 0; j--) {
        printf("%d", ara[j]);
    }
    return 0;
}