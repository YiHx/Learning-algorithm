#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s;
    cin >> s;
    int n = s.length();

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '2') {
            cnt2++;
        } else {
            char c = s[i];


            if (i % 2 == 1) {
                c = (c == '0' ? '1' : '0');
            }
            if (c == '0') cnt0++;
            else cnt1++;
        }
    }
    int diff = abs(cnt0 - cnt1);
    cout << max(n % 2, diff - cnt2) << endl;
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