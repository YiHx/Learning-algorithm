#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<long long> prefix(n + 1);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    vector<int> cnt(k, 0);
    for (int i = 0; i <= n - k - 1; i++) {
        cnt[prefix[i] % k]++;
    }

    long long ans = 0;
    for (int r = n; r >= k + 1; r--) {
        ans += cnt[prefix[r] % k];
        cnt[prefix[r - k - 1] % k]--;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}