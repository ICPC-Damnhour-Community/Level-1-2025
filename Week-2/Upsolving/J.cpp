#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
 
    string s;
    int q;cin >> s >> q;
    int p=0;
    int a[s.size()]={0};
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            p++;
        a[i]+=p;
    }
 
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<a[r]-a[l]<<"\n";
    }
 
}