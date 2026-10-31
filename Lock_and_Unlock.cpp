#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    bool ok = true;
    int curr = a[0];
    for(int i =1;i<n;i++){
        if(a[i]!=curr){
            ok = false;
        }
    }
    sort(a.begin(),a.end());
    int mid = a[n/2];
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans+=abs(a[i]-mid);
    }
    int cnt = abs(a[0]- mid)+ abs(a[n-1]- mid);
    if(!ok){
        cout<<ans<<" "<<cnt<<endl;
    }else {
        cout<<0<<" "<<0<<endl;
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