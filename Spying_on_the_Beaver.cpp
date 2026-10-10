#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> depth(n + 1, 0);
    for (int i =2;i<= n;i++) {
        cin>>a[i];
        depth[i] = depth[a[i]] + 1;
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for (int i =0;i<m;i++) {
        cin>>b[i];
    }
    if (m == 1) {
        cout<<0<<endl;
        return;
    }
    cout<<m-1<<" ";
    sort(b.begin(), b.end(), [&](int x, int y) {
        return depth[x] > depth[y];
    });
    int cnt = 0;
    for (int i =0;i<m -1;i++) {
        cout<<b[i]<<" ";
    }
    cout<<endl;


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