#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    
    int n;cin >> n;
    int a[n], f[20] = {};
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 20; j++) {
            f[j] += (a[i] >> j) & 1;
        }
    }
 
    ll s = 0; 
    for (int i = 0; i < n; i++) {
        ll x = 0;
        for (int j = 0; j < 20; j++) {
            if (f[j]) {
                f[j]--;
                x += (1 << j);
            }
        }
        s += x * x;
    }
 
    cout << s;
    return 0;
}