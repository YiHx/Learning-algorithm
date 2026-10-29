#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),[&](pair<int,int> aa,pair<int,int> bb) {
        return aa.second<bb.second;
    });

    int ans = 0;
    int last = 0;
    for (auto [first,second]: a) {
        if (first>=last) {
            last = second;
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