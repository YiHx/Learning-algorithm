#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    char b;
    cin>>n>>b;
    string a;
    cin>>a;
    a = " "+ a;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[n - i +1]){
            continue;
        }else {
            if(a[i] == b &&a[n - i +1]!= b || a[i]!=b && a[n - i +1]==b){
                ans++;
            }else {
                ans+=2;
            }
        }
    }
    cout<<ans/2<<endl;
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