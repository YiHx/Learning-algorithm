#include <bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int bg[N];
vector<int> a[N];
void solve() {


    int n,q;
    cin>>n>>q;

    for (int i=0;i<n;i++) {
        int curr;
        cin>>curr;
        a[curr].push_back(i);
    }

    for (int turn=0;turn<q;turn++) {
        int ans =0;
        int x,y;
        cin>>x>>y;
        // if (a[x].empty()||a[y].empty()) {
        //     cout<<0<<'\n';
        //     break;
        // }
        for (auto it : a[x]) {
            // auto p = lower_bound(a[y].begin(),a[y].end(),it);
            for (auto i=lower_bound(a[y].begin(),a[y].end(),it);i!=a[y].end();i++) {
                // if (a[y][i]>it) {
                //     ans+=a[y].size()-i;
                //     break;
                // }
                int index = i-a[y].begin();
                ans+=a[y].size()-(index);
                if (index==it) {
                    ans--;
                }
                break;
            }
        }
        cout<<ans<<'\n';
    }

}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}