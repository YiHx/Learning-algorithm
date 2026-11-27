#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n &1 == 1){
        cout << "NO" <<endl;
        return;
    }

    bool ok = false;
    for(int i =0;i<n-1;i++){
        if(s[i] == s[i+1]){
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES":"NO") << endl;
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