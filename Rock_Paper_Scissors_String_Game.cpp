#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool check(const string& s) {
    int n = s.size();
    if (n < 2) return false;

    bool r = false, p = false, l = false;
    for (int i = 0; i < n; i++) {
        if (s[i]=='S'&&r) return true;
        if (s[i]=='P'&&l) return true;
        if (s[i]=='R'&&p) return true;

        if (s[i]=='R') r=true;
        if (s[i]=='P') p=true;
        if (s[i]=='S') l=true;
    }
    return false;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    bool ok = check(s);
    if (ok) {
        cout<<"Alice"<<endl;
    } else {
        cout<<"Bob"<<endl;
    }
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