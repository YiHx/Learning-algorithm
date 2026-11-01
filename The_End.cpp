#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a[10], b[10], p[10];
bool flag[10];
double ans = 0;

void calc() {
    double sum = 0;

    for (int mask = 0; mask < (1 << 7); mask++) {
        vector<int> v;
        for (int i = 1; i <= 8; i++) {
            v.push_back(p[i]);
        }

        double prob = 1;
        int bit = 0;
        bool ok = true;

        while (v.size() > 1) {
            vector<int> t;

            for (int i = 0; i < v.size(); i += 2) {
                int x = v[i], y = v[i + 1];
                double q = double(a[x]) / (a[x] + b[y]);

                if (mask & (1 << bit)) {
                    prob *= q;
                    t.push_back(x);
                    if (y == 1) ok = false;
                } else {
                    prob *= (1 - q);
                    t.push_back(y);
                    if (x == 1) ok = false;
                }

                bit++;

                if (!ok) break;
            }

            if (!ok) break;

            v = t;
        }

        if (ok) {
            sum += prob;
        }
    }

    ans = max(ans, sum);
}

void f(int i) {
    if (i == 9) {
        calc();
        return;
    }

    for (int j = 1; j <= 8; j++) {
        if (flag[j] == false) {
            flag[j] = true;
            p[i] = j;
            f(i + 1);
            flag[j] = false;
        }
    }
}

void solve() {
    f(1);
    cout << fixed << setprecision(12) << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 8; i++) {
        cin >> a[i] >> b[i];
    }

    solve();
    return 0;
}