#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<bool> ok(k+1,false);
    long long ans = 0;
    for(int i=1;i<n+1;i++){
        int curr;
        cin>>curr;
        ok[curr] = true;
    }
    vector<int> a(k+1,0);
    map<pair<int,int>,int> mp;

    for(int i = 1; i <= m; i++){
        int first, second;
        cin >> first >> second;
        if(first > second){
            swap(first, second);
        }
        if(ok[first] && ok[second]){
            ans++;
        } else if(ok[first] && !ok[second]){
            a[second]++;
        } else if(!ok[first] && ok[second]){
            a[first]++;
        } else {
            if(first == second){
                a[first]++;
            } else {
                mp[{first, second}]++;
            }
        } 
    }
    
        vector<int> all;
        for(int i=1;i<=k;i++){
            if(!ok[i]){
                all.push_back(a[i]);
            }
        }

        sort(all.begin(), all.end(), greater<int>());


        int maxx = 0;
        if(all.size()>=1){
            maxx = max(maxx,all[0]);
        }

        if(all.size()>=2){
            maxx = max(maxx,all[0]+all[1]);
        }

        for(auto const& [edge ,weight] : mp){
            int oneone = edge.first;
            int onetwo = edge.second;
            int total = a[oneone] + a[onetwo] +weight;
            maxx = max(maxx,total);

        }

        cout<<ans + maxx<<endl;



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