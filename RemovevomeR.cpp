#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    for(int i = 0; i < n - 1; i++) if(s[i] != s[i + 1]) count++;

    cout << (count == 1 ? 2 : 1) << endl;
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