#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n,m;
    cin >> n >>m;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i =0;i<m;i++){
        int x,y;
        cin >> x >> y;
        for(int j =0;j<n;j++){
            if(a[j] == x)a[j] = y;
        }
    }
    sort(a.begin(),a.end());
    for(int i =0;i<n;i++){
        cout <<a[i] <<" ";
    }

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
