#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n , t ;
    cin >>  n >> t ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int l = 0 , sum = 0 , ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        while(l < n && sum + a[l] <= t){
            sum += a[l];
            l++;
        }
        ans = max(ans , l - i);
        sum -=a[i];
        
    }
    cout << ans << endl;
   return 0 ; 
}