
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct Node {
    int l, r, id;
};

void solve() {
    int n;
    cin >> n;

    vector<Node> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].id = i;
    }

    sort(a.begin(), a.end(), [](Node x, Node y) {
        if (x.l != y.l) return x.l < y.l;
        return x.r > y.r;
    });

    vector<int> ans1(n, 0), ans2(n, 0);

    int mx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].r <= mx) {
            ans2[a[i].id] = 1;
        }
        mx = max(mx, a[i].r);
    }

    int mn = LLONG_MAX;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i].r >= mn) {
            ans1[a[i].id] = 1;
        }
        mn = min(mn, a[i].r);
    }

    for (int x : ans1) cout << x << " ";
    cout << endl;

    for (int x : ans2) cout << x << " ";
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
