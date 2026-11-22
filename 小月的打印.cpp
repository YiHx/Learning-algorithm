#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string a;
    cin>>a;
    string ans  = "";
    int cnt = a.size() / n ;
    int left = a.size() % n;
    ans = a.substr((cnt -1)*n,n);
    if(cnt %2 ==0){
        reverse(ans.begin(),ans.end());
        for(int i =0;i<left;i++){
            ans[i] = a[cnt*n+i];
        }
        

    } else {
        reverse(ans.begin(),ans.end());
        for(int i =0;i<left;i++){
            ans[i] = a[cnt*n+i];
        }
        reverse(ans.begin(),ans.end());

    }
    cout <<ans<<endl;
}

signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}