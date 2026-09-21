#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> a;
    long long ans =0;
    long long cnt0 =0;
    if(str[0]=='1'){
        for(int i=0;i<str.size();i++){
            if(str[i]-'0'==0){
                cnt0++;
            }
        }
        cout<<cnt0<<endl;
    }else{
        long long cnt0 =0;
        for(int i=0;i<n;i++){
            if(str[i]=='0')cnt0++;
        }
        long long minn =INT_MAX;
        long long cnt1=0;
    for(int i=0;i<n;i++){
        
        if(str[i]=='0')cnt0--;
        if(str[i]=='1')cnt1++;
        minn = min(minn,cnt1+cnt0);
        ans =minn;
    }
    cout<<ans<<endl;
}
    
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