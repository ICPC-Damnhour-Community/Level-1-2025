#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::syn_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


int main() {
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;

    for (int i = 0; i < n; i++) {

        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }

       
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    cout << count << endl;
    return 0;
}