#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main() {
    int n, m;
    while(1) {
        printf("\nplease enter a number:");
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        if(1 == is_prime(n)) {
            printf("PRIME");
        }
        else {
            printf("NOT PRIME");
        }
    }
    return 0;
}

int is_prime(int n) {
    int i, root;
    if(n < 2) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    if(n % 2 == 0) {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
