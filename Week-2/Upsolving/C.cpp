#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n , k ;
    cin >> n >> k ;
    int a[n] , t[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        cin >> t[i] ;
    }
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(t[i] == 1){
            sum += a[i];
            a[i] = 0 ;
        }
    }
    int prefix[n + 1];
    prefix[0] = 0 ;
    for(int i = 0 ; i < n ; i++){
        prefix[i + 1] = prefix[i] + a[i] ;
    }
    int mx =  0 ;
    for(int i = k ; i <=n ;i++){
        int res = prefix[i] - prefix[i -k];
        mx = max(res , mx);
    }
    int final = mx + sum ;
    cout << final << endl;
   return 0 ; 
}
