#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0;i<n;i++) {
        cin>>a[i].first;
    }
    for (int i = 0;i<n;i++) {
        cin>>a[i].second;
    }
    vector<pair<int,int>> b(n);
    b = a;
    sort(a.begin(),a.end(),[&](pair<int,int> x,pair<int,int> y) {
        return x.first > y.first;
    });
    sort(b.begin(),b.end(),[&](pair<int,int> x,pair<int,int> y) {
        return x.second < y.second;
    });
    int q;
    cin>>q;



}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}