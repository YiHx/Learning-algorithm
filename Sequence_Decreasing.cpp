#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int minn = LLONG_MAX;
    for (int i =0;i<n;i++) {
        cin>>a[i];
        minn = min(minn,a[i]);
    }
    if (minn >= n) {
        cout<<0<<endl;
    }else {
        cout<<n<<endl;
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}