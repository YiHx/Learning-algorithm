#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int now;
void solve() {
    int curr =0;
    int n,k;cin>>n>>k;
    if (k==0||k<n||2*n == k) {
        cout<<-1<<endl;
        return;
    }
    int cnt = 2*n-k;
    vector<vector<int>> a(n,vector<int>(n,0));
    vector<int> first(n*n);
    for (int i=0;i<n*n;i++) {
        first[i]=i+1;
    }

    for (int i=0;i<cnt;i++) {
        a[i][i]=first[i];
        curr =i;
    }
     now =curr;
    for (int i=curr+1;i<n;i++) {

        a[i][now]=first[++curr];
    }
    for (int i=now+1;i<n;i++) {

        a[now][i]=first[++curr];
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]==0) {
                a[i][j]= first[++curr];
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}