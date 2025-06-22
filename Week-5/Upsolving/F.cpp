#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=2e5+10;
const int oo=0x3f3f3f3f;
int ans;
int n;
ll a[20];
void f(int s, int e) {
    if (is_sorted(a + s, a + e)) {
        ans = max(ans, e - s);
        return;
    }
 
    int mid = (s + e) / 2;
    f(s, mid);
    f(mid, e);
}
 
 
int main() {
    fast
     cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
 
    f(0,n);
    cout<<ans;
 
    return 0;
}