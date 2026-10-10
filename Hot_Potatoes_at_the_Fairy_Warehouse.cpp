#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    long long odd = 0;
    long long even = 0;
    string a;
    cin>>a;
    a = " "+a;
    for (int i = 1;i<=a.size();i++) {
        int next = (i+1)%a.size();
       if (a[i] - '0' == 1) {
           if (a[next] - '0' == 0) {
               if (i&1) {
                   odd++;
               }else {
                   even++;
               }
           }else {
               if (i&1) {
                   even++;
               }else {
                   odd++;
               }
           }
       }
    }
    cout<<odd<<" "<<even<<endl;
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