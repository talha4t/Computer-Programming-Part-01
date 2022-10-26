#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int to_find;
    cin >> to_find;

    int lo = 0, hi = n - 1;
    int mid;

    while(hi - lo > 1) {
        int mid = (hi + lo) / 2;

        if (v[mid] < to_find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    
    if (v[lo] == to_find) {
        cout << v[lo] << ed;
    }
    else if (v[hi] == to_find) {
        cout << v[hi] << ed;
    }
    else 
        cout << "Not found";

    return 0;
}