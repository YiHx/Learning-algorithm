#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<string> str;
string nowString;
vector<pair<int,int>> b;

bool check(int n, int m, vector<vector<int>> a, int target) {
    str.clear();
    int x = n;
    int y = 1;

    while (x >= 2 && y <= m - 1) {
        b.clear();
        nowString.clear();
        int i = x;
        int j = y;
        while (i >= 2 && i <= n && j >= 1 && j <= m - 1) {
            if (a[i][j] != target) {
                b.push_back({i,j});
            }
            i++;
            j++;
        }

        if (!b.empty()) {
            int last_x = 1;
            int last_y = 1;
            a[1][1] ^= 1;
            for (auto [nx,ny]: b) {
                nowString.append(ny -last_y,'R');
                nowString.append(nx - last_x,'D');
                for (int now = last_y + 1; now <= ny; now++) {
                    a[last_x][now]^=1;
                }
                for (int now = last_x + 1; now <= nx; now++) {
                    a[now][ny]^=1;
                }
                last_x = nx;
                last_y = ny;
            }
            nowString.append(m - last_y,'R');
            nowString.append(n - last_x,'D');
            for (int now = last_y + 1; now <= m; now++) {
                a[last_x][now]^=1;
            }
            for (int now = last_x + 1; now <= n; now++) {
                a[now][m]^=1;
            }
            str.push_back(nowString);
        }

        if (x!=2) {
            x--;
        }else {
            y++;
        }
    }

    if (a[1][1] != target) {
        nowString.clear();
        nowString.append(m - 1, 'R');
        nowString.append(n - 1, 'D');
        a[1][1] ^= 1;
        for (int now = 2; now <= m; now++) {
            a[1][now] ^= 1;
        }
        for (int now = 2; now <= n; now++) {
            a[now][m] ^= 1;
        }
        str.push_back(nowString);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == target) {
                cnt++;
            }
        }
    }
    return cnt == n * m;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    for (int i =1;i<=n;i++) {
        for (int j =1;j<=m;j++) {
           char curr;
            cin>>curr;
            if (curr == 'W') {
                a[i][j] = 0;
            }else {
                a[i][j] = 1;
            }
        }
    }

    if (check(n, m, a, 0) || check(n, m, a, 1)) {
        cout << "YES" << endl;
        cout << str.size() << endl;
        for (int i = 0; i < str.size(); i++) {
            cout << str[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}