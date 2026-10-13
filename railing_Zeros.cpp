#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define MOD 1000000007;
void solve(){
    int n, ans = 0;
    cin >> n;
    while (n)
        n /= 5, ans += n;
    cout << ans;

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