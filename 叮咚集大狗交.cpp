
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        a.push_back({l, 0});
        a.push_back({r, 1});
    }

    sort(a.begin(), a.end());
    stack<int> st;
    int ans = 0;
    for (auto [x, type] : a) {
        if (type == 0) {
            st.push(x);
        } else {
            int l = st.top();
            st.pop();

            int len = x - l + 1;
            ans = (ans + len * len % MOD) % MOD;
        }
    }

    cout << ans << endl;
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
