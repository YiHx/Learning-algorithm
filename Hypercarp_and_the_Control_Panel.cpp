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
    vector<pair<int,int>> cnt;
    vector<int> len;
    for (int i =0;i<n;) {
        int j = i+1;
        while (j < n && a[j] == a[i]) {
            j++;
        }
        cnt.push_back({i,a[i]});
        len.push_back(j -i);
        i = j;
    }

    int base = cnt.size();
    int m = base;
    int ans = base;
    bool ok = false;

    for (int i = 0; i + 1 < cnt.size(); i++) {
        if (len[i] >= 2 && len[i + 1] >= 2) {
            m = base + 2;
        }

        if (!ok) {
            if (len[i] >= 2 && (i + 2 == cnt.size() || cnt[i + 2].second != cnt[i].second)) {
                ans = base + 1;
                ok = true;
            }
            else if (len[i + 1] >= 2 && (i == 0 || cnt[i - 1].second != cnt[i + 1].second)) {
                ans = base + 1;
                ok = true;
            }
        }
    }
    cout << max(ans, m) << endl;
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