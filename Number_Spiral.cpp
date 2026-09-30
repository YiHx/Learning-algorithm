#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long x, y, s, mx, ans;
    cin >> x >> y;
    mx = max(x, y);
    s = (mx - 1) * (mx - 1) + 1;
    if (mx % 2 == 0){
        if (x <= y)
            ans = s + x - 1;
        else
            ans = s + 2 * mx - y - 1;
    }
    else{
        if (x >= y)
            ans = s + y - 1;
        else
            ans = s + 2 * mx - x - 1;
    }
    cout << ans << endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}