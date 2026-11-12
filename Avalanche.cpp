#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    int sum =0;
    for (int i =1;i<=n;i++) {
        cin>>a[i];

    }
    for (int i =1;i<=n;i++) {
        if ((i-1)%(k+1) == 0) {
            sum+=a[i];
        }
    }
    cout<<(sum%2 ? "Alice" : "Bob")<<endl;

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