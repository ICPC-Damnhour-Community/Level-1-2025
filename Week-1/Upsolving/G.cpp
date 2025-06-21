#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    int n,mx = 0 ;
    cin >> n ;
    int a[n][n] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> a[i][j] ;
        }
    }
    int a2[n] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            mx = max(mx , a[i][j]) ;
 
        }
        a2[i] = mx ;
        mx = 0 ;
    }
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (a2[i] == a2[j]){
                a2[i]++ ;
                break ;
            }
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout << a2[i] << " " ;
    }
    return 0;
}
 