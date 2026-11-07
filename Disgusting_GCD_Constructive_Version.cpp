#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int N = 200005;
bool st[N];
vector<int> primes;

void init() {
    for (int i = 2; i<N; i++) {
        if (st[i]) continue;
        primes.push_back(i);
        if (i * i < N) {
            for (int j = i * i; j <N; j += i) {
                st[j] = true;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        auto it = lower_bound(primes.begin(), primes.end(), x);
        cout << *it <<" ";
    }
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    init();
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}