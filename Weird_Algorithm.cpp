#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n&1){
            n = n*3+1;
        }else {
            n = n/2;
        }
    }
    cout<<n;
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