#include <stdio.h>

int main() {
    int i, n, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("summation is %d\n", sum);
    
    return 0;
}