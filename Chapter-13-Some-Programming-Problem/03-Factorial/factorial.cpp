#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int fact = 1;
    for (int i = 1; i < n; i++) {
        if (n == 0) {
           fact = 1;
        }
        fact = fact * (n - i);
    }

    cout << fact;

    return 0;
}