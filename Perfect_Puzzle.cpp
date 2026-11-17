#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(n));
    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            cin>>a[i][j];
        }
    }


    vector<bool> check_x(n,false);
    vector<bool> check_y(n,false);
    vector<vector<bool>> ok(n,vector<bool>(n,false));
    queue<pair<int,int>> q;
    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            if (a[i][j]!='.') {
                queue<pair<int,int>> q;
                q.push({i,j});
                ok[i][j] = true;
                while (!q.empty()) {
                    auto it = q.front();
                    q.pop();
                    int dx[4] = {0,1,0,-1};
                    int dy[4] = {-1,0,1,0};
                    for (int now =0;now<4;now++) {
                        int nx = it.first + dx[now];
                        int ny = it.second + dy[now];
                        if (nx < 0 || nx>=n || ny < 0 || ny>=n)continue;
                        if (ok[nx][ny])continue;
                        ok[nx][ny] = true;
                        q.push({nx,ny});
                        if (a[nx][ny] =='.') {
                            
                        }
                    }
                }
            }
        }
    }

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