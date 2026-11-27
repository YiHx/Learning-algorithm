#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int curr = 1;
    for (int i =1;i<=n;i++) {
        for (int j= 1;j<=i;j++) {
            printf("%4d",curr);
            curr++;
        }
        cout <<endl;
    }
}

signed main(){

    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}