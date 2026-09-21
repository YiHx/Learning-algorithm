#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int cnt0=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=1;i<n-1;i++) {
        if (a[i]==0) {
            cnt0++;
        }
    }

    if (a[0]==0&&a[n-1]==0) {
        cout<<0<<endl;
    }else if ((a[0]==0&&a[n-1]==1&&cnt0>=1)||(a[0]==1&&a[n-1]==0&&cnt0>=1)) {
        cout<<1<<endl;
    }else if (a[0]==1&&a[n-1]==1&&cnt0>=2) {
        cout<<2<<endl;
    }else {
        cout<<-1<<endl;
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