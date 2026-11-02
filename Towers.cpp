
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        auto it = upper_bound(a.begin(), a.end(), x);
        if (it == a.end()) {
            a.push_back(x);
        } else {
            *it = x;
        }
    }

    cout << a.size() << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
