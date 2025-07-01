#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int git_bit(int n , int i){
    int msk = (n >> i) ;
    return (msk & 1) ;
}

int mk_1(int n , int i){
    int msk = (1 << i);
    return (msk | n);
}

int mk_0(int n , int i){
    int msk = ~(1 << i);
    return (msk & n);
}

int flip_bit(int n , int i){
    int msk = (1 << i);
    return (msk ^ n);
}

int main() {
    fast
    ll n ; int q ;
    cin >> q >> n ;
    while(q--){
        int x , y ;
        cin >> x >> y ;
        if(x == 1){
            cout << git_bit(n , y) << endl;
        }
        else if(x == 2){
            n = mk_1(n , y);
            cout << n << endl;
        }
        else if(x == 3){
            n = mk_0(n , y);
            cout << n << endl;
        }
        else{
            n = flip_bit(n , y);
            cout << n << endl;
        }
    }
    return 0;
}