#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
 
    vector<int> l(m + 1), r(m + 1);
    vector<ll> d(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
 
 
    vector<ll> pre(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        pre[x]++;
        pre[y + 1]--;
    }
 
 
    for (int i = 1; i <= m; i++) {
        pre[i] += pre[i - 1];
    }
 
    vector<ll> sum(n + 2, 0);
    for (int i = 1; i <= m; i++) {
 
        ll val = pre[i] * d[i];
        sum[l[i]] += val;
        sum[r[i] + 1] -= val;
    }
 
 
    for (int i = 1; i <= n; i++) {
        sum[i] += sum[i - 1];
        a[i] += sum[i];
        cout << a[i];
        if (i < n) cout << " ";
    }
    cout << "\n";
 
    return 0;
}