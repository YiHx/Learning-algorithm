#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int function1( const vector<int> &a) {
    int ans = 0;
    for (auto it : a) {
        if (!(__builtin_popcount(it)&1)) {
            ans ++;
        }
    }
    return ans;
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans = function1(a);
    cout<<ans<<" ";
    while (q--) {
        int p,x;
        cin>>p>>x;
        p--;
        if (__builtin_popcount(a[p])&1 && !(__builtin_popcount(x)&1)) {
            ans++;
        }else if (!(__builtin_popcount(a[p])&1) && __builtin_popcount(x)&1) {
            ans--;
        }
        a[p] = x;
        cout<<ans<<" ";
    }
    cout<<endl;
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