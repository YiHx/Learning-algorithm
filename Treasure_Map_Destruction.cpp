#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i =1;i<=n;i++) {
        cin>>a[i];
    }

    vector<int> b(n+2,0);
    for (int i =1;i<=n;i++) {
        if (a[i]!=-1) {
            int left = max(1,i - a[i] +1);
            int right = min(n,i+a[i]-1);
            if (left <= right) {
                b[left] +=1;
                b[right+1] +=-1;
            }
        }
    }
    int cnt = 0;
    vector<int> c(n+1,0);
    for (int i =1 ;i<=n;i++) {
        cnt+=b[i];
        if (cnt ==0) {
            c[i] =1;
        }else {
            c[i] = 0;
        }
    }

    bool ok =true;
    for (int i=1;i<=n;i++) {
            if (a[i] != -1) {
                bool found = false;

                int p1 = i - a[i];
                int p2 = i + a[i];
                if (p1 >= 1 && p1 <= n && c[p1] == 1) {
                    found = true;
                }

                if (p2 >= 1 && p2 <= n && c[p2] == 1) {
                    found = true;
                }

                if (!found) {
                    ok = false;
                    break;
                }
            }
        }

    if (ok) {
        for (int i =1;i<=n;i++) {
            cout<<c[i];
        }
        cout<<endl;
    }else {
        cout<<"-1"<<endl;
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