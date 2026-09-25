#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    long long x;
    cin>>n>>x;

    vector<long long > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(x == 1){
        cout<< 0 <<endl;
        return;
    }

    vector<long long > primes;
    long long nowx = x;
    for(long long i =2; i *i  <= nowx; i++ ){
        if(nowx%i == 0){
            primes.push_back(i);
        }
        while(nowx % i ==0){
            nowx/= i;
        }
    }
    if(nowx > 1){
        primes.push_back(nowx);
    }

    long long maxx = 0;

    for(auto it : primes){
        long long ans = 0;
        for(int i =0 ;i<n;i++){
            if(a[i]%it == 0){
                ans+=a[i];
            }
        }
        maxx = max(maxx,ans);
    }
    cout<<maxx<<endl;
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