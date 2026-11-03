#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    map<int,int> mp;
    for (int i =0;i<n;i++) {
        mp[a[i]]++;
    }
    int ans = 1;
    for (auto [it,cnt]: mp) {
        ans  = (ans*(cnt+1))%MOD;
    }
    cout<<ans - 1<<endl;
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