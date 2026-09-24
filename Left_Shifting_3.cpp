#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    string a;
    string b = "nanjing";
    cin>>a;
    long long ans = 0;
    for (int i=0;i<n;i++) {
        if (a[i]== 'n') {
            if (a.substr(i).length()>=b.length()&&a.substr(i,7)==b) {
                ans ++;
            }else if (a.substr(i) + a.substr(0,b.length() - a.substr(i).length()) == b && b.length() - a.substr(i).length()<=k) {
                ans++;
            }
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