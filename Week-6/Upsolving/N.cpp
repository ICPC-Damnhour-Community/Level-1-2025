#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5+5;
const int h=1e4+2;

ll MOD=1e9+7;

bool vis[N];
vector<ll>adj[N];
ll sum;

bool ison(ll n,ll bit)
{
    return n&(1<<bit);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    ll n1=n/2;
    ll n2=n-n1;

    for(int i=0;i<n;i++) cin>>arr[i];
    vector<ll>left,right;
    //generate left vector all probabilities
    for(int mask=0;mask<(1<<n1);mask++)
    {
        ll sum=0;
        for(int i=0;i<n1;i++){
            if(ison(mask,i))sum+=arr[i];
            }
        left.push_back(sum%m);
    }
    for(int mask=0;mask<(1<<n2);mask++)
    {
        ll sum=0;
        for(int i=0;i<n2;i++){
            if(ison(mask,i))sum+=arr[n1+i];
        }
        right.push_back(sum%m);
    }

sort(right.begin(),right.end());
    ll ans=0;
    for(ll x:left)
    {
        auto it=lower_bound(right.begin(),right.end(),m-x);
        if(it!=right.begin())
        {
            it--;
            ans=max(ans,*it+x);
        }
        else
        {
            ans=max(ans,x);
        }
    }
    cout<<ans<<"\n";
    return 0;
}