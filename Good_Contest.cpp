#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(3);
    int minn = INT_MAX;
    for(int i=0;i<3;i++){
        cin>>a[i];
        minn=min(minn,a[i]);
    }
    cout<<n-minn<<endl;
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