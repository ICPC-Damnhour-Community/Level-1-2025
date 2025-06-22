#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e5+10;const int oo=0x3f3f3f3f;
int dis[N];
vector<ll>adj[N];
vector<int>v;
int vis[9];
ll arr[8];
ll mini=8;
bool check(int r,int c)
{
    for(int i=0;i<c;i++)
    {
        if(r==v[i]) return false;
        if(abs(r-v[i])==abs(c-i)) return false;
    }
    return true;
}
void solve(int indx)
{
    if(indx==8)
    {
        ll sum=0;
        for(int i=0;i<8;i++)
        {
            if(arr[i]!=v[i]) sum++;
        }
        mini=min(mini,sum);
    }
    for(int r=1;r<=8;r++)
    {
        if(!vis[r]&&check(r,indx))
        {
            v.push_back(r);
            vis[r]=1;
            solve(indx+1);
            vis[r]=0;
            v.pop_back();
        }
    }
}

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll num=0;
    while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7])
    {
        mini=8;
        v.clear();
        num++;
        memset(vis,0,sizeof(vis));
        solve(0);
        cout<<"Case "<<num<<": "<<mini<<endl;
    }
    return 0;
}