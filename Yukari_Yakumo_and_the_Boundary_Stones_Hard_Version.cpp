#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int n;
    cin>>n;
    string a;
    a  ='+';
    for(int i =0;i<n-1;i++){
        a+="--+";
    }
    cout<<a<<endl;

    int k;
    cin>>k;
    int two = (k+2)/3;
    cout<< two*2 + n - two<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}