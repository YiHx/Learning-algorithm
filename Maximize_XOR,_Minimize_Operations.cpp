#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int x,y;
    cin >> x >> y;
    int ans = x +y;

    for (int i = (1<<30);i>=1;i>>=1) {
        if ((ans&i)!=0 && x>=i) {
            x-=i;
        }
    }
    cout<<ans<<" "<<x<<endl;


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