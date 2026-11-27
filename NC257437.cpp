#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int cost1 = 0;
    int cost2 = 0;

    for (int i =0;i<n;i++) {
        char c1 = (i%2 == 0 ? '0' :'1');
        char c2 = (i%2 ==0 ? '1' : '0');
        if (s[i]!=c1)cost1+= i+1;
        if (s[i]!=c2)cost2+=i+1;
    }
    cout << min(cost1,cost2) <<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}