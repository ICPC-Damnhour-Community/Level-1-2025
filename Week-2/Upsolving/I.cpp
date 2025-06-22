#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    int n,k; cin>>n>>k;
    ll a[n+1]={0};
    for(int i=1;i<=n;i++) cin>>a[i];
    ll b[n+1]={0};
    for(int i=1;i<=n;i++) {
        b[i]+=b[i-1]+a[i];
    }
    ll x=b[k]-b[0];
    ll z=1;
    for(int i=1;i<=n-k+1;i++) {
       ll y=b[k+i-1]-b[i-1];
        if(y<x) {
            x=y;
            z=i;
        }
    }
    cout<<z<<"\n";
    return 0;
}