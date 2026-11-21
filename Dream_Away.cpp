#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

void solve() {
    int n,k;
    cin>>n>>k;
    int maxx = -1;
    vector<int> a(n);
    for (int i  =0;i<n;i++) {
        cin>>a[i];
        maxx = max(maxx,a[i]);
    }

    sort(a.begin(),a.end());

    map<int,int> mp;
    for (int i = 0;i<n;i++) {
        mp[a[i]]++;
    }

    vector<int> pw(n+1,1);
    for (int i =1;i<=n;i++) {
        pw[i] = pw[i-1]*2 %MOD;
    }

    int ans = 0;
    int last = 1;
    int remain = n;
    auto function = [&](int x,int y) -> int{
        long long res = 1 % MOD;
        x %= MOD;
        while (y > 0) {
            if (y & 1) res = res * x % MOD;
            x = x * x % MOD;
            y >>= 1;
        }
        return res;
    };

    for (int i = 1; i <= n + 1; i++) {
        remain-=mp[i];

        int noww = last * pw[remain]%MOD;
        ans = (ans + noww*function(i,k))%MOD;

        if (mp[i] == 0)break;
        last = last *(pw[mp[i]] -1)%MOD;
    }
    cout<<ans<<endl;

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
