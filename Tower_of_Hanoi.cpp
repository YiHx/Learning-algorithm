#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void dfs(int n,int from,int to,int aux) {
    if ( n ==0)return;

    dfs(n-1,from, aux,to);
    cout<<from<<" "<<to<<endl;

    dfs(n -1,aux,to,from);

}

void solve(){
    int n;
    cin>>n;
    cout<< (1<<n) -1<<endl;
    dfs(n,1,3,2);
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