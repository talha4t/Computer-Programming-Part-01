#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main() {
    int i, n1, n2;

    printf("enter a random 1st number:\n");
    scanf("%d", &n1);
    printf("enter a random 2nd number:\n");
    scanf("%d", &n2);

    for(i = n1; i <= n2; i++) {
        if(1 == is_prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int is_prime(int n) {
    int i, root;
    root = sqrt(n);

    if(n < 2) {
        return 0;
    }
    for(i = 2; i <= root; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
     return 1;   
}