#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    int cnt = 0;

    for (int i=0; i<=n;i++) {
        cnt+=a[i];

        if (a[i]==0||cnt<k) {
            cout <<i<< endl;
            return;
        }

        cnt -= k;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}