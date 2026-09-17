#include <bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int bg[N];
void solve() {
    vector<int> a[N];

    int n,q;
    cin>>n>>q;

    for (int i=0;i<n;i++) {
        int curr;
        cin>>curr;
        bg[i]=curr;
    }
    int j=0;
    for (int i=0;i<n;i++) {
        a[bg[i]].push_back(i);
    }
    for (int turn=0;turn<q;turn++) {
        int ans =0;
        int x,y;
        cin>>x>>y;
        // if (a[x].empty()||a[y].empty()) {
        //
        //     cout<<0<<'\n';
        //     return;
        // }
        for (auto it : a[x]) {
            for (int i=0;i<a[y].size();i++) {
                if (a[y][i]>it) {
                    ans+=a[y].size()-i;
                    break;
                }
            }
        }
        cout<<ans+1<<'\n';
    }

}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}