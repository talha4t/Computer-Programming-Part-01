#include <stdio.h>

int main() {
    int i, j;
    int even_count = 0, odd_count = 0;
    int namta[10][10];
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            namta[i][j] = (i + 1) * (j + 1);
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(namta[i][j] % 2 == 0) {
                even_count++;
            }
            else {
                odd_count++;
            }
            // printf("%d\n", namta[i][j]);
        }
    }
    printf("even number: %d  odd number: %d", even_count, odd_count);
    return 0;
}