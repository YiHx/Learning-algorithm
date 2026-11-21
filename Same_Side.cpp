#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int a,b;
    cin>>a>>b;
    if((a<0 && b>0) || (a>0 && b <0)){
        cout<<"No"<<endl;
    }else {
        cout<<"Yes"<<endl;
    }
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