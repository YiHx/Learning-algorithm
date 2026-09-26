#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt = n -k +1;
    int first = k;
    int second = n - k +1;
    long long ans = 0;
    while(cnt --){
        if(a[first]>=a[second]){
            ans+=a[first];
            first++;
        }else {
            ans+=a[second];
            second--;
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