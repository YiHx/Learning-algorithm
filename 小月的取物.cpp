#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> memo;
vector<int> a;
int n;

int dfs(int x,int y) {
    int k = max(x,y) +1;
     if (k > n) {
         return abs(a[x] - a[y]);
     }

    if ( memo[x][y]!= -1) {
        return memo[x][y];
    }

    int now1 = abs(a[x] - a[y]) + dfs(y,k);

    int now2 = abs(a[x] - a[k]) + dfs(k,y);

    return memo[x][y] = min(now1,now2);
}

void solve() {
    cin >> n;
    a.assign(n+1,0);
    for (int i =1;i<=n;i++)cin>>a[i];
    if ( n ==1) {
        cout << 0 <<endl;
        return;
    }
    memo.assign(n+1,vector<int>(n+1,-1));
    cout << min(dfs(1,2),dfs(2,1))<<endl;


}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}