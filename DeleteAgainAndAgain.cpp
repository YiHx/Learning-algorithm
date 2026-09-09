#include <bits/stdc++.h>
using namespace std;

vector<int> nextArray(const string&t) {
    int m =t.length();
    vector<int> next(m+1,0);
    if (m==1) {
        next[0]=-1;
        return next;
    }
    next[0]=-1;
    next[1]=0;
    int i=2,ct=0;
    while (i<m) {
        if (t[i-1]==t[ct]) {
            next[i++]=++ct;
        }else if (ct>0) {
            ct=next[ct];
        }else {
            next[i++]=0;
        }
    }
    return next;

}

string kmp(const string&s,const string&t) {
    string taget=s;
    int len1=s.length();
    int len2=t.length();
    bool check=true;
    int x=0,y=0;
    vector<int> next =nextArray(t);
    while (check) {
        x=0;
        y=0;
        len1=taget.length();
        while (x<len1 && y<len2) {
            if (t[y]==taget[x]) {
                x++;
                y++;
            }else if (y==0) {
                x++;
            }else {
                y=next[y];
            }
        }
        if (y==len2) {
            string source1 =taget.substr(0,x-y);
            string source2 =taget.substr(x);
            taget=source1+source2;
        }else {
            check=false;
        }
    }
    return taget;
}
void solve() {
    string s,t;
    cin>>s>>t;

    string taget=kmp(s,t);
    cout<<taget<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}