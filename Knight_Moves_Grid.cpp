#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    // vector<vector<bool>> check(n,vector<bool>(n,false));
    vector<int> dx = {-2,-1,1,2,2,1,-1,-2};
    vector<int> dy = {-1,-2,-2,-1,1,2,2,1};
    vector<vector<int>> dist(n,vector<int>(n,-1));
    dist[0][0] = 0;
    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty()) {
        auto curr = q.front();
        q.pop();
        for (int i =0;i<8;i++) {
            int nx = curr.first + dx[i];
            int ny = curr.second + dy[i];
            if (nx<0 || nx>=n || ny<0 || ny>=n) continue;
            if (dist[nx][ny]!= -1)continue;
            dist[nx][ny] = dist[curr.first][curr.second] + 1;
            q.push({nx,ny});
        }
    }
    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

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