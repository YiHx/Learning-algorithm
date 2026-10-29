
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> idx(n + 1);
    for (int i = 1; i <= n; i++) {
        idx[a[i]] = i;
    }

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (idx[i + 1] < idx[i]) {
            ans++;
        }
    }

    for (int i = 0; i < m; i++) {
        int aa, bb;
        cin >> aa >> bb;

        int x = a[aa], y = a[bb];

        set<int> v = {x - 1, x, y - 1, y};

        for (int k : v) {
            if (k >= 1 && k < n && idx[k + 1] < idx[k]) {
                ans--;
            }
        }

        swap(a[aa], a[bb]);
        swap(idx[x], idx[y]);

        for (int k : v) {
            if (k >= 1 && k < n && idx[k + 1] < idx[k]) {
                ans++;
            }
        }

        cout << ans << endl;
    }
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
