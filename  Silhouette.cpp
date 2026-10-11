#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    vector<int> cnt;
    vector<int> s;
    for (int i =0;i<n;i++) {
        int curr;
        cin>>curr;
        a.push_back({curr,i});
    }
    sort(a.begin(),a.end());
    if (a[0].first!=0) {
        cout<<-1<<endl;
        return;
    }
    for (int i =0;i<a.size();) {
        int j = i;
        while (j< n && a[j].first == a[i].first) {
            j++;
        }
        cnt.push_back(j -i);
        s.push_back(a[i].first);
        i= j;
    }

    int k = s.size();
    vector<int> x(k);
    if ( k ==1) {
        x[0] = 1;
    }else {
        for (int i =0;i<k -1;i++) {
            int now = s[i+1] - s[i];
            if (now%cnt[i]!=0) {
                cout<<-1<<endl;
                return;
            }
            x[i] =  now /cnt[i];
            if (i > 0 && x[i] <= x[i - 1]) {
                cout << -1 << endl;
                return;
            }
        }
        x[k - 1] = x[k - 2] + 1;
        }
    vector<int> ans(n);

    int group = 0;

    for (int i = 0; i < n; ) {
        int j = i;

        while (j < n && a[j].first == a[i].first) {
            j++;
        }

        for (int p = i; p < j; p++) {
            ans[a[p].second] = x[group];
        }

        group++;
        i = j;
    }
    for (int i =0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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