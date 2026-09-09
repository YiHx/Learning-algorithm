#include <bits/stdc++.h>
using namespace std;

vector<int> nextArray(const string &s, const int last) {

    vector<int> next (last+1,0);
    if (last==1) {
        next[0]=-1;
        return next;
    }
    next[0]=-1;
    next[1]=0;
    int i =2,ct=0;
    while (i<last) {
        if (s[i-1]==s[ct]) {
            next[i++]=++ct;
        }else if (ct>0) {
            ct =next[ct];
        }else {
            next[i++]=0;
        }
    }
    return next;
}

void solve() {
    int l;
    string s;
    cin>>l>>s;
    int last=0;
    char lastNumber = s[s.length()-1];
    for (int i=0;i<s.length();i++) {
        if (s[i]==lastNumber) {
            last =i;
            break;
        }
    }
    vector<int> next =nextArray(s,((int)s.length())-last);
    int maxx = INT_MIN;
    if (s.size()==1) {
        cout<<"1"<<endl;
        return ;
    }
   for (int i=1;i<(int)s.length()-last;i++) {

           maxx = max(maxx,next[i]);

   }
    if (maxx==0||maxx ==INT_MIN) {
        cout<<(int)s.length()-last-1<<endl;
    }else {
        cout<<maxx<<endl;
    }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;

}