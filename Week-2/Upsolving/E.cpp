#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n ;
    cin >> n ;
    ll a[n] , b[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    ll sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> b[i] ;
        sum += a[i] * b[i] ; 
    }
    ll ans = sum ;
    //odd
    for(int i = 0 ; i < n ; i++){
        ll res = sum ;
        int l = i - 1 , r = i + 1 ;
        while(l >= 0 && r < n){
            res -= a[l] * b[l] + a[r] * b[r] ;
            res += a[l] * b[r] + a[r] * b[l] ;
            l--;
            r++;
            ans = max(res , ans) ;

        }
    }
    //even
    for(int i = 0 ; i < n ; i++){
        ll res = sum ;
        int l = i , r = i + 1 ;
        while(l >= 0 && r < n){
            res -= a[l] * b[l] + a[r] * b[r] ;
            res += a[l] * b[r] + a[r] * b[l] ;
            l--;
            r++;
            ans = max(res , ans) ;

        }
    }
    cout << ans << endl;
   return 0 ; 
}