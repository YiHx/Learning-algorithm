#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin >> n >> a >> b;
    int ans = n;
    if(a > n && b > n){
        ans =ans;
    }else if(a > n && b <=n || b > n && a<=n){
        ans--;
    }else if( a <=n && b <=n &&a == b){
        ans--;
    }else if(a<=n && b<=n && a!=b){
        ans-=2;
    }
    cout <<ans<<endl;
}

signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}