#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

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
    int x = n;
    int y = 1;
    vector<string> str;
    string nowString;
    while (x!=1 && y != m -2) {
        int i = x;
        int j = y;
        vector<pair<int,int>> b;
        b.clear();
        while (i>=1 &&i<=x && j>=1 && j<=m) {
            if (a[i][j] == 0) {
                b.push_back({i,j});
            }
            i++;
            j++;
        }


        nowString.clear();
        str.clear();
        if (!b.empty()) {
            int last_x = 1;
            int last_y = 1;
            for (auto [nx,ny]: b) {
                nowString.append(ny -last_y,'R');
                nowString.append(nx - last_x,'D');
                for (int now = last_y;now<ny;now++) {
                    a[last_x][now]^=1;
                }
                for (int now = last_x;now<=nx;now++) {
                    a[now][ny]^=1;

                }
                last_x = nx;
                last_y = ny;

            }
            nowString.append(m - last_x,'R');
            nowString.append(n - last_y,'D');
            for (int now = last_y;now<m;now++) {
                a[last_x][now]^=1;
            }
            for (int now = last_x;now<=n;now++) {
                a[now][m]^=1;
            }
        }
        str.push_back(nowString);
    }
    int cnt  = 0;
    for (int i =1;i<=m;i++) {
        cnt+=a[1][i];
    }
    for (int i =1;i<=n;i++) {
        cnt+=a[m][i];
    }
    if (cnt != (n+m -1)&&cnt!=0) {
        cout<<"NO"<<endl;
    }else {
        cout<<"YES"<<endl;
        if (str.empty()) {
            cout<<0<<endl;
        }else {
            cout<<str.size()<<endl;
            for (int i = 0;i<str.size();i++) {
                cout<<str[i]<<endl;
            }
        }
    }
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