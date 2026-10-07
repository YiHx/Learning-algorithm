#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> st;
    vector<int> check(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '1') {
            st.push_back(i);
        } else if (s[i - 1] == '2') {
            if (!st.empty()) {
                check[st.back()] = 1;
                st.pop_back();
            } else {
                check[i] = 1;
            }
        } else if (s[i - 1] == '3') {
            check[i] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}