#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n;
    cin>>n;
    for (long long i =1;i<=n;i++) {
        long long curr = (i*i)*(i*i -1)/2 - 4*(i -1)*(i -2);
        cout<<curr<<endl;
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