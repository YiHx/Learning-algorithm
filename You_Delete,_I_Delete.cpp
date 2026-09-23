#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string str;
    cin>>str;
    string ans = "";
    int index0 = 0;
    int index1 = 0;
    for (int i=0;i<str.length();i++) {
        if (str[i]=='0') {
            index0 = i;
            break;
        }
    }
    for (int i=0;i<str.length();i++) {
        if (str[i]=='1') {
            index1 = i;
            break;
        }
    }
    for (int i=0;i<str.length();i++) {
        if (i ==index0|| i == index1) {
            continue;
        }
        ans +=str[i];
    }
    cout<<ans<<endl;

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