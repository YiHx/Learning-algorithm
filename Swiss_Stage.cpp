#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int x,y;
    cin>>x>>y;
    if (x==0 && y ==0) {
        cout<<4;
    }else if (x ==1 && y ==0) {
        cout<<3;
    }else if ( x ==0 && y ==1) {
        cout<<4;
    }else if (x==2 && y ==0) {
        cout<<2;
    }else if (x==1 && y ==1) {
        cout<<3;
    }else if (x==0 && y ==2) {
        cout<<6;
    }else if (x ==2 && y ==1) {
        cout<<2;
    }else if (x ==1 && y==2) {
        cout<<4;
    }else if (x==2 && y==2) {
        cout<<2;
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