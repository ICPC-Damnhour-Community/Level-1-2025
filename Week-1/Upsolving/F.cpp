#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    int n , k ,q ; cin >> n >> k >> q;
    int x[200003]={0};
    int v[200003]={0};
    for (int i = 1; i <=n; i++) {
        int l , r ;
        cin >> l >> r ;
        x[l]++;
        x[r+1]--;
    }
    for (int i = 1; i <= 200003; i++) {
        x[i]=x[i]+x[i-1];
    }
    for (int i = 1; i <= 200003; i++) {
        if (x[i]>=k)
            v[i]=1;
    }
    for (int i = 1; i <= 200003; i++) {
        v[i]=v[i]+v[i-1];
    }
 
    while (q--) {
        int a,b  ;
        cin >> a>> b ;
        cout<<v[b]-v[a-1]<<endl;
    }
    return 0;
}