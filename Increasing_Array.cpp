#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans = 0;
    for(int i =0;i<n -1;i++){
        if(a[i+1]<a[i]){
            ans+= a[i] - a[i+1];
            a[i+1] += a[i] -a[i+1];
        }
    }
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