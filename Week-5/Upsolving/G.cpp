#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int lcs(string a, string b, int i, int j) {
    if (i >= a.length() || j >= b.length())
        return 0;

    if (a[i] == b[j])
        return 1 + lcs(a, b, i + 1, j + 1);

    return max(lcs(a, b, i + 1, j), lcs(a, b, i, j + 1));
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b, 0, 0) << endl;
    return 0;
}