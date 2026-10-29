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

    int curr = a[1];
    int ans = a[1];
    for (int i =2;i<=n;i++) {
        curr = max(a[i],curr+a[i]);
        ans = max(ans,curr);
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