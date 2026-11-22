#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string a;
    cin >> a;
    string b = "ilovewtu";
    int ans = 0;
    int idx = 0;
    for (int i =0;i<a.size();i++) {
        if (a[i] == b[idx]) {
            idx++;
        }

        if (idx == b.size()) {
            ans++;
            idx = 0;
        }


    }
    cout << ans <<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}