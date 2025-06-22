#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
bool reach(const vector<int>& rungs , int k){
    int cur_h = 0 ;
    for(int h : rungs){
        int diff = h - cur_h ;
        if(diff > k) {
            return 0 ;
        }
        else if(diff == k){
            k--;
        }
        cur_h = h ;
    }  
    return 1 ;
}
int main() {
    int t ; 
    cin >> t ;
    for(int tc = 0 ; tc < t ;tc++){
        int n ; cin >> n ;
        vector <int> rungs(n);
        for(int i = 0 ; i < n ; i++){
            cin >> rungs[i];
        }
        int mx = 0 , pre_h = 0 ;
        for(int h : rungs){
            mx = max(mx , h - pre_h);
            pre_h = h ;
        }

        //binary search 

        int l = mx , r = mx + n , res = r ;
        while(l <= r){
            int mid = (l + r) / 2 ;
            if(reach(rungs,mid)){
                res = mid ;
                r = mid - 1 ;
            }
            else{
                l = mid + 1 ;
            }
        }
        cout << "Case " << tc + 1 << ": " << res << endl;
    }
   return 0 ; 
}
