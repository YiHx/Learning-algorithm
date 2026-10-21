#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string a;
    cin>>a;
    int ans = 1;
    bool first = false;
    bool second = false;
    for (int i =1;i<a.size() -1;i++) {
        if (a[i-1]!=a[i] && a[i+1]!=a[i] &&!first) {
            first = true;
            ans++;
        }
        if (a[i-1] == a[i] && a[i+1] == a[i] && !second) {
            second  = true;
            ans++;
        }
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