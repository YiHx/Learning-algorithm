#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1);

    for(int i =1;i<=n;i++){
        cin >> a[i];
    }

    for(int i =1;i<=n;i++){
        cin >> b[i];
    }

    vector<array<int, 2>> dp(n + 2, {0, 0});

    for (int i = n; i >= 1; i--) {
        dp[i][0] = max(a[i] - b[i] + dp[i + 1][0], dp[i + 1][1]);
        dp[i][1] = min(b[i] - a[i] + dp[i + 1][1], dp[i + 1][0]);
    }

    if (dp[1][0] > 0) {
        cout << "Sunny" << endl;
    }else if (dp[1][0] < 0) {
        cout << "Aubrey" << endl;
    }else {
        cout << "Draw" << endl;
    }


}   
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}