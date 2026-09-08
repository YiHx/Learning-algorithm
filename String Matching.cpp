#include <bits/stdc++.h>
using namespace std;

long long ans;

vector<int> next_array(const string &p) {
    int m =p.length();
    vector<int> next (m+1,0);
    if (m==1) {
        next[0] = 0;
        return next;
    }
    next[0] = -1;
    next[1] = 0;

    int i = 2, cn = 0;
    while (i <= m) {
        if (p[i - 1] == p[cn]) {
            next[i++] = ++cn;
        } else if (cn > 0) {
            cn = next[cn];
        } else {
            next[i++] = 0;
        }
    }
    return next;
}

void kmp(const string &n, const string &m) {
    vector<int> next =next_array(m);
    int len1=n.length(),len2=m.length();
    int x=0,y=0;
    while (x < len1) {
        if (n[x] == m[y]) {
            x++;
            y++;
        } else if (y == 0) {
            x++;
        } else {
            y = next[y];
        }


        if (y == len2) {
            ans++;
            y = next[y];
        }
    }
}

void solve() {
    string n,m;
    cin>>n>>m;

    kmp(n,m);
    cout<<ans<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
