#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e5+10;const int oo=0x3f3f3f3f;

string m;
ll maxi=0;
int flag=0;
void solve(int indx,string value,int len)
{
    if(!value.empty())
    {
        int g=stoi(value);
        if(g%8==0)
        {
            flag=1;
            maxi=g;
            return;
        }
    }
    if(indx==m.size()||len==3) return;
    solve(indx+1,value+m[indx],len+1);
    solve(indx+1,value,len);
};
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   cin>>m;
    flag=0;
solve(0,"",0);
    if(flag==1)
    {
        cout<<"YES"<<endl;
        cout<<maxi<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}