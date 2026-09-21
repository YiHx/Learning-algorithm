#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long ans0=0;
    long long ans1 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)ans0++;
        else ans1++;
    }
    if(ans1==1&&n==2){
        cout<<"Bessie"<<endl;
    
    }else {
        if (ans0==0){
            cout<<"Bessie"<<endl;
        }else if(ans1==0){
            cout<<"Elsie"<<endl;
        }else 
        if(ans0%2!=0){
            cout<<"Bessie"<<endl;
        }else if(ans1>1) {
            cout<<"Bessie"<<endl;
        }else {
            cout<<"Elsie"<<endl;
        }
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