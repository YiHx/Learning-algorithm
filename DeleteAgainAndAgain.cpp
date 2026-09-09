#include <bits/stdc++.h>
using namespace std;
const int N =1e6+10;
int stack1[N];
int stack2[N];
int size1;


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

void kmp(const string&s,const string&t) {
    string taget=s;
    int len1=s.length();
    int len2=t.length();
    bool check=true;
    int x=0,y=0;
    vector<int> next =nextArray(t);



        while (x<len1) {
            if (t[y]==taget[x]) {

                stack1[size1]=x;
                stack2[size1]=y;
                size1++;
                x++;
                y++;

            }else if (y==0) {
                stack1[size1]=x;
                stack2[size1]=-1;
                size1++;
                x++;
            }else {
                y=next[y];
            }
            if (y==len2) {
                size1 -= len2;
                y= size1>0 ? (stack2[size1-1]+1) : 0;
            }
        }
        // if (y==len2) {
        //     string source1 =taget.substr(0,x-y);
        //     string source2 =taget.substr(x);
        //     taget=source1+source2;
        // }else {
        //     check=false;
        // }

}
void solve() {
    string s,t;
    cin>>s>>t;

    kmp(s,t);
    for (int i=0;i<size1;i++) {
        cout<<s[stack1[i]];
    }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}