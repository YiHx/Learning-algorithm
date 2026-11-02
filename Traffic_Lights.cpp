
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int x, n;
    cin >> x >> n;

    set<int> s = {0, x};
    multiset<int> q = {x};

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        auto it = s.lower_bound(p);

        int r = *it;
        int l = *prev(it);

        q.erase(q.find(r - l));

        q.insert(p - l);
        q.insert(r - p);

        s.insert(p);

        cout << *q.rbegin() << " ";
    }

    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
