#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n+1);
    for(int i =1;i<=n;i++){
        cin>>a[i];
    }
    vector<long long> b(n+1,0);
    map<long long ,long long> cnt;
    for(int i =1;i<=n -4;i++){
        b[i] = a[i] + a[i + 2] - a[i + 4];
        cnt[b[i]]++;
    }

    long long ans = 0;
    for(auto [it,ct] : cnt){
        ans+=ct*(ct - 1)/2;
    }

    for (int i = 1; i + 2 <= n -4; i++) {
        if (b[i] == b[i + 2]) {
            ans--;
        }
    }

    for (int i = 1; i + 4 <= n -4; i++) {
        if (b[i] == b[i + 4]) {
            ans--;
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