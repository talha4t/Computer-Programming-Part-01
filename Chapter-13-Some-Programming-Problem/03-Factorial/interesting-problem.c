#include <stdio.h>

int is_prime(int n) {
    
    int i;
    if(n < 2) {
        return 0;
    }
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 99;
    int ara[100];

    for (int i = 0; i < 60; i++) {
        if (is_prime(i) == 1) {
            scanf("%d", &ara[i]);
        }
    }

    for (int i = 0; i < 60; i++) {
        printf("%d ", ara[i]);
    }

    return 0;
}