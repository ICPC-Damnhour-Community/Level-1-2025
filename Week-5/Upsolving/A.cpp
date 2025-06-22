#include <bits/stdc++.h>
#include <climits>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

const int MX = 15 ;
int n , m ;
int a[MX][MX];
int res = INT_MIN ;

void max_sum(int i , int j , int sum){
    if(i == n - 1 && j == m - 1){
        res = max(res ,  sum + a[n - 1][m -1]);
        return;
    }

    if(i != n - 1){
        max_sum(i + 1 , j , sum + a[i][j]);
    }
    if(j != m - 1){
        max_sum(i , j + 1 , sum + a[i][j]);
    }
}
int main() {
    fast
    cin >> n >> m ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j] ;
        }
    }
    max_sum( 0 , 0 , 0) ;
    cout << res << endl;
   return 0 ; 
}
