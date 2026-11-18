#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
 #define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int maxx = -1;
    for (int i =0;i<n;i++) {
        cin>>a[i];
        maxx = max(maxx,a[i]);
    }
    auto h = views::iota(int32_t{1}, static_cast<int32_t>(maxx + 2));
    auto it = lower_bound(h.begin(),h.end(),0,[&](int height,int x) {
        int cnt = 0;
        for (int  i=0;i<n;i++) {
            cnt += (a[i] / height);
        }
        return cnt >= k;
    });
    if (it != h.begin()) {
        cout<<*it -1 <<endl;
    }else {
        cout<<0<<endl;
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