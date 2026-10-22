#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int>a(2*n);
    vector<int> ffff[n+1];
    for (int i =0;i<2*n;i++) {
        cin>>a[i];
        ffff[a[i]].push_back(i);
    }


    vector<int> qqqqq(2 * n);
    for (int i = 1; i <= n; i++) {
        int first = ffff[i][0];
        int second = ffff[i][1];

        qqqqq[first] = second;
        qqqqq[second] = first;
    }

    string b(2 * n, ' ');
    vector<int> pre(2 * n, -1), nxt(2 * n, -1);

    for (int i = 1; i < 2 * n; i++) {
        pre[i] = (i == 1 ? -1 : i - 1);
        nxt[i] = (i == 2 * n - 1 ? -1 : i + 1);
    }

    auto erase = [&](int x) {
        if (pre[x] != -1) nxt[pre[x]] = nxt[x];
        if (nxt[x] != -1) pre[nxt[x]] = pre[x];
    };

    int curr = qqqqq[0];

    for (int i = 0; i < n - 1; i++) {
        int target;
        if (nxt[curr] != -1) {
            target = nxt[curr];
        } else {
            target = pre[curr];
        }

        b[min(curr, target)] = '(';
        b[max(curr, target)] = ')';

        erase(curr);
        erase(target);

        curr = qqqqq[target];
    }

    b[0] = '(';
    b[curr] = ')';

    cout << b << endl;


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