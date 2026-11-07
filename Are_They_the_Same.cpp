#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    int cnta = 0, cntb = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != k % 2) cnta++;
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != k % 2) cntb++;
    }
    cout << (cnta >= cntb ? "YES" : "NO") << endl;
    
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