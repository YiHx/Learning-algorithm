#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m,s;
    cin>>n>>m>>s;

    vector<vector<int>> edge(n+1);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
    }

    queue<int> q;
    vector<int> ok(n+1,false);

    q.push(s);
    ok[s]=true;

    int ans=0;

    while(!q.empty()){
        auto it=q.front();
        q.pop();
        ans++;

        for(int i=0;i<edge[it].size();i++){
            int v=edge[it][i];

            if(!ok[v]){
                ok[v]=true;
                q.push(v);
            }
        }
    }

    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}