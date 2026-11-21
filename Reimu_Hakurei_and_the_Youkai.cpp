#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int sum=0;
    int ans=0;

    for(int i=0;i<n-1;i++){
        if(a[i]-sum*x<=x){
            sum++;
        }else{
            int hp=a[i]-sum*x;
            int need=(hp+x-1)/x;
            need--;
            ans+=need;
            sum+=need+1;
        }
    }

    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin>>T;
    while(T--){
        solve();
    }

    return 0;
}