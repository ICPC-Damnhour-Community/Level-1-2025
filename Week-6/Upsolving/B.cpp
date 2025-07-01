#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int On_First_0(int n){
    return (n | (n + 1)) ;
}

int Off_First_1(int n){
    return (n & (n - 1)) ;
}

int ON_First_Zeros(int n){
    if(n == 0) return -1;
    return(n | (n - 1)) ;
}

int Off_First_Ones(int n){
    return (n & (n + 1)) ;
}

bool Power2(int n){
    if(n == 0) return 0 ;
    return !(n & (n - 1)) ;
}

int main() {
    fast
    ll n ; cin >> n ;
    int q ; cin >> q ;
    while(q--){
        int x ; cin >> x ;
        if(x == 1){
            n = On_First_0(n);
            cout << n << endl;
        }
        else if(x == 2){
            n = Off_First_1(n);
            cout << n << endl;
        }
        else if(x == 3){
            n = ON_First_Zeros(n);
            cout << n << endl;
        }
        else if(x == 4){
            n = Off_First_Ones(n);
            cout << n << endl;
        }
        else{
            if(Power2(n)){
                cout << "is power of two" << endl;
            }
            else{
                cout << "not power of two" << endl;
            }
        }
    } 
    return 0;
}