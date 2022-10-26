#include <stdio.h>

int find_sum(int ara[], int n);

int main() {
    int ara[] = {
        -100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85
    };
    int n = 11;
    int sum = find_sum(ara, n);

    printf("%d\n", sum);
    
    return 0;
}

int find_sum(int ara[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + ara[i];
    }

    return sum;
}