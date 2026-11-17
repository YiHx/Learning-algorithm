#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a[n];
    for (int i =0;i<n;i++) {
        for (int j = 0;j<i+1;j++){
            int curr;
            cin >> curr;
            a[i].push_back(curr);
        }
    }

    for (int i = n -2 ; i>=0;i--) {
        for (int j = 0;j<a[i].size();j++) {
            a[i][j] +=max(a[i+1][j],a[i+1][j+1]);
        }
    }
    cout<<a[0][0]<<endl;
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