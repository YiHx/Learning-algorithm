#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define endl '\n'
#define int long long

using tree_set = tree<int, null_type, less<int>,
                      rb_tree_tag,
                      tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;

    tree_set t;
    for (int i = 1; i <= n; i++) {
        t.insert(i);
    }

    int p = 0;

    for (int i = n; i >= 1; i--) {
        p = (p + k) % i;

        auto it = t.find_by_order(p);

        cout << *it << " ";

        t.erase(it);
    }

    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T  =1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
