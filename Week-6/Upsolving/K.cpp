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
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll sum=0;
        int flag=0;
        for(int mask=0;mask<(1<<n);mask++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
                if(ison(mask,k)) sum+=arr[k];
            }
            if(sum==x)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}