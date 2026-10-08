#include <bits/stdc++.h>
using namespace std;

long long function1(long long X, long long a, long long b, long long c) {
    long long S = a + b + c;
    if (S >= X) return 0;
    
    if (a <= b && b <= c) {
        if (a == c) return -1;
        long long d = min(b - a, c - b);
        return (X - S) + 2 * d + 2;
    }
    return X - S;
}

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n), b(n), c(n);
    long long min_s = 4e18;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        min_s = min(min_s, a[i] + b[i] + c[i]);
    }
    
    long long low = min_s;
    long long high = min_s + k;
    long long ans = low;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sum = 0;
        bool ok = true;
        
        for (int i = 0; i < n; i++) {
            long long val = function1(mid, a[i], b[i], c[i]);
            if (val == -1) {
                ok = false;
                break;
            }
            sum += val;
            if (sum > k) {
                ok = false;
                break;
            }
        }
        
        if (ok) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;git 
        }
    }
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}