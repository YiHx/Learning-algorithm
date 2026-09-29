#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string a;
    cin>>a;
    long long ans = 1;
    long long maxx = 1;
    for(int i =0;i+1<a.length();i++){
        if(a[i] == a[i+1]){
            ans++;
            maxx = max(ans,maxx);
        }else {
            ans = 1;
        }
    }
    cout<<maxx<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}