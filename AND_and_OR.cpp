#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n,k;
    cin>>n>>k;
    map<int,int> mp;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        if(mp.find(k - a[i])!= mp.end()){
            cout<<mp[k - a[i]] + 1<<" "<<i + 1<<endl;
            return;
        }
        mp[a[i]] = i;
    }
    cout<<"-1"<<endl;

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