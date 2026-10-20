#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
   string a;
    cin>>a;
    sort(a.begin(), a.end());
    vector<string>b;
    b.push_back(a);
    while (next_permutation(a.begin(), a.end())) {
        b.push_back(a);
    }

    cout<<b.size()<<endl;
    for (auto it: b) {
        cout<<it<<endl;
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