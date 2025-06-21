#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    ll n , t ;
    cin >> n >> t ;
    int a[n] , pre[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int j = 0 , ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(i){
            pre[i] = pre[i - 1] + a[i];
        }
        else{
            pre[i] =  a[i];
            ans = max(ans , i - j) ;
        }
        while(pre[i] > t){
            pre[i] -= a[j] ;
            j++;
        }
        ans = max(ans , i - j + 1);
    }
    cout << ans << endl;
    
   return 0 ; 
}
