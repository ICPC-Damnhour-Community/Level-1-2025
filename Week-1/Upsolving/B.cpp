#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n ;
    cin >> n ;
    ll a[n] , b[n] , pre[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    ll sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> b[i] ;
       pre[i] = a[i] * b[i] ; 
       if(i){
        pre[i] += pre[i - 1];
       }
    }
    ll ans = pre[n - 1];
    for(int i = 0 ; i < n ; i++){
        ll res = a[i] * b[i] ;
        for(int l = i - 1 , r = i + 1 ; l >=0 && r < n ; l-- ,r++){
            res += a[l] * b[r] + a[r] * b[l] ;
            ll z = 0 ;
            if(l - 1 >= 0){
                z = pre[l - 1] ;
            }
            ans = max(ans, res + z + pre[n -1] - pre[r]);
        }
        res = 0 ;
        for(int l = i , r = i + 1 ; l >=0 && r < n ; l-- ,r++){
            res += a[l] * b[r] + a[r] * b[l] ;
            ll z = 0 ;
            if(l - 1 >= 0){
                z = pre[l - 1] ;
            }
            ans = max(ans, res + z + pre[n -1] - pre[r]);
        }
    }
    cout << ans << endl;
   return 0 ; 
}
