#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string ans ="";
    char curr = 'A' - 1;
    if (n&1) {
        cout<<"NO"<<endl;
    }else {
        for (int i=1;i<=n/2;i++) {
            curr++;
            ans+= curr;
            ans+= curr;
        }
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
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