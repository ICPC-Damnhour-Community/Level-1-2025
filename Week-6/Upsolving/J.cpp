#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 5;
int a[N], p[N];

int main() {
    
    int n, q; cin >> n >> q;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        p[i] = p[i - 1] ^ a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (p[r] ^ p[l - 1]) << '\n';
    }

    return 0;
}