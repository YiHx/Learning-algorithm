#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m,t;
    cin>>n>>m>>t;
    vector<int> a(m+1);
    for (int i =1;i<=m;i++) {
        cin>>a[i];
    }

    vector<int> s[n+1];

    vector<int> cnt(n+1);
    for (int i =1;i<=n;i++) {
        int aa,k;
        cin >> aa >> k;
        cnt[i] = aa;
        for (int j = 0;j<k;j++) {
            int curr;
            cin>>curr;
            s[i].push_back(curr);
        }
    }



    vector<int> ans(n+1,0);
    vector<int> last_time(m+1,0);
    if (t == 1000000000) {
        vector<queue<pair<int,int>>> cpu(m+1);
        for (int i =1;i<=n;i++) {
            int noww  = (i-1)% m+1;
            cpu[noww].push({cnt[i],i});
        }

        for (int i = 1;i<=m;i++) {
            while (!cpu[i].empty()) {
                auto it = cpu[i].front();
                cpu[i].pop();
                if (cnt[i] >= it.first) {
                    ans[it.second] +=it.first;
                    ans[it.second]+=last_time[i];
                    last_time[i]+=it.first;
                }else {
                    ans[it.second]+= cnt[i];
                    ans[it.second]+=last_time[i];
                    it.first-=cnt[i];
                    last_time[i]+=cnt[i];
                    cpu[i].push(it);
                }

            }
        }
        for (int i =1;i<=n;i++) {
            cout<<ans[i]<<endl;
        }
    }
}

signed main() {

    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
