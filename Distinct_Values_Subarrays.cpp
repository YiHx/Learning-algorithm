
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

    map<int, int> last;
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        if (last.count(a[r])) {
            l = max(l, last[a[r]] + 1);
        }

        last[a[r]] = r;
        ans += r - l + 1;
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
