#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
   int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin>>a[i];
    }

    vector<int> dp(n+1,1);
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<i;j++) {
            if (a[i]> a[j]) {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int ans = -1;
    for (int i =1;i<=n;i++) {
        ans = max(ans,dp[i]);
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