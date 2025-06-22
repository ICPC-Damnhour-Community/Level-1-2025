#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int game(int cur , int tar , int path){
    if(cur == tar) return path;

    if(cur > tar) return -1 ;

    int b2 = game(cur * 2 , tar , path + 1 ) ;
    int b3 = game(cur * 3 , tar , path + 1 ) ;

    if(b2 == -1) return b3 ;
    if(b3 == -1) return b2;

    return min(b2 , b3) ;
}
int main() {
    int n , m ;
    cin >> n >> m ;
    int res = -1 ;
    if(m % n == 0){
        res = game(n , m , 0) ;
    }
    cout << res << endl;
   return 0 ; 
}
