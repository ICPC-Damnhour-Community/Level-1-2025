#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector< int > a(n + 2);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    priority_queue< tuple< long long , int , int > > pq;
    set< pair< int , int > > st;

    vector< long long > ans;

    auto add = [&](long long sum, int l, int r) {
        if( 1 <= l && l <= r && r <= n && st.find({l, r}) == st.end()) {
            pq.push({ sum , l, r });
            st.insert({l, r});
        }
    };
    add(accumulate(a.begin() + 1, a.end(), 0ll), 1, n);
    while((int)ans.size() < k) {
        auto [sum, l, r] = pq.top();
        ans.push_back(sum);
        pq.pop();
        add(sum - a[l], l + 1, r);
        add(sum - a[r], l, r - 1);
        add(sum + a[l - 1], l - 1, r);
        add(sum + a[r + 1], l, r + 1);
    }
    for(auto &x : ans) {
        cout << x << ' ';
    }
    return 0;
}
