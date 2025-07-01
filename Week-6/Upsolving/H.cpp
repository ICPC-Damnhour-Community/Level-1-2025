#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
 
        ll n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        int res = 0;
        for (int bit = 30; bit >= 0; bit--) {
            int c = 0;
            for (int i = 0; i < n; i++) {
                if (((a[i] >> bit) & 1) == 0)
                    c++;
            }
 
            if (c <= k) {
                k -= c;
                res += (1 << bit);
            }
        }
        cout << res << '\n';
    }
    return 0;
}