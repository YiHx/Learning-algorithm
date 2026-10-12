#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int add1 =0;
    int even1 = 0;
    int add2 = 0;
    int even2 = 0;
    bool ok = true;
    long long ans  = 0;
    for (int i =0;i<a.size();i++) {
        if (a[i] == '1') {
            if ((i+1)&1) {
                add1++;
            }else {
                even1++;
            }
        }
    }

    for (int i =0;i<b.size();i++) {
        if (b[i] == '1') {
            if ((i+1)&1) {
                add2++;
            }else {
                even2++;
            }
        }
    }


    if (!ok) {
        cout<<-1<<endl;
    }else {
        for(int k = 0; k < 2; k++) {
            vector<int> p1, p2;
            for(int i = k; i < n; i += 2) {
                if(a[i] == '1') p1.push_back(i);
                if(b[i] == '1') p2.push_back(i);
            }

            if(p1.size() != p2.size()) {
                ok = false;
                break;
            }

            for(int i = 0; i < p1.size(); i++) ans += abs(p1[i] - p2[i]);
        }
    }
    if (!ok)cout<<-1<<endl;
    else {
        cout<< ans / 2 <<endl;
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