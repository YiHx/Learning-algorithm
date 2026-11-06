#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> cnt(25, 0);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        sum += (1LL << a[i]);
    }

    int x = 0;
    int last = sum / 2;

    for (int i=24; i>= 0;i--) {
        int w=(1LL << i);
        int k = min(cnt[i], last / w);
        x += k * w;
        last -= k * w;
    }

    cout << x * (sum - x) << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
