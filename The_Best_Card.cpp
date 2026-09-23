#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    n++;
    bool ok = false;
    for (int i=2;i*i<=n;i++) {
        if (n%i==0) {
            ok =true;#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    n++;
    bool ok = false;
    for (int i=2;i*i<=n;i++) {
        if (n%i==0) {
            ok =true;
        }
    }
    if (ok) {
        cout<<"NO"<<endl;
    }else {
        cout<<"yes"<<endl;
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
        }
    }
    if (ok) {
        cout<<"NO"<<endl;
    }else {
        cout<<"yes"<<endl;
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