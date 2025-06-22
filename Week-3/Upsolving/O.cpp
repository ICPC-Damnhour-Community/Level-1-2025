#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e5+5;

#define isON(n, k) (((n)>>(k))&1);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ cin>>arr[i]; }
    sort(arr, arr+n);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;

        int l=0,r=n-1,ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]<=x)
            {
                l=mid+1;
                ans=(mid+1);
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}