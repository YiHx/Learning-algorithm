#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    vector<int> l, mid, r;

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) j++;

        int cnt = j - i;

        l.push_back(a[i]);

        if (cnt >= 2) {
            r.push_back(a[i]);
        }

        for (int k = 2; k < cnt; k++) {
            mid.push_back(a[i]);
        }

        i = j;
    }

    reverse(r.begin(), r.end());

    cout << l.size() + r.size() << endl;

    for (int x : l) cout << x << " ";
    for (int x : mid) cout << x << " ";
    for (int x : r) cout << x << " ";
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
