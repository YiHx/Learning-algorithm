#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    int ans =0;
    sort(a.begin(),a.end());
    for (int i=0;i<n;) {
        if (i+1 < n && a[i]+a[i+1]<=x) {
            ans++;
            i+=2;
        }else {
            ans++;
            i++;
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