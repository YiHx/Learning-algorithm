
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    int first, last;
    bool ok = false;

    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;

        ans += curr;

        if (i == 0) first = curr;
        if (i == n - 1) last = curr;

        if (i > 0 && i < n - 1 && curr >= 2) {
            ok = true;
        }
    }

    if (ok) {
        cout << ans - 1 << endl;
    }
    else if (first >= 2 || last >= 2) {
        cout << ans - (n - 1) << endl;
    }
    else {
        cout << -1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--){
         solve();
    }

    return 0;
}
