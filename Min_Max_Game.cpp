#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long ans =0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        ans+=a[i];
    }
    cout<<(ans>=n-ans?"Bessie":"Elsie")<<endl;
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