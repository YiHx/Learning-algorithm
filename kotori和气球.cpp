#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n,m;
    cin >> n >> m;
    int ans = n;
    for (int i =1;i<m;i++) {
        ans = ans*(n -1)%109;
    }
    cout <<ans <<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}