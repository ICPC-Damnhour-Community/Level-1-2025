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
        string s;
        cin>>s;
        string p=s;
        int mini=10;
        for(int mask=0;mask<(1<<10);mask++)
        {
            for(int bit=9;bit>=0;bit--)
            {
                if(ison(mask,bit)&&s[bit]=='?') p[bit]='1';
                else if(ison(mask,bit)==0&&s[bit]=='?') p[bit]='0';
            }
            ll sum1=0,sum2=0;
            ll even=0,odd=0;
            for(int i=0;i<p.size();i++)
            {
                if(i%2==0) even++;
                else odd++;
                if (i%2==0&&p[i]=='1')sum1++;
                else if(i%2!=0&&p[i]=='1')sum2++;
                if(sum1>sum2+(5-odd))
                {
                    mini=min(mini,i+1);
                }
                else if( sum2>sum1+(5-even))
                {
                    mini=min(mini,i+1);
                }
            }

        }
        cout<<mini<<endl;
    }
    return 0;
}