
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    string p, q;
    cin >> p >> q;

    vector<int> cnt(26, 0);

    for (char c : p) cnt[c - 'a']++;
    for (char c : q) cnt[c - 'a']--;

    for (char c : string("six")) cnt[c - 'a']--;

    for (int x : cnt) {
        if (x != 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    solve();

    return 0;
}
