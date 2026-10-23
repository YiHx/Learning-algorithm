#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if (a+b>n) {
        cout<<"NO"<<endl;
        return;
    }
    if ((a == 0 && b != 0) || (a != 0 && b == 0)) {
        cout << "NO" << endl;
        return;
    }

    vector<int> ans1(n);
    iota(ans1.begin(), ans1.end(), 1);
    vector<int> ans2(n);
    iota(ans2.begin(), ans2.end(), 1);
    if (a == 0 && b == 0) {
        cout<<"YES"<<endl;
        for (int i  =0;i<n;i++) {
            cout<<ans1[i]<<" ";
        }
        cout<<endl;
        for (int i =0;i<n;i++) {
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
    }else {
        int diff = abs(a - b);
            rotate(ans1.begin(),ans1.begin()+b,ans1.begin()+a+b);
        cout<<"YES"<<endl;
        for (int i =0;i<n;i++) {
            cout<<ans1[i]<<" ";
        }
        cout<<endl;
        for (int i=0;i<n;i++) {
            cout<<ans2[i]<<" ";
        }
        cout<<endl;

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