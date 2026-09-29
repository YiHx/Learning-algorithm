#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    if(n ==1){
        cout<<"1"<<endl;
        return;
    }
    if(n == 4){
        cout<<"2"<<" "<<"4"<<" "<<"1"<<" "<<"3"<<endl;
        return;
    }
    if(n<= 3){
        cout<<"NO SOLUTION"<<endl;
    }else {
        for(int i = 1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i =2;i<=n;i+=2){
            cout<<i<<" ";
        }
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