#include <stdio.h>

int main() {
    int i, j;

    for(i = 6; i >= 2; i--) {
        for(j = 1; j <= 11 - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(i = 1; i <= 6; i++) {
        for(j = 1; j <= 11 - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}