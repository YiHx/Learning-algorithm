#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int a,b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && max(a, b) <= min(a, b) * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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