#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
   int n,m;
   cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    int curr = 1;
    for (int i=1;i<=m;i++) {
        int ny =1;
        int nx =i;
        while (nx>= 1 && ny >=1 && nx<=m && ny<=n) {
            a[ny][nx] =curr++;
            nx--;
            ny++;
        }

    }
    for (int i = 2;i<=n;i++) {
        int ny =i;
        int nx =m;
        while (nx>= 1 && ny >=1 && nx<=m && ny<=n) {
            a[ny][nx] =curr++;
            ny++;
            nx--;
        }

    }
    cout<<"Yes"<<endl;
    for (int i= 1;i<=n;i++) {
        for (int j =1;j<=m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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