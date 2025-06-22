#include <algorithm>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

void solve(){
    ll n , m , ta , tb , k ;
    cin >> n >> m >> ta >> tb >> k ;
    vector <ll> a(n) , b(m) ;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(ll i = 0 ; i < m ; i++){
        cin >> b[i] ;
    }
    if(k >= min(n ,m)){
        cout << -1 << endl;
        return;
    }
    ll ans = 0 ;
    for(ll i = 0 ; i < n ; i++){
        ll dif = k - i ;
        if (dif < 0){
            break;
        }
        ll lb = lower_bound(b.begin() , b.end() , a[i] + ta) - b.begin() ;
        lb += dif ;
        if(lb >= m){
            cout << -1 << endl;
            return ;
        }
        ans = max(ans , b[lb] + tb);
    }
    cout << ans << endl;
}
int main() {
    fast
    solve();
    return 0;
}