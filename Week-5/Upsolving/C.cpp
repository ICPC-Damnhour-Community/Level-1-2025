#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int n , W ;
vector <int> w ;
vector <int> v ;

int knapsack(int i , int sum , int wg){
    if(i == n){
        if(W >= wg){
            return sum ;
        }
        else return 0 ;
    }
    
    int c1 = knapsack(i + 1 , sum , wg );
    int c2 = knapsack(i + 1 , sum + v[i] , wg + w[i]);
    return max(c1 , c2) ;

}
int main() {
    fast
    cin >> n >> W ;
    for(int i = 0 ; i < n ; i++){
        int x , y ;
        cin >> x >> y ;
        w.push_back(x);
        v.push_back(y);
    }
    cout << knapsack(0 , 0 , 0) << endl;
   return 0 ; 
}
