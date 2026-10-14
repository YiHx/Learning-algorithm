#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i =0 ;i<n;i++) {
        cin>>a[i];
    }
    for (int i =0;i<n;i++) {
        cin>>b[i];
    }

    vector<int> diff(n);
    for (int i =0;i<n;i++) {
        diff[i] = a[i] -b[i];
    }
    bool ok =true;
    for (int i =n -1;i>=0;i--) {
        if (i ==0) {
            if (diff[0]>0) {
                ok =false;
            }
        }else {
            if (diff[i]>0) {
                diff[i -1]+=diff[i];
            }
        }
    }
    cout<< (ok?"YES":"NO")<<endl;
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