#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    multiset<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        auto it = s.upper_bound(x);

        if (it == s.begin()) {
            cout << -1 << endl;
        } else {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
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