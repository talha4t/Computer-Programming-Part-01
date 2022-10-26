#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 13; i++) {
        for(j = 7; j > i; j--) {
            printf("*");
        }
        if(i >= 5) {
            for(j = 6; j < i ; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}