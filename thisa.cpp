#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin>>a;
    int cnt =(int)a.length() -1 ;
    if (a[cnt]=='e') {
        cout<<a+'r';
    }else {
        cout<<a+'e'+'r';
    }
    return 0;
}