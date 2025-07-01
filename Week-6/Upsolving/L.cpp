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
    ll l,r;
    cin>>l>>r;
    vector<ll>v;
    for(int bit=1;bit<=10;bit++)
    {
        for(int mask=0;mask<1<<bit;mask++)
        {
            string s="";
            for(int i=bit-1;i>=0;i--)
            {
            if(ison(mask,i)) s+="7";
            else s+="4";
            }
            long long h=stoll(s);
            v.push_back(h);
        }
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(l<=r&&v[i]>=l)
        {
            ll ri=min(r,v[i]);
            ll count=ri-l+1;
            sum+=(count*v[i]);
            l=v[i]+1;
        }
    }
    cout<<sum<<endl;

    return 0;
}