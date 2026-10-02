#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<bool> check(2e5+10,false);
vector<int> prime[200010];

void pre() {
    for (int i= 2;i<=2e5;i++) {
        if (!check[i]) {
            check[i]= true;
            for (int j = 2*i;j<=2e5;j+=i) {
                prime[j].push_back(i);
                check[j] = true;
            }
            prime[i].push_back(i);
        }
    }
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long > dp(n+1,LLONG_MAX);
    for (long long i=1;i<=n;i++) {
        if (i<=k)dp[i] = 0;
        for (auto x: prime[i]) dp[i] = min(dp[i],dp[i/x]*x +1);
    }
    long long ans = 0;
    for (long long i =1;i<=n;i++) {
        long long curr ;
        cin>>curr;
        ans+=dp[curr];
    }
    cout<<ans<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    pre();
    while(T--){
        solve();
    }
    return 0;
}