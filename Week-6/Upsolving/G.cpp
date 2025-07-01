#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int l, r;
    cin >> l >> r;

    int p = l ^ r;
    int c = 0;

    while (p) {
        c++;
        p >>= 1;
    }

    cout << pow(2, c) - 1 << endl;

    return 0;
}
