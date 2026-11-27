#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i <n;) {
        if (i + k <= n) {
            int sum = 0;
            for (int j = 0; j < k; j++) {
                sum += a[i + j];
            }
            ans += max(sum, p);
            i += k;
        } else {
            ans += a[i];
            i++;
        }
    }
    cout << ans << endl;
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