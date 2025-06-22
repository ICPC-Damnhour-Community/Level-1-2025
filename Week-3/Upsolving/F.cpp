#include <algorithm>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    int n ;
    cin >> n ;
    ll a[n] ,  b[n] ;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i] ;
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ;i++){
        b[i] = a[i] ;
    }
    ll l = 0 , cnt = 0 ;
    for(int i = 0 ; i < n ;i++){
        auto it = upper_bound(b + l , b + n , a[i]);
        if(it != b + n){
            cnt++;
            l = it - b + 1 ;
        }
    }
    cout << cnt << endl;
    return 0;
}