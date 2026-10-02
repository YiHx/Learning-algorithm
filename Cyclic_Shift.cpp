#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    int minn = *min_element(a.begin(), a.end());
     vector<int> b(2*n);
    for (int i = 0; i < 2 * n; i++) {
        b[i] = a[i % n];
    }

    vector<int> nxt(2*n,-1);
    stack<int> st;
    for (int i= 2*n -1;i>=0;i--) {
        while (!st.empty() && b[st.top()] <= b[i]) st.pop();
        if (!st.empty()) nxt[i] = st.top();
        st.push(i);
    }

    vector<int> NXT(n, -1);
    for (int i = 0; i < n; i++) {
        if (nxt[i] != -1 && nxt[i] < i + n) {
            NXT[i] = nxt[i] % n;
        }
    }

    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int x, int y) {
        return a[x] > a[y];
    });

    vector<int> rnk(n,0);
    int i = 0;
    while (i < n) {
        int j = i;
        int v = a[ord[i]];
        while (j < n && a[ord[j]] == v) j++;
        vector<tuple<long long, int, int, int>> keys;
        for (int k = i; k < j; k++) {
            int pos = ord[k];
            if (NXT[pos] == -1) {
                keys.push_back({-(long long)n, -1, -1, pos});
            } else {
                int np = NXT[pos];
                long long d = (np - pos + n) % n;
                keys.push_back({-d, a[np], rnk[np], pos});
            }
        }
        sort(keys.begin(), keys.end());

        int cur = 0;
        for (int k = 0; k < (int)keys.size(); k++) {
            if (k > 0 && keys[k] != keys[k - 1]) cur++;
            rnk[get<3>(keys[k])] = cur;
        }
        i = j;
    }

    int ans = -1, best = INT_MAX;
    for (int pos = 0; pos < n; pos++) {
        if (a[pos] == minn) {
            if (rnk[pos] < best || (rnk[pos] == best && (ans == -1 || pos < ans))) {
                best = rnk[pos];
                ans = pos;
            }
        }
    }

    vector<int> c(n);
    int cur = 0;
    for (int k = 0; k < n; k++) {
        int val = a[(ans + k) % n];
        cur = max(cur, val);
        c[k] = cur;
    }
    for (int k = 0; k < n; k++) {
        cout << c[k] <<" ";
    }
    cout<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}