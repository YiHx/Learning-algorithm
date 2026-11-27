#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l, a, b;
    cin >> l >> a >> b;
    int aa = gcd(a, l);
    int bb = gcd(b, l);
    int g = lcm(aa, bb);
    cout << l / g << endl;
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