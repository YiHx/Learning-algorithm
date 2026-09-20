#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int cnt[N];
int zz[N];

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i <= m + 2; i++) {
            cnt[i] = 0;
            zz[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            int curr;
            cin >> curr;
            cnt[curr]++;
        }

        for (int i = m; i >= 1; i--) {
            zz[i] = zz[i + 1] + cnt[i];
        }

        int ans = 0;
        for (int i = 1; i <= m;i++) {
            int cur = zz[i];
            if (2 * i <= m) {
                cur += cnt[2 * i];
            }
            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }
    return 0;
}