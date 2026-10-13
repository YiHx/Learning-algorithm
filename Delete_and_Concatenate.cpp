#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n,c;
    cin>>n>>c;
    vector<long long> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
        a[i]-=c;
    }
    sort(a.begin(),a.end(),greater<long long>());
    long long cnt = (n +2 -1 )/2;
    long long ans = 0;
    long long good = 0;
    for (int i = 0;i<n;i++) {
        if (a[i]>0) {
            good++;
        }
    }
    cnt = max(cnt,good);
    for (int i =0;i<cnt;i++) {
        ans+=a[i];
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