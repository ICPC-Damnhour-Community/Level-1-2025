#include <algorithm>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

ll sum(ll n){
    return n * (n + 1) / 2 ;
}
int main() {
    fast;
    ll n , d ;
    cin >> n >> d ;
    vector <ll> a(n + 1 ,0);
    for(int i = 1 ; i <= n ;i++){
        cin >> a[i] ;
    }
    ll res = 0 ;
    for(int i = 1 ; i <= n ;i++){
        ll tar = a[i] + d ;
        ll k = upper_bound(a.begin(),a.end(),tar) - a.begin() - 1 ;
        if(k == n + 1){
            k--;
        }
        if(k - i >= 2){
            res += sum(k - i -1);
        }
    }
    cout << res << endl;
       
    return 0;
}