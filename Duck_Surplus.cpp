#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    long long ans = a[0];
    for (int i =0;i<n -1;i++) {
       if (a[i +1]>= ans) {
           ans = a[i +1];
       }else {
           ans = ans+a[i+1];
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