#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Node {
    int l,r,u,v;
};

void solve() {
    int n;
    cin>>n;
    vector<Node> a(n);


    for (auto &[ l,r,u,v] : a) {
        cin>>l>>r>>u>>v;
    }

    for (int m =n;m>=1;m--) {
        int k = 0;

        for (const auto &[l,r,u,v] : a) {
            int left = k+1;
            int right = m - k;

            bool ok1 = left < l || left > r;
            bool ok2 = right < u || right > v;
            if (ok1 && ok2) {
                k++;
            }

            if ( k ==m ) {
                cout<<m<<endl;
                return;
            }
            
        }


    }
    cout<<0<<endl;

}

int main () {
    int T =1;
    cin>>T;
    while (T--) {
        solve();
    }
}