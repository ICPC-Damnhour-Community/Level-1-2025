#include <bits/stdc++.h>
#include <iomanip>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;
void solve(){
    int d ;
    cin >> d ;
    if(d == 0){
        cout << "Y 0.000000000 0.000000000" << endl;
        return ;
    }
    else if(d < 4){
        cout << "N" << endl;
        return ;
    }
    else if(d == 4){
        cout << "Y 2.000000000 2.000000000" << endl;
        return ;
    }
    double l = 0 , r = d ;
    for(int i = 0 ; i < 100 ; i++){
        double mid = (l + r) / 2 ;
        double val = mid * (d - mid) ;
        if(val > d){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    double a = (l + r) / 2 ;
    double b = d - a ;

    cout << fixed << setprecision(9) ;
    cout << "Y " << a << " " << b << endl;

}
int main() {
    fast
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}