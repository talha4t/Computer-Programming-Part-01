#include <stdio.h>

int is_prime(int n);

int main() {
    int n;
    while(1) {
        printf("enter a number:");
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        if(1 == is_prime(n)) {
            printf("PRIME\n");
        }
        else {
            printf("NOT PRIME\n");
        }
    }
    return 0;
}

int is_prime(int n) {
    int i;

    if(n < 2) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    for(n = 3; i <= n / 2; i = i + 2) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}