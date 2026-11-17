#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string a;
    string ans = "";
    cin>>a;
    for (int i =0;i<a.size();i++) {
        if (a[i] == '-') {
            if (!ans.empty())ans.pop_back();
        }else {
            if (ans.size()>=1 && ans[ans.size()-1] == a[i])continue;
            if (ans.size()>=2 && ans[ans.size()-1] == a[i])continue;
            if (ans.size()>=2 && ans[ans.size()-2] == a[i])continue;
            ans.push_back(a[i]);
        }
    }
    if (ans.empty()) {
        cout<<"-"<<endl;
    }else {
        cout<<ans<<endl;
    }
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}