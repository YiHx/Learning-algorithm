#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> cnt(26, 0);

    for (char c : s) {
        cnt[c - 'A']++;
    }

    for (int x : cnt) {
        if (x > (n + 1) / 2) {
            cout << -1 << endl;
            return;
        }
    }

    string ans;
    int last = -1;

    for (int i = 0; i < n; i++) {
        int rem = n - i;
        int pick = -1;

        for (int j = 0; j < 26; j++) {
            if (cnt[j] > rem / 2) {
                pick = j;
                break;
            }
        }

        if (pick == -1) {
            for (int j = 0; j < 26; j++) {
                if (cnt[j] > 0 && j != last) {
                    pick = j;
                    break;
                }
            }
        }

        if (pick == -1 || pick == last) {
            cout << -1 << endl;
            return;
        }

        ans += char('A' + pick);
        cnt[pick]--;
        last = pick;
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}