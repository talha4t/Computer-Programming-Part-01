#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int fact = 1;
    for (int i = 0; i < n; i++) {
        fact = fact * (n - i);
    }

    printf("%d", fact);

    return 0;
}