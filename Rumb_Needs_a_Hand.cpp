#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve() {
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    vector<int> bad;
    for (int i=1;i<=n;i++) {
        if (a[i]!=i) {
            bad.push_back(a[i]);
        }
    }
    reverse(bad.begin(), bad.end());
    for (int i=0;i+1<bad.size();i++) {
        if (bad[i]>bad[i+1]) {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}