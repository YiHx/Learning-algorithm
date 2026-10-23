#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    set<int> st;
    for (int i =0;i<n;i++) {
        int curr;
        cin>>curr;
        st.insert(curr);
    }
    cout<<st.size()<<endl;
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}