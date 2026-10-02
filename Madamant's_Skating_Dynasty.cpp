#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 998244353;
const int MAXN = 200000 + 5;

long long fact[MAXN], inv[MAXN];

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 0 << '\n';
        return;
    }

    sort(a.begin(), a.end());

    vector<long long> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = (suf[i + 1] + a[i] % MOD) % MOD;
    }

    long long total = fact[n - 1];
    long long ans = 0;

    for (int i = 0; i < n - 1; i++) {
        int k = n - 1 - i;

        long long sumGreater = suf[i + 1];
        long long diff = (sumGreater - (long long)k * (a[i] % MOD)) % MOD;
        if (diff < 0) diff += MOD;

        long long ways = total * inv[k] % MOD;
        ans = (ans + ways * diff) % MOD;
    }

    cout << ans << '\n';
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    inv[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        inv[i] = MOD - MOD / i * inv[MOD % i] % MOD;
    }
    while(T--){
        solve();
    }
    return 0;
}