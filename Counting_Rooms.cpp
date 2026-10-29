#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    vector<vector<bool>> ok(n, vector<bool>(m, false));

    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !ok[i][j]) {
                ans++;

                queue<pair<int, int>> q;
                q.push({i, j});
                ok[i][j] = true;

                while (!q.empty()) {
                    pair<int, int> p = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++) {
                        int nx = p.first + dx[k];
                        int ny = p.second + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m
                            && a[nx][ny] == '.' && !ok[nx][ny]) {
                            ok[nx][ny] = true;
                            q.push({nx, ny});
                            }
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    while (T--) {
        solve();
    }
    return 0;
}