#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = 0x3f3f3f3f;
void solve() {
   int n,v;
    cin >> n>> v;
    vector<pair<int,int>> a(n+1);
    for (int i =1;i<=n;i++) {
        cin>>a[i].first >> a[i].second;
    }

    vector<int> dp(v+1,-INF);
    dp[0] = 0;

    for (int i =1;i<=n;i++) {
        for (int j = v;j>=a[i].first;j--) {
            if (dp[j - a[i].first]!=-INF)
            dp[j] = max(dp[j] ,dp[j - a[i].first]+a[i].second);
        }
    }
    int ans = 0;
    for (int i  =1;i<=v;i++) {
        ans = max(ans,dp[i]);
    }
    cout << ans <<endl;
    cout << (dp[v]==-INF ? 0 : dp[v]) <<endl;



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