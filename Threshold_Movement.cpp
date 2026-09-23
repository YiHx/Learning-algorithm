#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    int minn = 1e9+1;
    int maxx = 0;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        if (i&1) {
            minn =min(minn,a[i]);

        }else {
            maxx =max(maxx,a[i]);
        }
    }

    cout<<((!(n&1))&&maxx+2<=minn?"yes":"NO")<<endl;
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