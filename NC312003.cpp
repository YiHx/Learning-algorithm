#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin >> a[i];
    }
    vector<int> b(n+1);
    for (int i =1;i<=n;i++) {
        cin >> b[i];
    }

    vector<int> dp(n+1,0);

    for (int i =1;i<=n;i++) {
        dp[i] = max(max(0LL,dp[i-1] - a[i]),dp[i-1]^b[i]);
    }

    cout << dp[n] <<endl;
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