#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m,k,w;
    cin>>n>>m>>k>>w;
    vector<int> a(w+1,-1);
    vector<bool> b(w+1,false);
    for (int i=0;i<n;i++) {
        int curr;
        cin>>curr;
        a[curr] = 1;
    }
    for (int i=0;i<m;i++) {
        int curr;
        cin>>curr;
        a[curr] = 0;
    }

    for (int i=1;i<=k;i++) {
        
    }

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