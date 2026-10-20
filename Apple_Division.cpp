#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n;

int dfs(int cnt,int sum1,int sum2,const vector<int>& a) {
    if (cnt == n) {
        return abs(sum1 - sum2);
    }

        return min(dfs(cnt+1,sum1+a[cnt],sum2,a),dfs(cnt+1,sum1,sum2+a[cnt],a));

}

void solve(){
    cin>>n;
    vector<int>a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }

    cout<< dfs(0,0,0,a);
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
     // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}