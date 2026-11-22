#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int> pre0(n+1,0);
    vector<int> pre1(n+1,0);

    for(int i=1;i<=n;i++){
        pre0[i]=pre0[i-1]+(s[i-1]=='0');
        pre1[i]=pre1[i-1]+(s[i-1]=='1');
    }

    map<int,int> mp;
    mp[0]=1;

    int ans=0;

    for(int i=1;i<=n;i++){
        int now=pre0[i]-pre1[i];

        ans+=mp[now-k];

        if(k!=0){
            ans+=mp[now+k];
        }

        mp[now]++;
    }

    cout<<ans<< endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}