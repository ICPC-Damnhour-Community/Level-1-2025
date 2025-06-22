#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 long long n,k;
 long long num[200000];
bool can( long long mid){
    long long cnt=0;
    for(int i=n/2;i<n;i++){
        if(num[i]<mid) cnt+=(mid-num[i]);
        else break;
    }
    return cnt<=k;
}

int main()
{
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num,num+n);
        long long l=num[n/2],r=2000000000,ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(can(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans;



    return 0;
}