#include <stdio.h>

int main() {
    int n = 0;

    if(n < 0) {
        printf("the number is negative");
    }
    else if(n > 0) {
        printf("the number is positive");
    }
    else if(n == 0) {
        printf("the number is zero!");
    }
    
    return 0;
}