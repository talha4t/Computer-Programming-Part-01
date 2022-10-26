#include <stdio.h>

int main() {
    int ara1[] = {3, 1, 5, 2, 4};
    int i, j, temp;

    for(i = 0; i < 4 ; i++) {

        for(j = i + 1; j < 5; j++) {
            if(ara1[j] < ara1[i]) {
              temp = ara1[j];
              ara1[j] = ara1[i];
              ara1[i] = temp;
            }
        }  
    }

    for(i = 0; i < 5; i++) {
        printf("%d\n", ara1[i]);
    }

    return 0;
}