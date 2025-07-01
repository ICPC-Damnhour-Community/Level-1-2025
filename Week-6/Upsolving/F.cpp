 #include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
void solve() {
    ll l, r;
    cin >> l >> r;
    ll ans = l;
    for (int i = 0; i < 64; ++i) {
        ll x = ans | (1LL << i);
        if (x <= r)
            ans = x;
        else
            break;
    }
    cout << ans << "\n";
}
 
int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}