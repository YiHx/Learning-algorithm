#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
void solve(){
    ll x,y,k;
    ll ans =0;
    cin>>x>>y>>k;
    for (int i=0;i<min(k,y-x);i++) {
        ans +=(y++)%(x++);
    }
    long long last = max(0ll,k-min(k,y-x));
    ans+=last*(y-x);
    cout<<ans<<endl;
}
using namespace std;
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