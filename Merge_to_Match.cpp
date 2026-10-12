#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    for (int i =0;i<m;i++) {
        cin>>b[i];
    }

    if (n < 2 * m) {
        cout << "No" << endl;
        return;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool check = true;

    for (int i = 0; i < m; i++) {
        if (a[i] > b[i] || a[n - m + i] < b[i]) {
            check = false;
            break;
        }
    }

    cout << (check ? "Yes" : "No") << endl;
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