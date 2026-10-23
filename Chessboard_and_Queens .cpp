#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

string a[8];
bool col[8], d1[15], d2[15];
int ans = 0;

void dfs(int r) {
    if (r == 8) {
        ans++;
        return;
    }

    for (int c = 0; c < 8; c++) {
        if (a[r][c] == '*') continue;
        if (col[c] || d1[r-c+7] || d2[r+c]) continue;

        col[c] = d1[r-c+7] = d2[r+c] = true;

        dfs(r+1);

        col[c] = d1[r-c+7] = d2[r+c] = false;
    }
}

void solve() {
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    dfs(0);
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}