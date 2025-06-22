#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool can(vector<ll>arr,int n,int k,ll mid)
{
    int subarray=1;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>mid)
        {
           subarray++;
            sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }
    return subarray<=k;
}

int main() {
 int n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll l=*max_element(arr.begin(),arr.end());
    ll r=accumulate(arr.begin(),arr.end(),0LL);
    ll ans=r;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(can(arr,n,k,mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}