#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int add1 =0;
    int even1 = 0;
    int add2 = 0;
    int even2 = 0;
    for (int i =0;i<a.size();i++) {
        if (a[i] == '1') {
            if ((i+1)&1) {
                add1++;
            }else {
                even1++;
            }
        }
    }

    for (int i =0;i<b.size();i++) {
        if (b[i] == '1') {
            if ((i+1)&1) {
                add2++;
            }else {
                even2++;
            }
        }
    }

    if (add1==add2 && even1==even2) {
        cout<<"YEs"<<endl;
    }else {
        cout<<"NO"<<endl;
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