
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    int n = x + y + z;
    if (y >= z) {
        cout << string(n, 'R') << endl;
    }
    else if (z >= x) {
        cout << string(n, 'S') << endl;
    }
    else {
        cout << string(n, 'P') << endl;
    }
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
