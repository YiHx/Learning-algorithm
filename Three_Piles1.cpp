#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int> a(3);
    for(int i =0;i<3;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[0]+1 == a[1] &&a[1] == a[2]-1){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}