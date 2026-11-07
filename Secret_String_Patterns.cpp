#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    cout<<"?"<<" "<<"1"<<" "<<n<<endl;
    cout.flush();
    int curr;
    cin>>curr;
    if (curr == -1) exit(0);
    if(curr == 0){
        cout<<"! NO"<<endl;
        cout.flush();
        return;
    }
    cout<<"?"<<" "<<"1"<<" "<<curr<<endl;
    cout.flush();

    int now;
    cin>>now;
    if (now == -1) exit(0);
    if(now == curr){
        cout<<"! NO"<<endl;
        cout.flush();
    }else {
        cout<<"! YES"<<endl;
        cout.flush();
    }

}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}