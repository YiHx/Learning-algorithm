#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    for (int i =0;i<m;i++) {
        cin>>b[i];
    }

    if (n < m) {
        cout<<"No"<<endl;
        return;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (b[0]<a[0] || b[b.size()-1] > a[a.size()-1]) {
        cout<<"No"<<endl;
        return;
    }
    vector<bool> ok(n,false);
    bool check = true;
    for (int i =0;i<b.size();i++) {
        auto before = upper_bound(a.begin(),a.end(),b[i]);
        auto next = lower_bound(a.begin(),a.end(),b[i]);
        if  ( before == a.end() && next == a.end()) {
            check = false;
            break;
        }
        before--;
        if (ok[before - a.begin() ]==true || ok[next - a.begin()] == true) {
            check = false;
            break;
        }
        ok[before - a.begin()] = true;
        ok[next - a.begin()] = true;
    }
    cout<< (check?"Yes":"No")<<endl;
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