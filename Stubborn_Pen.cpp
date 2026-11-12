#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int ans = 0;
    char next = ' ';
    if(a[0]=='B'){
        ans++;
        next = 'R';
    }else {
        next = 'B';
    }
    for(int i =1;i<a.size();i++){
        if(a[i]!=next){
            ans++;
        }else if(next == 'R'){
            next = 'B';
        }else if(next == 'B'){
            next = 'R';
        }
    }
    cout<<ans<<endl;
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