#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1;i <=n;i++) {
        cin>>a[i];
    }
    vector<int> pre(n+2,0);
    vector<int> last(n+2,0);
    for (int i =2;i<=n;i++) {
        pre[i] = gcd(pre[i-1],a[i-1]);
    }
    for (int i = n - 1 ;i>=1;i--) {
        last[i] = gcd(last[i+1],a[i+1]);
    }

    int ans = 0;
    for (int i = 1;i<=n;i++) {
        ans = gcd(ans,a[i]);
    }
    for (int i =1;i<=n;i++) {
        for (int j = 0; j<=29;j++) {
            int curr = 1LL << j;
            int now = curr ^ a[i];
            ans = max(ans , gcd(gcd(pre[i],now),last[i]));
        }
    }
    cout << ans <<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}