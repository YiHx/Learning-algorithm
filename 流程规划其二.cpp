#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    double q;
    cin>> n >> m >> q;
    vector<pair<double,int>> a(n);
    for (int i  =0;i<n;i++) {
        cin>>a[i].second;
    }
    for (int i =0;i<n;i++) {
        cin>>a[i].first;
    }
    sort(a.begin(),a.end());
    double chaa = 0;
    int ans = 0;
    for (int i =0;i<n;i++) {
        chaa += (pow(a[i].first,2));
        if ((double)m / (sqrt(chaa))< q) {
            break;
        }else {
            ans+=a[i].second;
        }
    }
    cout<<ans<<endl;

}

signed main() {

    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
