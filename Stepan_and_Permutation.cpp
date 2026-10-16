#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    
    bool ok = false;

    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        int curr = abs(a - i -1);

        int gd = __gcd(x,y);

        ok = ok | !(curr %gd ==0);



    }
    cout<<(ok? "No" :"YES")<<endl;
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