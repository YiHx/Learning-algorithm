#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l,n,m;
    cin>> l >> n>> m;
    vector<int> a(n+1);
    a[0] = 0;
    for(int i =1;i<=n;i++){
        cin>>a[i];
    }
    a.push_back(l);

    int left = 1;
    int right = l;
    int mid = (left + right)/2;
    
    auto check = [&](int mid){
        int sum = 0;
        for(int i =0;i<a.size() -1;i++){
            if(abs(a[i] - a[i+1]) > mid) 
        }
    }
    
    while(left < right){
        if(check(mid)){

        }
    }




     
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}