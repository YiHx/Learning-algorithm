
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<int> s;
    int l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        while (s.count(a[r])) {
            s.erase(a[l]);
            l++;
        }

        s.insert(a[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
