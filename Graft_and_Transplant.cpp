#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    if (n ==2) {
        cout<<"Bob"<<endl;
        return;
    }
    int need = n - 3;
    map<int,int> mp;
    for (int i=0;i<n-1;i++) {
        int first,second;
        cin>>first>>second;
        mp[first]++;
        mp[second]++;
    }
    int cnt = 0;
    for (auto it : mp) {
        if (it.second>2) {
            cnt = cnt + (it.second - 2);
        }
    }
    int needd = need - cnt;
    if (needd == 1) {
        cout<<"Alice"<<endl;
    }else {
        cout<<"Bob"<<endl;
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