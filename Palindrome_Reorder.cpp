#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string a;
    cin>>a;
    map<char,int> mp;
    for (int i =0;i<a.size();i++) {
        mp[a[i]]++;
    }
    int b = 0;
    bool ok = true;
    for (auto [it , cnt] : mp) {
        if ( cnt%2 ==1 && b!=0) {
            ok = false;
            break;
        }
        if (cnt%2 ==1 && b ==0) {
            b++;
        }
    }
    if (ok) {
        if (a.size()%2 ==0 && b!=0) {
            ok = false;
        }
    }
    string sna = "";
    char now ;
    bool check = false;
    if (ok) {
        for (auto [it , cnt] : mp) {
            if ( cnt%2 ==1) {
                now = it;
                check  = true;
            }
                sna.append(cnt/2,it);


        }
    }
    string ans = sna;
    reverse(ans.begin(),ans.end());
    if (check) {
        ans = ans + now;
    }
    ans = ans + sna;
    if (ok) {
        cout<<ans<<endl;
    }else {
        cout<<"NO SOLUTION"<<endl;
    }


}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}