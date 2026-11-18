#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
   int n,m;
    cin>>n>>m;
    vector<int> a(n);
    int maxx = -1;
    for (int i =0 ;i< n;i++) {
        cin>>a[i];
        maxx = max(maxx,a[i]);
    }
    vector<int> h(maxx+1,0);
    iota(h.begin(),h.end(),0);

    auto it = lower_bound(h.begin(),h.end(),0,[&](int height,int x) {
        int sum = 0;
        for (int i =0;i<n;i++) {
            if (a[i] > height) {
                sum += (a[i] - height);
            }
        }
        return sum >= m;
    });

    cout<< *it -1 <<endl;


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