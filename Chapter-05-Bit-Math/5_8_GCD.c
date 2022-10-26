#include <stdio.h>

int main()
{
    int a, b, x, gcd = 0;

    scanf("%d %d", &a, &b);

    if (a < b) {
        x = a;
    }
    else {
        x = b;
    }

    for (; x >= 1; x--) {
        if (a % x == 0 && b % x == 0) {
            gcd = x;
            break;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}


// In my way.//
// #include <stdio.h>

// int min(int a, int b)
// {
//     if (a > b) 
//         return b;
//     else 
//         return a;
// }

// int main()
// {
//     int a, b, x, gcd = 0;

//     scanf("%d %d", &a, &b);

//     x = min(a, b);

//     while(a % x == 0 && b % x == 0)
//     {
//         gcd = x;

//         x--;
//     }

//     printf("GDC is %d\n", gcd);

//     return 0;
// }