#include <bits/stdc++.h>
using namespace std;

int ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    int input;
    cin>>input;
    return input;
}



int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int l=2,h=999;
        while(l<=h)
        {
            int mid=(l+h)/2;
            long long value=ask(mid,mid);
            long long correct =(long long ) mid*mid;
            long long incorrect=(long long) (mid+1)*(mid+1);
            if(value==correct)
            {
                l=mid+1;
            }
            else if(value==incorrect)
            {
                h=mid-1;
            }
            else
            {
                exit(0);
            }
        }
        cout<<"! "<<l<<endl;
        cout.flush();
    }

    return 0;
}