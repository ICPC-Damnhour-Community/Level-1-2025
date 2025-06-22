#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

const int MX = 14 ;
int n , m ;
int a[MX] ;

set <vector<int>> subs ;

void get_subs(int i , vector<int> v , int sum){
    if(i == n){
        if(sum == m){
            subs.insert(v);
        }
        return;
    }

    get_subs(i + 1, v , sum);
    v.push_back(a[i]) ;
    get_subs(i + 1, v , sum + a[i]);
}
int main() {
   fast
   int T ;
   cin >> T ;
   while(T--){
    subs.clear() ;
    cin >> n >> m ;
    for(int i = 0 ; i <  n ; i++){
        cin >> a[i] ;
    }

    get_subs(0 , {} , 0) ;
    if(subs.empty()){
        cout << "NONE" << endl << endl ;
        continue;
    }
    for(auto v : subs){
        for(auto ib: v){
            cout << ib << " ";
        }
        cout << endl;
    }
    cout << endl;
   } 
   return 0 ; 
}
