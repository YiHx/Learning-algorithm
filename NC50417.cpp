#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;
void solve() {

    int n;
    cin >> n;
    vector<array<int,2>> dp(n+1,{0,0});

    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i =2;i<=n;i++) {
        dp[i][0] = dp[i-1][1]%MOD;
        dp[i][1] = (dp[i-1][1]+ dp[i-1][0])%MOD;
    }
    int ans = (dp[n][0]+ dp[n][1]) %MOD;
    cout << ans <<endl;
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