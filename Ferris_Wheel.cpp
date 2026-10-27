#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    int ans =0;
    sort(a.begin(),a.end());
    int i = 0;
    int j = n -1;
    while (i<=j) {
        if (a[i]+a[j]<=x) {
            ans++;
            i++;
            j--;
        }else {
            ans++;
            j--;
        }
    }
    cout<<ans<<endl;
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