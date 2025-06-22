#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;
const int N = 1e5 + 5 ;
int n , a[N];
ll S , total[N];

ll res(int k){
    for(int i = 0 ; i < n ;i++){
        total[i] = a[i] + (i - 1) *  k ;
    }
    sort(total,total + n);
    ll ans = 0 ;
    for(int i = 0 ; i < k ;i++){
        ans+= total[i] ;
    }
    return ans ;
}

int main() {
    fast;
    cin >> n >> S ;
    return 0;
}