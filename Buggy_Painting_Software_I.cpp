#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int N = n * m;
    vector<int> cnt(N + 1);

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<int> f;
    for (int i = 1; i <= N; i++) {
        if (cnt[i]) f.push_back(cnt[i]);
    }
    sort(f.rbegin(), f.rend());

    int sum = N - cnt[0];
    int cost = 0;
    int ans = sum * a;

    for (int i = 0; i < f.size(); i++) {
        sum -= f[i];
        cost += f[i] * min(a, i * b);

        int now = cost + sum * a + cnt[0] * (i + 1) * b;
        ans = min(ans, now);
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}