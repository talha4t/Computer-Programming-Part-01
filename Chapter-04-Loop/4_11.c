#include <stdio.h>

int main() {
    int i, j, n, m;

    printf("enter the number if N: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &m);

        for(j = 10; j <= m; j++) {
            if(m % 11 == 0) {
                continue;
            }

            printf("%d\n", j);
        }
    }
    return 0;
}