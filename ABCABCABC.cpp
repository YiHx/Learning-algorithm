#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> pre(n,0),suf(n+1,0);
    vector<int> sum(n+1,0);

    vector<int> cnt(3,0);

    for(int i=0;i<n;i++){
        cnt[s[i]-'A']++;
        if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
            pre[i]=1;
        }
    }

    cnt={0,0,0};

    for(int i=n-1;i>=0;i--){
        cnt[s[i]-'A']++;
        if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
            suf[i]=1;
        }
    }

    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+pre[i];
    }

    vector<int> last(3,-1);

    int ans=0;

    for(int j=0;j<n-1;j++){
        last[s[j]-'A']=j;

        int k=min({last[0],last[1],last[2]});

        if(k>=1 && suf[j+1]){
            ans+=sum[k];
        }
    }

    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    while(T--){
        solve();
    }

    return 0;
}