#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a[n];
    for(int i =0;i<m;i++){
         int u,v,w;
         cin >> u >> v  >> w;

        a[u].push_back({v,w});
        a[v].push_back({u,w});

        
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