#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++) {
        int x = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--) {
            cout << ((x >> j) & 1);
        }
        cout << endl;
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}