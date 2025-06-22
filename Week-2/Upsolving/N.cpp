#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fast
    ll  n,x;cin >> n >> x;
    vector<pair<ll,ll>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    bool f = false;
    for (int i = 0; i < n && !f; i++) {
        ll target = x - a[i].first;

        int l = 0, r = n - 1;
        while (l < r) {
            if (l == i) {
                l++;
                continue;
            }
            if (r == i) {
                r--;
                continue;
            }
            ll sum = a[l].first + a[r].first;
            if (sum == target) {

                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                f = true;
                break;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    if (!f) {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}