#include <stdio.h>

int main() {
    int i, j, sum;
    int arr[5][5] = {
                     {6, 4, 7, 8, 9},
                     {3, 7, 1, 9, 9},
                     {8, 6, 4, 2, 7},
                     {2, 4, 2, 5, 9},
                     {4, 1, 6, 7, 3},
                        };
        for(i = 0; i < 5; i++) {
            sum = 0;
            for(j = 0; j < 5; j++) {
                sum = sum + arr[j][i];
            }
                printf("Sum of column %d: %d\n", j + 1, sum);
        }  
        return 0;    
}