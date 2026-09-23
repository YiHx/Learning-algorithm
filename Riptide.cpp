#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    vector<int> a(3);
    for (int i=0;i<3;i++) {
        cin>>a[i];
    }
    ranges::sort(a);
    cout<<min({a[1]-a[0],a[2]-a[1]})<<endl;
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