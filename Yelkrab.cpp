#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 5e5+5;
const int M = 1e6+5;

int tr[M][26];
int cnt[M];
int idx;
long long f[N];
long long ans;
vector<int> d[N];

void init() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            d[j].push_back(i);
        }
    }
}


void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        int u = 0;
        for (int j = 0; j < s.size(); j++) {
            int c = s[j] - 'a';
            if (!tr[u][c]) {
                tr[u][c] = ++idx;
            }
            u = tr[u][c];
            cnt[u]++;
            for (auto x : d[cnt[u]]) {
                ans ^= (f[x] * x);
                f[x]++;
                ans ^= (f[x] * x);
            }
        }
        cout << ans << " ";
    }
    cout << endl;

    for (int i = 0; i <= idx; i++) {
        for (int j = 0; j < 26; j++) {
            tr[i][j] = 0;
        }
        cnt[i] = 0;
    }
    for (int i = 0; i <= n; i++) {
        f[i] = 0;
    }
    idx = 0;
    ans = 0;

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    init();
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}