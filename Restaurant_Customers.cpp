#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;

    map<int, int> a;

    for (int i = 0; i < n; i++) {
        int left, right;
        cin >> left >> right;

        a[left]++;
        a[right]--;
    }

    int cnt = 0, ans = 0;

    for (auto [time, change] : a) {
        cnt += change;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
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