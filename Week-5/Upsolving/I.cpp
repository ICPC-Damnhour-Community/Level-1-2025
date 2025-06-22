#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> s;

void solve(int indx,string m2)
{
    if(indx==m2.size())
    {
        ll sum=0;
        for(int i=0;i<m2.size();i++)
        {
            if(m2[i]=='+')sum++;
            else sum--;
        }
        s.push_back(sum);
        return;
    }
    if(m2[indx]=='?')
    {
        m2[indx]='+';
        solve(indx+1,m2);
        m2[indx]='-';
        solve(indx+1,m2);
    }
    else  solve(indx+1,m2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string m1,m2;
    cin>>m1>>m2;
    double j=0;
    for(int i=0;i<m1.length();i++)
    {
        if(m1[i]=='+') j++;
        else j--;
    }
    solve(0,m2);
    double ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==j) ans++;
    }
    double h=ans/(double)s.size();
    cout<<fixed<<setprecision(9)<<h<<endl;

    return 0;
}