#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int max_d;


int dfs(long long x, long long y, int d) {
    if (x == 0 && y == 0) {
        return 0;
    }
    if (x == 0 || y == 0) {
        return 1;
    }
    if (d >= max_d) {
        return 1e9;
    }
    long long g = __gcd(x, y);
    return min(1 + dfs(x - g, y, d + 1), 1 + dfs(x, y - g, d + 1));
}

void solve(){
    long long a,b;
    cin>>a>>b;

    if (a == 0 && b == 0) {
        cout << 0 << endl;
        return;
    }
    if (a == 0 || b == 0) {
        cout << 1 << endl;
        return;
    }

    for (max_d = 1; max_d <= 30; ++max_d) {
        int ans = dfs(a, b, 0);
        if (ans <= max_d) {
            cout << ans << endl;
            return;
        }
    }
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