#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        ll a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        int l = 0 , r = n - 1 ;
        while(l <= r){
            if(l == r){
                cout << a[l] << " " ;
                break;
            }
            cout << a[l] << " " << a[r] <<" ";
            ++l;
            --r;
        }
        cout << endl;
    }
   return 0 ; 
}
