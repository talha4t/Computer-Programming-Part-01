#include <stdio.h>

int main() {
    int arr1[5][5] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40 ,50},
        {100, 200, 300, 400, 500},
        {1000, 2000, 3000, 4000, 5000},
        {10000, 20000, 30000, 40000, 50000}
    };
    int arr2[5][5];
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            arr2[j][i] = arr1[i][j];
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}