#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int minn =min({a,b,c});
    int maxx =max({a,b,c});
    int minn1 = maxx - minn;
    cout << min({
    minn1,
    max({b+c, b, c}) - min({b+c, b, c}),
    max({a, a+c, c}) - min({a, a+c, c}),
    max({a, b, a+b}) - min({a, b, a+b})
}) << endl;
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