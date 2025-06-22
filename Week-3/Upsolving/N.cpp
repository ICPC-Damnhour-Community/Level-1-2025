#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e5+5;

#define isON(n, k) (((n)>>(k))&1);

bool can(double x,double arr[],int n,double perc)
{
    double sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            sum1+=(arr[i]-x);
        }
        else
        {
            sum2+=((x-arr[i])/perc);
        }
    }
    if(sum1>=sum2)  return true;
 return false;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    double arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    sort(arr, arr+n);
    double perc=((100.0-k)/100.0);
    double l=0,r=arr[n-1];double ans=0;;
    while(r-l>1e-7)
    {
        double mid=(l+r)/2.0;
        if(can(mid,arr,n,perc))
        {
            l=mid;
            ans=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout<<fixed << setprecision(9)<<ans<<endl;

    return 0;
}