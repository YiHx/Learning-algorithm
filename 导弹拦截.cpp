#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int> f,g;
    int x;
    while (cin>>x) {
        auto it1 = upper_bound(f.begin(),f.end(),x,greater<int>());
        if (it1 == f.end()) {
            f.push_back(x);
        }else {
            *it1 = x;
        }

        auto it2 = lower_bound(g.begin(),g.end(),x);

        if (it2 == g.end()) {
            g.push_back(x);
        }else {
            *it2 = x;
        }
    }
    cout<< f.size() <<endl;
    cout<<g.size() <<endl;
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