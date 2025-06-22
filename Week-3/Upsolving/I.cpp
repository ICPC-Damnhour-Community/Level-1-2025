#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    fast
    string t , b ;
    cin >> t >> b ;
    int n = t.size() , m = b.size() ;

    vector <int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        a[i]--;
    }
    int l = 0 , r = n - m , ans = 0 ;
    while(l <= r){
        int mid = l + (r - l) / 2 ;
        vector <bool> del(n);
        for(int i = 0 ; i < mid ;i++){
            del[a[i]] = true ;
        }
        int bx = 0 ;
        for(int i = 0; i < n && bx < m ; i++){
            if(!del[i] && t[i] == b[bx]){
                bx++;
            }
        }
        if(bx == m){
            ans = mid ;
            l = mid + 1;
        }
        else{
            r = mid - 1 ;
        }
    }
    cout << ans << endl;

    
    return 0;
}