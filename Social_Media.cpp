#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Node {
    int a1;
    int a2;
    int cnt = 0;
};

struct Compare {
    bool operator()(struct Node & a, struct Node & b) {
        return a.cnt < b.cnt;
    }
};

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    long long ans = 0;
    vector<bool> a(k+1,false);
    for (int i=1;i<=n;i++) {
        int curr;cin>>curr;
        a[curr]=true;
    }

    map<pair<int,int>,int> mp;
    // pair<int,int> pr;
    vector<pair<int,int>> all;
    priority_queue<Node,vector<Node>,Compare> pq;
    // vector<Node> b;
    for (int i=1;i<=m;i++) {
        vector<int> curr(2);
        cin>>curr[0]>>curr[1];
        all.push_back({curr[0],curr[1]});
        if (a[curr[0]]&&a[curr[1]]) {

        }else {
            ranges::sort(curr);
            mp[{curr[0],curr[1]}] ++;
        }
    }

    for (auto it : mp) {
        pq.push({it.first.first,it.first.second,it.second});
    }

    if (!pq.empty()) {
        Node thisNode = pq.top();
        pq.pop();
        if (!a[thisNode.a1]&&!a[thisNode.a2]&&(thisNode.a1==thisNode.a2)||(!a[thisNode.a1]&&a[thisNode.a2]||a[thisNode.a1]&&!a[thisNode.a2])) {
            a[thisNode.a1]=true;
            a[thisNode.a2]=true;
            // ans+=thisNode.cnt;
            if (!pq.empty()) {

                thisNode = pq.top();
                pq.pop();
                if (!a[thisNode.a1]&&!a[thisNode.a2]&&(thisNode.a1==thisNode.a2)||(!a[thisNode.a1]&&a[thisNode.a2]||a[thisNode.a1]&&!a[thisNode.a2])) {
                    a[thisNode.a1]=true;
                    a[thisNode.a2]=true;
                    // ans+=thisNode.cnt;
                }
            }
        }else {
            a[thisNode.a1]=true;
            a[thisNode.a2]=true;
            // ans+=thisNode.cnt;
        }
    }
    for (auto it : all) {
        if (a[it.first]&&a[it.second]) {
            ans++;
        }
    }
    cout<<ans<<endl;
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