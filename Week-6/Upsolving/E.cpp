#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define IS_ON(n , k) (((n) >> (k)) & 1)
using namespace std;
const int N = 2e5 + 10 ;
int p[N][35];
void start(){
    for(int i = 0 ; i < N ; i++){
      for(int bit = 0 ; bit < 32 ; bit++){
        p[i][bit] = p[i - 1][bit] ;
        if(IS_ON(i , bit)){
            p[i][bit]++;
        }
      }  
    }
}

void solve(){
    int l , r ;
    cin >> l >> r ;
    int ans = r - l + 1 ;
    for(int bit = 0 ; bit < 32 ; bit++){
        int cnt = p[r][bit] - p[l - 1][bit] ;
        ans = min(ans , (r - l + 1) - cnt) ;
    }
    cout << ans << endl ;
}
int main() {
    fast
    start();
    int t ; cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}