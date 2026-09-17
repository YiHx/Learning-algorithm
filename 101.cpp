#include <bits/stdc++.h>
using namespace std;
const int N =2e5+10;
int a[N];
void solve() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        for (int i=0;i<n;i++) {
            if (a[i]==-1) {
                a[i]=1;
                break;
            }
            if (a[i]==1)break;
        }
        for (int i=n-1;i>=0;i--) {
            if (a[i]==-1) {
                a[i]=1;
                break;
            }
            if (a[i]==1)break;
        }
        for (int i=0;i<n;i++) {
            cout<<max(a[i],0)<<" ";
        }
        cout<<endl;
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}