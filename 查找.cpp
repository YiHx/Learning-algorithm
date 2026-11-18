#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i =0; i< n;i++) {
        cin>>a[i];
    }
    while (m--) {
        int curr;
        cin>>curr;
        auto it = lower_bound(a.begin(),a.end(),curr);
        if (it == a.end() || (*it) != curr) {
            cout<<-1<<" ";
        }else {
            cout<<(it - a.begin()) +1 <<" ";
        }
    }
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