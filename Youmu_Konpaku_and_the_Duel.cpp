#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x;
    cin>>x;

    for(int r=1;;r++){
        int a=(r+2)/3;
        int k=r-a;

        int sum=a*(k+1)-a*(a-1)/2;

        if(sum>=x){
            cout<<r<<endl;
            return;
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}