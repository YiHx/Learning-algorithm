#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    vector<int> l;
    vector<int> r;
    vector<int> lr;
    for (int i = 0;i<s.size();i++) {
        if (s[i] == 'L') {
            l.push_back(i);
        }
        if (s[i] == 'R') {
            r.push_back(i);
        }
        if (i + 1 < s.size() && s[i] == 'L' && s[i+1] == 'R') {
            lr.push_back(i);
        }
    }

    while (q--) {
        string t;
        cin>>t;
        bool ok =true;
        if (t[0] == 'R' && s[0]!= 'R' || t[t.size()-1]=='L' && s[s.size()-1]!= 'L') {
            cout<<"NO"<<endl;
            continue;
        }
        int pos = 0;

        for (int i = 0;i<t.size();i++) {
            if (i == t.size() -1 ) {
               if (t[i] == 'L') {
                   auto it = lower_bound(l.begin(), l.end(), pos);
                   if (it == l.end()) {
                       ok =false;
                   }
               }else {
                   auto it = lower_bound(r.begin(), r.end(), pos);
                   if (it == r.end()) {
                       ok =false;
                   }
               }
            }
            if (t[i]=='L'&&t[i+1]=='R') {
                auto it = lower_bound(lr.begin(), lr.end(), pos);
                if (it == lr.end()) {
                    ok =false;
                    break;
                }
                pos = *it + 2;
                i++;
            }else if (t[i] == 'R') {
                auto it = lower_bound(r.begin(), r.end(), pos);
                if (it == r.end()) {
                    ok = false;
                    break;
                }
                pos = *it +1;
            }else {
                auto it = lower_bound(l.begin(), l.end(), pos);
                if(it == l.end()) {
                    ok =false;
                    break;
                }
                pos = *it + 1;
            }
        }

        if (ok) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
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