#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    vector<int> a(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        int uu = (s[u - 1] == '0' ? 1 : -1);
        int vv = (s[v - 1] == '0' ? 1 : -1);
        a[v] += uu;
        a[u] += vv;
    }

    vector<int> b;
    for (int i = 1; i <= n; i++) {
        bool ok = (a[i] > 0);
        if (ok) {
            b.push_back(i);
        }
    }

    cout << b.size() <<endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] <<" ";
    }
    cout <<endl;
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