#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> nextArray(const string&t) {
    int m = t.length();
    vector<int> next(m+1,0);
    if (m == 1) {
        next[0] = -1;
        return next;
    }
    next[0] = -1;
    next[1] = 0;
    int i =2,ct = 0;
    while (i < m) {
        if (t[i -1] == t[ct]) {
            next[i++] = ++ct;
        }else if (ct> 0) {
            ct = next[ct];
        }else {
            next[i++] = 0;
        }
    }
    return next;
}

void kmp(const string &s ,const string &t) {
    vector<int> next = nextArray(s);
    string taget = s;
    int len1 = s.length();
    int len2 = t.length();
    int x =0;
    int y =0;
    while (x < len1 && y < len2) {
        if (s[x] == t[y]) {
            x++;
            y++;
        }else if ( y==0) {
            x++;
        }else {
            y = next[y];
        }
    }
    if (x ==len1 && y!=len2) {
        cout<<"No"<<endl;
    }else {
        cout<<"Yes"<<endl;
    }
}

void solve(){
    int q;
    cin>>q;
    string s,t;
    cin>>s>>t;
    while(q--) {
        int l,r;
        cin>>l>>r;
        string now = s.substr(l-1,r-l+1);
        kmp(now,t);
    }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}