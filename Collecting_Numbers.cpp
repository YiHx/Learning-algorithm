#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin>>a[i];
    }
    vector<int> idx(n+1);
    for (int i =1;i<=n;i++) {
        idx[a[i]] = i;
    }
    int ans = 1;
    for (int i =1;i<n;i++) {
        if (idx[i+1]<idx[i]) {
            ans++;
        }
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