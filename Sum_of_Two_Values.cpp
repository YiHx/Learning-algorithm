#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
   int n,x;
    cin>>n>>x;
    vector<int> a(n);
    map<int,int>m;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        int need = x - a[i];
        if(m.count(need)){
            cout << m[need] + 1 << " " << i + 1 << endl;
            return;
        }
        m[a[i]] = i;
    }
    cout<<"IMPOSSIBLE"<<endl;

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