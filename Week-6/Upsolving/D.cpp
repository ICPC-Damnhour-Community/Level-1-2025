#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;
void solve(){
    ll n , x ;
    cin >> n >> x ;
    int bit = __builtin_popcount(x) ;
    if(n <= bit){
        cout << x << endl;
        return ;
    }
    if((n - bit) % 2 == 0){
        cout << n + x - bit << endl;
    }
    else{
        if(x > 1){
             cout << n + x - bit + 1 << endl;
             return ;
        }
        if(x == 1){
            cout << n + 3 << endl;
            return;
        }
        else{
            if(n == 1){
                cout << -1 << endl;
                return;
            }
            else{
                cout << n + 3 << endl;
            }
        }
    }
}
int main() {
    fast
    int t ; cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}