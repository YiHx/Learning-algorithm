#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<bool>>v(500,vector<bool>(15,false));
    vector<int>x(500,0);
    for (int i =0;i<n;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if (c<240&&v[a][b]==false) {
            v[a][b] = true;
            cout<<b<<endl;
            x[a]++;
        }
        else if (c>=240&&v[a][b]==false&&x[a]<3) {
            v[a][b] = true;
            cout<<b<<endl;
            x[a]++;
        }
        else {
            cout<<0<<endl;
        }
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    //cin>>T;
    while(T--){
        solve();
    }
    return 0;
}