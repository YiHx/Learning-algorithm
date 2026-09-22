#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string> a;
    vector<string> b;
    set<char> c;
    for (int i=0;i<n;i++) {
        string curr;
        cin>>curr;
        a.push_back(curr);
        c.insert(curr[0]);
    }
    bool ok = true;
    for (int i = 0; i < m; i++) {
        string curr;
        cin >> curr;
        for (char ch : curr) {
            if (!c.contains(tolower(ch))) {
                ok = false;
            }
        }
    }

    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}