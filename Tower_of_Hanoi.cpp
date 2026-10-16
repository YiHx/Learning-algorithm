#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
stack <int> a,b,c;

int dfs(int n) {
    for (int i  =0;i<n;i++)
}

void solve(){
    int n;
    cin>>n;
    for (int i =n;i>=1;i--){
        a.push(i);
    }

    int ans = dfs(0);
    cout<<ans<<endl;

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