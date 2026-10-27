#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<m;i++) {
        cin>>b[i];
    }
    vector<int> cnt(m);
    iota(cnt.begin(),cnt.end(),0);
    sort(cnt.begin(),cnt.end(),[&](int x,int y){return b[x] < b[y];});
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());



    int i =0;
    int j =0;
   vector<int> ans(m,0);
   vector<int> last(m,0);
    while (i<n && j<m) {
        if (b[j]== a[i]) {
            ans[j] = a[i];
            i++;
            j++;
        }else if ( b[j]> a[i]) {
            ans[j]=a[i];
            i++;
        }else if (a[i] > b[j] && ans[j] == 0) {
            ans[j] = -1;
            j++;
        }
    }
    for (int idx = 0;idx<m;idx++) {
        last[cnt[idx]] = ans[idx];
    }
    for (int idx = 0;idx<m;idx++) {
        cout<<last[idx]<<endl;
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