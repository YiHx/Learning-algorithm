#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long> a(n+1,0);
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    long long ans = 0;
        for (int i= k ;i<=n-k+1;i++) {
            ans+=a[i];
        }
    for (int i= 1;i<=min(k-1,n - k +1);i++) {
        ans+=max(a[i],a[n-i +1]);
    }
    cout<<ans<<endl;
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