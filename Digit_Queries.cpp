#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int k;
    cin >> k;
    int len = 1, start = 1;
    while (k > 9 * start * len) {
        k -= 9 * start * len;
        start *= 10;
        len++;
    }

    int num = start + (k - 1) / len;
    int pos = (k - 1) % len;
    string s = to_string(num);
    cout << s[pos] << endl;
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