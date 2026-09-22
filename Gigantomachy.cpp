#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> b(m+1);
    long long cnta = 0;
    long long cntb = 0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cnta+=a[n-1];
    for (int i=0;i<m;i++) {
        cin>>b[i];
    }
    cntb+=b[m-1];
    for (int i=0;i<n-1;i++) {
        cnta+=a[i]-a[i+1]+1;
    }
    for (int i=0;i<m-1;i++) {
        cntb+=b[i]-b[i+1]+1;
    }
    if (cnta>=cntb)cout<<1<<endl;
    else cout<<2<<endl;
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