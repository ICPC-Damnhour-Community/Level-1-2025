#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, cnt;
char grid[6][6];
bool vis[6][6];

void solve(int r, int c) {

    if (r == n - 1 && c == m - 1) {
        cnt++;
        return;
    }

    vis[r][c] = true;

    //Down
    if (r + 1 < n && grid[r + 1][c] == '1' && !vis[r + 1][c]) {
        solve(r + 1, c);
    }

    //Up
    if (r - 1 >= 0 && grid[r - 1][c] == '1' && !vis[r - 1][c]) {
        solve(r - 1, c);
    }

    //Right
    if (c + 1 < m && grid[r][c + 1] == '1' && !vis[r][c + 1]) {
        solve(r, c + 1);
    }

    //Left
    if (c - 1 >= 0 && grid[r][c - 1] == '1' && !vis[r][c - 1]) {
        solve(r, c - 1);
    }

    vis[r][c] = false; // UNDO
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

 
        solve(0, 0);

    cout << cnt << "\n";
    return 0;
}