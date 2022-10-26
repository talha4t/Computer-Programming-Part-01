#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        }
    }

    printf("odd summation is: %d\n", sum);

    return 0;
}