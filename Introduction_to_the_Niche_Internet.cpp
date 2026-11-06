
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (k < n && a[n - 1] == a[n - k - 1]) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int i = n - k; i < n; i++) {
        cout << a[i] << " ";
    }

    for (int i = n - k - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }

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
