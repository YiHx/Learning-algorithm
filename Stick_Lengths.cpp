#include <bits/stdc++.h>
#include <pstl/algorithm_impl.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mid = a[n/2];
    int ans = 0;
    for (int i =0;i<n;i++) {
        ans +=abs(mid - a[i]);
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