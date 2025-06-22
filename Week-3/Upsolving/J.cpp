#include <algorithm>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    ll n , m;
    cin >> n >> m ;
    ll a[n + 1] ;
    for(int i = 1 ; i <= n ;i++){
        cin >> a[i];
    }
    a[0] = 0 ;
    for(int i = 1 ; i <= n ;i++){
        a[i] += a[i - 1];
    }
    while(m--){
        ll x ;
        cin >> x ;
        ll pos = lower_bound(a,a+n,x) - a ;
        cout << pos << " " << x - a[pos - 1] << endl;

    }
    return 0;
}