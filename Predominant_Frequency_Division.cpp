#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }

    vector<int> prefixOne(n+1, 0);
    vector<int> prefixThree(n+1, 0);
    for (int i=1;i<=n;i++) {
        prefixOne[i] = prefixOne[i-1];
        prefixThree[i] = prefixThree[i-1];
        if (a[i] == 1) {
            prefixOne[i]++;
        }
        if (a[i] == 3) {
            prefixThree[i]++;
        }
    }

    vector<int> b(n+1);
    for (int i=1;i<=n;i++) {
        b[i] = i - 2 * prefixThree[i];
    }

    vector<int> maxB(n+1, -1e9);
    maxB[n-1] = b[n-1];
    for (int i=n-2;i>=1;i--) {
        maxB[i] = max(maxB[i+1], b[i]);
    }

    bool ok = false;
    for (int i=1;i<=n-2;i++) {
        if (prefixOne[i] * 2 >= i) {
            if (maxB[i+1] >= b[i]) {
                ok = true;
                break;
            }
        }
    }

    cout<<(ok ? "YES" : "NO")<<endl;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}