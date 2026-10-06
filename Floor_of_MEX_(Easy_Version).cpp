#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for (int i = 1;i<=n;i++) {
        int curr;
        cin>>curr;
        a.push_back({i*curr,i*(curr+1) -1});
    }
    vector<int> d(n + 1);
    for(auto [l, r] : a) {
        d[min(n, l)]++;
        d[min(n, r + 1)]--;
    }
    int cnt = 0;
    vector<int> b;
    for(int i = 0; i < n; i++) {
        cnt += d[i];
        if(cnt == 0) {
            b.push_back(i);
        }
    }
    cout << b.size() << endl;
    for(int i : b) cout << i << " ";
    cout << endl;


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