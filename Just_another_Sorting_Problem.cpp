#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    string a;
    cin>>n;
    cin>>a;
    vector<int> b(n+1);

    bool ok =true;
    long long cnt =0;
    for (int i =1;i<=n;i++) {
        cin>>b[i];
        if (b[i]!= i) {
            ok =false;
            cnt++;
        }
    }
    if (n == 2) {
        cout<<"Alice"<<endl;
        return;
    }
    if (ok ||(cnt == 2 && a == "Alice")) {
        cout<<"Alice"<<endl;
    }else if (cnt == 3 && a == "Bob"&&n==3) {
        cout<<"Alice"<<endl;
    }else {
        cout<<"Bob"<<endl;
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