#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i =0;i<n;i++){
        if(a[i][0] == 'x' && a[i][1]!='o'){
            cout<<"Faucet"<<" "<<i+1<<endl;
            return;
        }
        for(int i =0;i<m;i++){
            if(a[0][i] == 'x' && a[1][i]!='o'){
              cout<<"Drain"<<" "<<i+1<<endl;
              return;
            }
        }
    }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}