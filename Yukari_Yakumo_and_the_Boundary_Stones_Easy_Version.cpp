#include <bits/stdc++.h>
using namespace std;
#define int long long

int m,ans;
string s;
bool ok[55][105][105];

void dfs(int i,int x,int y){
    ans=max(ans,x+y);

    if(i==m || x+y==0) return;
    if(ok[i][x][y]) return;

    ok[i][x][y]=true;

    if(s[i]=='+'){
        if(x>0) dfs(i+1,x-1,y+1);
        if(y>0) dfs(i+1,x,y+1);
    }else{
        if(x>0) dfs(i+1,x-1,y);
        if(y>0) dfs(i+1,x+1,y-1);
    }
}

void solve(){
    int x,y;
    cin>>x>>y>>m;
    cin>>s;

    ans=x+y;
    memset(ok,false,sizeof(ok));

    dfs(0,x,y);

    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}