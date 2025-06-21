#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
const int w = 2e5 + 2 ;
ll pre[w] ;

int main() {
    string s ;
    cin >> s;
    int n = s.size();
    pre[0] = 0 ;
    for(int  i = 1 ; i < n ; i++){
        if(s[i] == s[i - 1]){
            pre[i] = 1 ;
        }
    }
    for(int  i = 1 ; i < n ; i++){
       pre[i] += pre[i - 1] ;
    }
    int q ;
    cin >> q;
    while(q--){
        int l  , r ;
        cin >> l >> r ;
        cout << pre[r - 1] - pre[ l - 1 ] << endl;
    }
   return 0 ; 
}
