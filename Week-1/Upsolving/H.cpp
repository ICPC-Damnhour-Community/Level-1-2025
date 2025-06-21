#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    fast
 ll n; cin>>n;
    ll a[n+1]={0};
    ll t1[n+2]={0};
    ll t2[n+2]={0};
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++) {
       t1[i]=a[i]+t1[i-1];
    }
    sort(a,a+n+1);
 
    for(int i=1;i<=n;i++) {
        t2[i]=a[i]+t2[i-1];
    }
    ll m; cin>>m;
    while(m--) {
        int t,l,r; cin>>t>>l>>r;
        if(t==1) cout<<t1[r]-t1[l-1]<<"\n";
        else cout<<t2[r]-t2[l-1]<<"\n";
 
    }
 
 
    return 0;
}