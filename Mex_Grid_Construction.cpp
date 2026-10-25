#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vector<int> vis(2 * n + 1, 0);
            for (int k = 0; k < j; k++) {
                vis[a[i][k]] = 1;
            }
            for (int k = 0; k < i; k++) {
                vis[a[k][j]] = 1;
            }
            int mex = 0;
            while (vis[mex]) {
                mex++;
            }
            a[i][j] = mex;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
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