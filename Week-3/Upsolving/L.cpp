#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool can(ll x, const vector<ll>& a, const vector<ll>& b, ll k) {
    ll need = 0;
    for (int i = 0; i < a.size(); ++i) {
        ll required = a[i] * x;
        if (required > b[i]) {
            need += required - b[i];
            if (need > k) return false;
        }
    }
    return need <= k;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll  n,k;
        cin>>n>>k;
        vector<ll> arr(n);
        vector<ll> arr2(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        ll l=0,r=1e9+5,ans=0;

        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(can(mid,arr,arr2,k))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}