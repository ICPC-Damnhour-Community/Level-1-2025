#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int a[n] , pre[n+1];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    pre[0] = 0 ;
    for(int i = 0 ; i < n ; i++){
        pre[i+1] = pre[i] + a[i];
    }
    int m ; cin >> m ;
    while(m--){
        int x ; cin >> x ;
        int l = 1 , r = n ;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(pre[mid] < x){
                l = mid + 1 ;
            }
            else{
                r = mid - 1 ;
            }
        }
        cout << l << endl;
    }
    return 0;
}