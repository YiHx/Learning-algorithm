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



    vector<vector<bool>> ok(n,vector<bool>(n,false));
    queue<pair<int,int>> q;
    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            if (a[i][j]!='.' && ok[i][j]== false) {
                vector<bool> check_x(n,false);
                vector<bool> check_y(n,false);
                queue<pair<int,int>> q;
                q.push({i,j});
                ok[i][j] = true;
                while (!q.empty()) {
                    auto it = q.front();
                    auto curr = a[it.first][it.second];
                    q.pop();
                    int dx[4] = {0,1,0,-1};
                    int dy[4] = {-1,0,1,0};
                    for (int now =0;now<4;now++) {
                        int nx = it.first + dx[now];
                        int ny = it.second + dy[now];
                        if (nx < 0 || nx>=n || ny < 0 || ny>=n)continue;
                        if (ok[nx][ny])continue;
                        if (check_x[nx] || check_y[ny])continue;
                        if (a[nx][ny] =='.') {
                            a[nx][ny] = curr;
                            q.push({nx,ny});
                            ok[nx][ny] = true;
                        }else {
                            check_x[nx] = true;
                            check_y[ny] = true;
                        }
                    }
                }
            }
        }
    }

    for (int i =0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            cout<<a[i][j];
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