#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    queue<int> q;
    for (int i =1;i<=n;i++) {
        q.push(i);
    }
    while (!q.empty()) {
        auto curr  = q.front();
        q.pop();
        q.push(curr);
        curr  = q.front();
        q.pop();
        cout<<curr<<" ";
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}