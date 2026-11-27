#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin >> a[i];
    }
    vector<int> b(n+1);
    for (int i =1;i<=n;i++) {
        cin >> b[i];
    }

    vector<bool> dp(2048, false);
    dp[0] = true;

    for (int i = 1; i <= n; i++) {
        vector<bool> nxt(2048, false);
        for (int v = 0; v < 2048; v++) {
            if (dp[v]) {
                nxt[max(0LL, v - a[i])] = true;
                nxt[v ^ b[i]] = true;
            }
        }
        dp = nxt;
    }

    for (int v = 2047; v >= 0; v--) {
        if (dp[v]) {
            cout << v << endl;
            return;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}