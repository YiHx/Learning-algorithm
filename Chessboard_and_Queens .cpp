#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    vector<vector<char>> a(8, vector<char>(8));
    for (int i =0;i<8;i++) {
        for (int j =0;j<8;j++) {
            cout<<a[i][j];
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