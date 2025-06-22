#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e5+5;

#define isON(n, k) (((n)>>(k))&1);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll arr[n];
        ll arr2[m];
        for(int i=0;i<n;i++){ cin>>arr[i]; }
        for(int i=0;i<m;i++){ cin>>arr2[i]; }
        sort(arr2,arr2+m);
        int flag=1;
        for(int i=0;i<n;i++)
        {
            ll prev=(i==0)? -1e18:arr[i-1];
            ll mini=1e18;
            if(arr[i]>=prev) mini=arr[i];
                auto it=lower_bound(arr2,arr2+m,arr[i]+prev);

                if(it!=arr2+m&&(*it>=arr[i]+prev))
                {
                    mini=min(mini,*it-arr[i]);
                }
            if(mini==1e18)
            {
                flag=0;
                break;
            }
            arr[i]=mini;

        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}