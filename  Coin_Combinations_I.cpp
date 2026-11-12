#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define MOD 1000000007

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> dp(x+1,0);
    dp[0] = 1;
    for (int i =1;i<=x;i++) {
        for (int j =0;j<n;j++) {
            if(i>=a[j]){
                dp[i]=(dp[i]+dp[i-a[j]])%MOD;
            }
        }
    }
    cout<<dp[x]<<endl;
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}