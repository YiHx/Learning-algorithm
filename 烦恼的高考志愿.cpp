#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int m,n;
    cin>>m>>n;
    vector<int> a(m);
    vector<int> b(n);
    for (int i =0;i <m;i++) {
        cin>>a[i];
    }
    for (int i = 0 ;i<n;i++) {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = 0;
    for (int i =0 ;i<n;i++) {
        auto it = lower_bound(a.begin(), a.end(), b[i]);

        int minn = LLONG_MAX;
        if(it != a.end()){
            minn = min(minn, abs(*it - b[i]));
        }

        if(it != a.begin()){
            minn = min(minn, abs(*prev(it) - b[i]));
        }

        ans += minn;
    }

    cout << ans << endl;
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