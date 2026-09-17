#include <bits/stdc++.h>
using namespace std;
const int N =5;
int mod[N];
void solve() {
    int t;
    cin>>t;
    while (t--) {
        memset(mod,0,sizeof(mod));
        int n;
        cin>>n;
        for (int i=0;i<n;i++) {
            int curr;
            cin>>curr;
            mod[curr%4]++;
        }
        cout<<max({mod[0],mod[1]+mod[3],mod[2]})<<endl;
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}