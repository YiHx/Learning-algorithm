#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> pos(n+1);
    for (int i = 1;i<=n;i++) {
        cin>>a[i];
        pos[a[i]] = i;
    }

    sort(a.begin()+1,a.end(),greater<int>());
    if (n&1)n--;
    bool ok =true;

    for (int i=1;i<n;i+=2) {
        if ((pos[a[i]]&1) && (pos[a[i+1]]&1) || !(pos[a[i]]&1) && !(pos[a[i+1]]&1)) {
            ok =false;
        }
    }
    cout<<(ok ? "YES" : "NO")<<endl;
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