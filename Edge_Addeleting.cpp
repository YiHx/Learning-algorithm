#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n + 1);

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;

    dist[n] = 0;
    q.push(n);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : a[u]) {
            if (dist[v] != -1) continue;
            dist[v] = dist[u] + 1;
            if (v != 1) {
                q.push(v);
            }
        }
    }
    int ans = dist[1];
    for (int i = 0; i < m; i++) {
        int v;
        cin >> v;
        if (dist[v] != -1) {
            ans = max(ans, dist[v] + 1);
        }
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}