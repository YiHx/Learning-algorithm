#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
   int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin>>a[i];
    }

    vector<int> cnt;

    for (int i =1;i<=n;i++) {
        auto it = lower_bound(cnt.begin(),cnt.end(),a[i]);
        if (it == cnt.end()) {
            cnt.push_back(a[i]);
        }else {
            cnt[it - cnt.begin()] = a[i];
        }
    }
    cout <<cnt.size() <<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}