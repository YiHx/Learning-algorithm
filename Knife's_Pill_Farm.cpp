#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i = 0; i < n;i++) {
        cin>>a[i];
    }
    priority_queue<ll> pq;
    ll sum =0;
    ll maxx =LLONG_MIN;
    for (int i=0;i<n;i++) {
        if (pq.size() == m - 1) {
            maxx = max(maxx,m*a[i] - sum);
        }
        pq.push(a[i]);
        sum += a[i];
        if (pq.size() == m) {
            sum-=pq.top();
            pq.pop();
        }
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