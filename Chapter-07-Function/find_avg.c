#include <stdio.h>

float find_avg(int ara[], int n);

int main() {
    int ara[] = {
        -100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85
    };

    int n = 11;
    float avg = find_avg(ara, n);

    printf("%lf\n", avg);
}

float find_avg(int ara[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum = sum + ara[i];
    }

    float avg = sum / 11;

    return avg;
}