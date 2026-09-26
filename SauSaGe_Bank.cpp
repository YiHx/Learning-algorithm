#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    int ans = 1;
    for(int i=1;i<= n -k +1;i++){
            ans*=2;
    }
    ans+=(k-1)*2;
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