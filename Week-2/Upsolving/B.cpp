#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int l = 0 , sereja = 0 , r = n - 1 , dima = 0 , turns = 0 ;
    while(l <= r){
        if(!turns){
            if(a[r] > a[l]){
                sereja += a[r];
                r--;
            }
            else{
                sereja += a[l];
                l++;
            }
        }
        else if(turns){
            if(a[r] > a[l]){
                dima += a[r];
                r--;
            }
            else{
                dima += a[l];
                l++;
            }
        }
        turns = 1 - turns ;
    }
    cout << sereja << " " << dima << endl;
   return 0 ; 
}
