#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

const int MAX = 2e5 + 10; 
int n , h ;
pair<int,int> a[MAX];
int prefix[MAX];

int length(int left , int right){
    int l = lower_bound(a,a+n,make_pair(left , -1)) - a ;
    int r = lower_bound(a,a+n,make_pair(right , -1)) - a ;
    int total = prefix[r] - prefix[l];

    if(l > 0){
        int gap = max(0, a[l - 1].second - left);
        total += gap;
    }
    int totalL = right - left;
    return totalL - total;
}
void solve() {
    prefix[0] = 0 ;

    for(int i = 0 ; i < n ; i++){
        int os = a[i].second - a[i].first ;
        prefix[i + 1] = prefix[i] + os ;
    }

    int maxlength = 0 ;
    for(int i = 0 ; i < n ;i++){
        int start = a[i].second  + 1 ;

        int left = -1e9 , right = start ;
        while(right - left > 1){
            int mid = (left + right) / 2;
            if(length(mid , start) > h){
                left = mid;
            }
            else{
                right = mid;
            }
        }

        if(length(right , start) == h){
            maxlength = max(maxlength , start  - right);
        }
    }
    cout << maxlength << endl;
}

int main() {
    cin >> n >> h ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second ;
    }
    sort(a,a+n);
    fast;
    solve();
    return 0;
}