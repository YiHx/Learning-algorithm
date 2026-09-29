#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n;
    cin>>n;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    for(int i = 0;i<n -1;i++){
        long long curr;
        cin>>curr;
        ans -=curr;
    }
    cout<<ans;
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