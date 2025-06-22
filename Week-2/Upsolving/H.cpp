#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m ;
    ll a[n+2] = {0} , up[n+2] = {0} , down[n+2] = {0};
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    for(int i = 2 ; i <= n ; i++){
        up[i] = up[i - 1] + max(0LL,a[i - 1] - a[i]);
    }
    for(int i = n - 1 ; i >= 1 ; i--){
        down[i] = down[i + 1] + max(0LL,a[i + 1] - a[i]);
    }
    while(m--){
        int s , t ;
        cin >> s >> t ;
        if(s < t){
            cout << up[t] - up[s] << endl;
        }
        else{
            cout << down[t] - down[s] << endl;
        }
    }

   return 0 ; 
}