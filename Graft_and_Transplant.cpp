#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    if (n ==2 ) {
        cout<<"Bob"<<endl;
        return;
    }
    map<int,int> mp;
    for (int i =0;i<n -1 ;i++) {
        int first,second;
        cin>>first>>second;
        mp[first]++;
        mp[second]++;
    }
    int leaf = 0;
    for (auto & [v,time]: mp) {
        if (time ==1) {
            leaf++;
        }
    }
    int next = n -1 - leaf;
    if (next&1) {
        cout<<"Alice";
    }else {
        cout<<"Bob";
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