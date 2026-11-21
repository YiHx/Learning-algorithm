#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> ans(n,1e9);

    int last=-1;

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            last=i-1;
        }

        if(last!=-1){
            ans[i]=i-last;
        }
    }

    last=-1;

    for(int i=n-2;i>=0;i--){
        if(a[i]!=a[i+1]){
            last=i+1;
        }

        if(last!=-1){
            ans[i]=min(ans[i],last-i);
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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