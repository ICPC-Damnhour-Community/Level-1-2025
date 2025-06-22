#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    int n , q ;
    cin >> n >> q ;
    ll a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    while(q--){
        ll k ; cin >> k ;
        int l = 0 , r = n - 1 ;
        bool found = 0 ;
        while(l <= r){
            int mid = l + (r - l) / 2 ;
            if(a[mid] == k){
                cout << mid + 1 << endl;
                found = 1 ;
                break;
            }
            else if(a[mid] > k){
                r = mid - 1 ;
            }
            else{
                l = mid + 1 ;
            }
        }
        if(!found){
            cout << -1 << endl;
        }
    }
    return 0;
}