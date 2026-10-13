#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    long long cnt1 = 0;
    long long cnt2 = 0;

    for (int i =0;i<n;i++) {
        cin>>a[i];
        cnt1+=a[i];
    }
    for (int i =0;i<n;i++) {
        cin>>b[i];
        cnt2+=b[i];
    }
    if (a == b) {
        cout<<0<<endl;
        return;
    }

    int ans = 0;
    for (int i =0;i<n;i++) {
        if(a[i]!=b[i]) {
            ans+=a[i];
        }
    }
    if (cnt2 == n && cnt1!=n) {
        cout<<-1<<endl;
        return;
    }
    if (cnt1 ==0 && cnt2!=0) {
        cout<<-1<<endl;
        return;
    }
    if (ans == 0 && n == 2) {
        cout<<-1<<endl;
        return;
    }
        if (ans%2 == 0) {
            cout<<2<<endl;
        }else {
            cout<<1<<endl;
        }

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