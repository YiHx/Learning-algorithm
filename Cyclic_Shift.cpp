#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> nxt(n,-1);
    stack<int> b;
    for (int i= n -1;i>=0;i--) {
        while (!b.empty() && a[i] >= b.top()) b.pop();
        if (!b.empty()) nxt[i] = b.top();
        b.push(i);
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