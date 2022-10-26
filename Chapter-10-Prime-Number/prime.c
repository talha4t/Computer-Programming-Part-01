#include <stdio.h>

int main() {
    int n; // 9
    int m = 1;
    printf("enter a number: ");
    scanf("%d", &n); // 9

    // 0 -> false
    // non zero -> true, -1, 1, 2, 5, 2, 1 -> true

    for(int i = 2; i < n; i++) { // 3 < 9 -> true
        if(n % i == 0 ) { // 9 % 3 == 0 -> true
            m = 0;
            printf("NOT PRIME\n");
            break;
        }
    }
    // m -> true

    if (m == 1) {
        printf("PRIME");
    }


    return 0;
}
