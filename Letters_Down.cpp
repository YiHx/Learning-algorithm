#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> vis(26);

    for (int i = 0; i < n / 2; i++) {
        int l = min(s[i], s[n - i - 1]) - 'a';
        int r = max(s[i], s[n - i - 1]) - 'a';

        for (int j = l + 1;j <= r; j++) {
            vis[j] = true;
        }
    }

    int ans = 0;
    for (int i = 1; i < 26; i++) {
        ans += vis[i];
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
