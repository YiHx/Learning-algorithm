#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(abs(a+c-b)>abs(a-b)){
        cout<<abs(a+c-b)<<endl;
    }else {
        cout<<abs(a-b)<<endl;
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