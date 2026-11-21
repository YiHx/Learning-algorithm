#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    double q;
    cin>>n>>m>>q;
    int Q = round(q*1000);

    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> w(n);
    for (int i =0;i<n;i++) {
        double curr;
        cin>>curr;
        int x = round(curr*10);
        w[i] = x*x;
    }
    int C = 100000000LL*m*m/(Q*Q);

    vector<int> dp(C+1,0);

    for (int i =0;i<n;i++) {
        for (int j =C;j>=w[i];j--) {
            dp[j] = max(dp[j],dp[j-w[i]]+a[i]);
        }
    }

    cout<<dp[C]<<endl;
}

signed main() {

    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
