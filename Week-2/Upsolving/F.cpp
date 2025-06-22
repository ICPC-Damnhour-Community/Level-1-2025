#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n ; cin >> n ;
    ll v[n+1] = {0} ;
    ll pre1[n+2] = {0} , pre2[n+2] = {0}; 
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    for(int i = 1 ; i <= n ; i++){
       pre1[i] = v[i] + pre1[i - 1];
    }
    sort(v,v+n+1);
    for(int i = 1 ; i <= n ; i++){
        pre2[i] = v[i] + pre2[i - 1];
     }
     int q ;
     cin >> q;
     while(q--){
        int t , l , r ;
        cin >> t >> l >> r ;
        if(t == 1){
            cout << pre1[r] - pre1[l - 1] << endl;
        }
        else if(t == 2){
            cout << pre2[r] - pre2[l - 1] << endl;
        }
     }
   return 0 ; 
}