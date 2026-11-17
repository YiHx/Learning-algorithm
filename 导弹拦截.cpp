#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int> a;
    int curr;
    while (cin>>curr) {
        a.push_back(curr);
    }
    vector<int> dp1(a.size(),1);
    vector<int> dp2(a.size(),1);

    for (int i =0;i<dp1.size();i++) {
        for (int j =0;j<i;j++) {
            if (a[j]>=a[i]) {
                dp1[i] = max(dp1[i],dp1[j]+1);
            }
            if (a[j] < a[i]) {
                dp2[i] = max(dp2[i],dp2[j]+1);
            }
        }
    }
    int ans = -1;
    for (int i =0;i<dp1.size();i++) {
        ans = max(ans,dp1[i]);
    }
    cout<<ans<<endl;
    ans = -1;
    for (int i =0;i<dp2.size();i++) {
        ans = max(ans,dp2[i]);
    }
    cout<<ans<<endl;
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