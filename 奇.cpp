#include <bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int start, int noww, int parent, int changdu, int mask,
          vector<vector<pair<int, int>>> &edge,
          vector<int> &color,
         vector<vector<int>> &chang,
         vector<vector<bool>> &ok) {
    chang[start][noww] = changdu;

    int cnt = 0;
    for (int i = 0; i < 40; i++) {
        if ((mask >> i) & 1LL) {
            cnt++;
        }
    }
    ok[start][noww] = (cnt == 1);

    for (auto [to, value] : edge[noww]) {
        if (to == parent) continue;

        dfs(start, to, noww, changdu + value,
            mask ^ (1LL << (color[to] - 1)),
            edge, color, chang, ok);
    }
}

void solve() {
    int n, m, k, q;
    cin >> n >>m >> k >> q;


    string a;
    cin >> a;
    a = " " + a;

    vector<int> color(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
    }

    vector<vector<pair<int, int>>> edge(n + 1);
    for (int i = 1; i < n; i++) {
        int from, to, value;
        cin >> from >> to >> value;

        edge[from].push_back({to, value});
        edge[to].push_back({from, value});
    }

    vector<vector<int>> chang(n + 1, vector<int>(n + 1));
    vector<vector<bool>> ok(n + 1, vector<bool>(n + 1));

    for (int i = 1; i <= n; i++) {
        dfs(i, i, 0, 0, 1LL << (color[i] - 1),
            edge, color, chang, ok);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == '0') continue;

        for (int j = i; j <= n; j++) {
            if (a[j] == '1' && chang[i][j] % k == 0 && ok[i][j]) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    while (q--) {
        int noww;
        cin >> noww;

        int cnt = 1;
        for (int i = 1; i <= n; i++) {
            if (i == noww || a[i] == '0') continue;

            if (chang[noww][i] % k == 0 && ok[noww][i]) {
                cnt++;
            }
        }

        if (a[noww] == '0') {
            ans += cnt;
            a[noww] = '1';
        } else {
            ans -= cnt;
            a[noww] = '0';
        }

        cout << ans <<endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}