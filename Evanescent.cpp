#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1, x = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) ans++;
        if(i == n - 1) break;

        if(s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if(s[i + 1] == s[i - 1]) x = 2;
            else x = max(x, 1);
        }
    }
        
    cout << ans - x << endl;

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