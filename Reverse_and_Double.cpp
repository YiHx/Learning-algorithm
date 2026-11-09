#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int cnt = 0;
    int maxx_value  =-1;
    for(int i = 0;i<n-1;i++){
        maxx_value  = max(maxx_value,abs(a[i]-a[i+1]));
    }

    vector<int> idx;
    for(int i  =0;i<n-1;i++){
        if(abs(a[i] - a[i +1]) == maxx_value){
            idx.push_back(i+1);
            cnt++;
        }
    }
    if(cnt >2){
        cout<<maxx_value<<endl;
        return;
    }else if(cnt == 2){
         int l = idx[0];
         int r = idx[1] - 1;
        int curr = 0;
        for(int i = 0; i < n - 1; i++){
        if(i<l-1||i>r){
            curr = max(curr, abs(a[i] - a[i+1]));
        }
        else if(i == l - 1){
            curr = max(curr, abs(a[l-1] - 2*a[r]));
        }
        else if(i == r){
            curr = max(curr, abs(2*a[l] - a[r+1]));
        }
        else{
            curr = max(curr, 2*abs(a[i] - a[i+1]));
        }
    }
        cout<<min(maxx_value, curr)<<endl;
        return;
    }else {
        int p = idx[0];

    vector<int> pre(n+1,0),suf(n+1,0);

    for(int i=0;i<n-1;i++){
        pre[i+1]=max(pre[i],abs(a[i]-a[i+1]));
    }
    for(int i=n-2;i>=0;i--){
        suf[i]=max(suf[i+1],abs(a[i]-a[i+1]));
    }

    int ans=maxx_value;
    int l=p;
    int inside=0;

    for(int r=l;r<n;r++){
        if(r>l){
            inside=max(inside,2*abs(a[r-1]-a[r]));
        }

        int curr=max({pre[l-1],suf[r+1],inside});
        curr=max(curr,abs(a[l-1]-2*a[r]));

        if(r+1<n){
            curr=max(curr,abs(2*a[l]-a[r+1]));
        }

        ans=min(ans,curr);
    }

    int r=p-1;
    inside=0;

    for(int l=r;l>=0;l--){
        if(l<r){
            inside=max(inside,2*abs(a[l]-a[l+1]));
        }

        int curr=max({
            l>0?pre[l-1]:0,
            suf[r+1],
            inside
        });

        curr=max(curr,abs(2*a[l]-a[r+1]));

        if(l>0){
            curr=max(curr,abs(a[l-1]-2*a[r]));
        }

        ans=min(ans,curr);
    }

    cout<<ans<<endl;
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}