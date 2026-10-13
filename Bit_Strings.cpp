#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define MOD 1000000007;
void solve(){
    int n;
    cin>>n;
    int ans = 1;
    for (int i=0;i<n;i++) {
        ans =(ans*2)%MOD;
    }
    cout<< ans<<endl;
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