#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    if (n ==1 || n ==2) {
        cout<<"NO"<<endl;
        return;
    }

    bool ok =false;
    if ((n & (n -1)) == 0) {
        ok  = true;
    }
    int cnt = n/4;

    if (ok) {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for (int i =0;i<cnt;i++) {
            cout<< i*4+1<<" ";
            cout<<i*4+4<<" ";
        }
        cout<<endl;
        cout<<n/2<<endl;
        for (int i =0;i<cnt;i++) {
            cout<<i*4 +2<<" ";
            cout<<i*4 +3<<" ";
        }
        cout<<endl;
        return;
    }

    int last = n -3;
    if (last == 2) {
        cout<<"NO"<<endl;
    }
    bool check = false;
    int other = last -1;
    if (last ==0 || (((last & other) == 0))) {
        check =true;
    }
    int cntt = last/4;
    if (check) {
        cout<<"YES"<<endl;
        cout<<last/2+2<<endl;
        cout<<"1"<<" "<<"2"<<" ";
        for (int i =0;i<cntt;i++) {
            cout<<4*i+4<<" ";
            cout<<4*i+7<<" ";
        }
        cout<<endl;
        cout<<last/2+1<<endl;
        cout<<"3"<<" ";
        for (int i =0;i<cntt;i++) {
            cout<<4*i+5<<" ";
            cout<<4*i+6<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<"NO"<<endl;
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