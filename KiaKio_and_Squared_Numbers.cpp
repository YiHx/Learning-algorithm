#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int function1(int x) {
    int sum = 0;
    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i= 0;i<n;i++){
        for(int j =1;j<=100;j++){
            a[i] = function1(a[i]);
        }
    }
    map<int,long long> mp;
    for(int i =0 ;i<n;i++){
        mp[a[i]]++;
    }
    long long ans = 0;
    for(auto &[number,cnt]:mp){
        ans += cnt*(cnt -1)/2;
    }
    cout<<ans<<endl;
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