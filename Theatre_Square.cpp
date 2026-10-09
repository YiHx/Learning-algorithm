#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long ans =  ((n+a - 1)/a) * ((m +a - 1)/a);
    cout<<ans<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}