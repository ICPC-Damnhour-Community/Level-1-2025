#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
const int w = 2e5 + 2 ;
ll pre[w] ;
int main() {
    int t ;
    cin >> t;
    while(t--){
        int n , k , ans = 0 ;
        string s ;
        cin >> n >> k >> s ;
        for(int i = 0 ; i < n ;i++){
            pre[i] = s[i] - '0' ;
            if(i){
                pre[i] += pre[i - 1] ;
            }
        }
        for(int i = 0 ; i < n ;i++){
            if(s[i] - '0'){
                i += k;
            }
            else if(pre[min(i + k , n - 1)] - pre[i] == 0){
                ans++;
                i += k;
            }
        }
        cout << ans << endl;
    }
   return 0 ; 
}
